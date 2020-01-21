use std::io;

fn extract(a: &mut Vec<i32>) -> i32 {
    if a.len() < 1 {
        return i32::min_value();
    }

    let maxv;
    maxv = a[1];
    a[1] = *a.last().unwrap();
    a.pop();
    max_heapify(a, 1);
    maxv
}

fn increase_key(key: i32, a: &mut Vec<i32>) {
    let mut i = a.len() - 1;
    if key < a[i] {
        return;
    }
    a[i] = key;
    while i > 1 && a[i / 2] < a[i] {
        a.swap(i, i / 2);
        i = i / 2;
    }
}

fn insert(key: i32, a: &mut Vec<i32>) {
    a.push(i32::min_value());
    increase_key(key, a);
}

fn main() {
    let mut a: Vec<i32> = vec![-1]; // -1: dummy key
    let mut key: i32;

    loop {
        let input = read_line();

        if input == String::from("end") {
            break;
        }
        if input.starts_with("insert") {
            let mut iter = input.split_whitespace();
            iter.next(); // "input"
            key = iter.next().unwrap().parse().unwrap();
            insert(key, &mut a);
        } else {
            println!("{}", extract(&mut a));
        }
    }
}

// Utilities
fn read_line() -> String {
    let mut input = String::new();
    io::stdin().read_line(&mut input).ok();
    input.trim().to_string()
}

fn left(i: usize) -> usize {
    2 * i
}

fn right(i: usize) -> usize {
    2 * i + 1
}

fn max_heapify(a: &mut Vec<i32>, i: usize) {
    let h = a.len() - 1;

    let l = left(i);
    let r = right(i);

    let mut largest: usize;

    if l <= h && a[l] > a[i] {
        largest = l;
    } else {
        largest = i;
    }

    if r <= h && a[r] > a[largest] {
        largest = r;
    }

    if largest != i {
        a.swap(i, largest);
        max_heapify(a, largest);
    }
}
