fn main() {
    let mut stack1: Vec<usize> = Vec::new();
    let mut stack2: Vec<(usize, usize)> = Vec::new();

    let mut sum = 0;

    let mut buf = String::new();
    std::io::stdin().read_line(&mut buf).ok();
    let chars: Vec<char> = buf.trim().chars().collect();

    for i in 0..chars.len() {
        if chars[i] == '\\' {
            stack1.push(i);
        } else if chars[i] == '/' && stack1.len() > 0 {
            let j = stack1.pop().unwrap();
            let mut a = i - j;
            sum += a;
            while stack2.len() > 0 && stack2[stack2.len() - 1].0 > j {
                a += stack2.pop().unwrap().1;
            }
            stack2.push((j, a));
        }
    }

    let mut ans: Vec<usize> = Vec::new();
    for _ in 0..stack2.len() {
        ans.push(stack2.pop().unwrap().1);
    }
    ans.reverse();
    println!("{}", sum);
    print!("{}", ans.len());
    for a in ans {
        print!(" {}", a);
    }
    println!();
}
