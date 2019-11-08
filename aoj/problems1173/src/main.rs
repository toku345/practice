use std::io;
use std::io::prelude::*;

fn main() {
    let stdin = io::stdin();
    for line in stdin.lock().lines() {
        let chars: Vec<char> = line.unwrap().chars().collect();

        // . だけの行は最終行
        if chars[0] == '.' && chars.len() <= 1 {
            return
        }

        let mut stack: Vec<char> = Vec::new();

        for char in chars {
            if char == '(' || char == '[' {
                stack.push(char);
            } else if char == ')' {
                if stack.len() < 1 || stack.last().unwrap() != &'(' {
                    stack.push(char);
                    break;
                }
                stack.pop();
            } else if char == ']' {
                if stack.len() < 1 || stack.last().unwrap() != &'[' {
                    stack.push(char);
                    break;
                }
                stack.pop();
            }
        }

        if stack.len() > 0 {
            println!("no");
        } else {
            println!("yes");
        }
    }
}
