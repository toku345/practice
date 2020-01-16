use std::io;

fn parent(i: usize) -> usize {
    i / 2
}

fn left(i: usize) -> usize {
    2 * i
}

fn right(i: usize) -> usize {
    2 * i + 1
}

fn main() {
    let h = read_line().parse().unwrap();

    let input: Vec<i32> = read_line()
        .split_whitespace()
        .map(|n| n.parse::<i32>().unwrap())
        .collect();

    let a = [vec![0], input].concat();

    for i in 1..(h + 1) {
        print!("node {}: key = {}, ", i, a[i]);
        if parent(i) >= 1 {
            print!("parent key = {}, ", a[parent(i)])
        }
        if left(i) <= h {
            print!("left key = {}, ", a[left(i)]);
        }
        if right(i) <= h {
            print!("right key = {}, ", a[right(i)]);
        }
        println!();
    }
}

// Utilities
fn read_line() -> String {
    let mut input = String::new();
    io::stdin().read_line(&mut input).ok();
    input.trim().to_string()
}
