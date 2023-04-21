fn square_digits(num: u64) -> u64 {
    let number: Vec<u64> = num
        .to_string()
        .chars()
        .map(|c| c.to_digit(10).unwrap() as u64)
        .collect();
    let mut resul_vec: Vec<u64> = Vec::new();

    for i in number {
        resul_vec.push(i * i);
    }

    let mut result_string = String::new();

    for i in resul_vec {
        result_string.push_str(&i.to_string());
    }

    return result_string.parse().unwrap();
}

fn main() {
    println!("{}", square_digits(765));
}
