//https://www.codewars.com/kata/559590633066759614000063

fn min_max(lst: &[i32]) -> (i32, i32) {
    (*lst.iter().min().unwrap(), *lst.iter().max().unwrap())
}

fn main() {
    let lst = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10];
    let (min, max) = min_max(&lst);
    println!("min: {}, max: {}", min, max);
}
