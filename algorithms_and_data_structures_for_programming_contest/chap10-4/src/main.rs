use std::io;

fn extract(a: &Vec<i32>, h: usize) -> i32 {
    32
}

fn insert(key: i32, a: &Vec<i32>, h: &mut usize) {
    *h += 1;
}

fn main() {
    let mut a: Vec<i32> = vec![-1]; // -1: dummy key
    let mut key: i32;
    let mut h = 0;

    loop {
        let input = read_line();

        if input == String::from("end") {
            break;
        }
        if input.starts_with("insert") {
            let mut iter = input.split_whitespace();
            iter.next(); // "input"
            key = iter.next().unwrap().parse().unwrap();
            insert(key, &a, &mut h);
        } else {
            println!("{}", extract(&a, h));
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

fn max_heapify(a: &mut Vec<i32>, i: usize, h: usize) {
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
        max_heapify(a, largest, h);
    }
}
