use std::io;

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

fn build_max_heap(a: &mut Vec<i32>, h: usize) {
    for i in (1..=h / 2).rev() {
        max_heapify(a, i, h)
    }
}

fn main() {
    let h: usize = read_line().parse().unwrap();

    let input: Vec<i32> = read_line()
        .split_whitespace()
        .map(|n| n.parse::<i32>().unwrap())
        .collect();

    let mut a = [vec![0], input].concat();

    build_max_heap(&mut a, h);

    for i in 1..=h {
        print!(" {}", a[i]);
    }
    println!();
}

// Utilities
fn read_line() -> String {
    let mut input = String::new();
    io::stdin().read_line(&mut input).ok();
    input.trim().to_string()
}
