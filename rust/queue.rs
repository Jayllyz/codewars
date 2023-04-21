//codewars.com/kata/57b06f90e298a7b53d000a86

fn queue_time(customers: &[u32], n: u32) -> u32 {
    let mut tills = vec![0; n as usize];
    for &customer in customers {
        let count = tills.iter_mut().min().unwrap();
        *count += customer;
    }
    *tills.iter().max().unwrap()
}

fn main() {
    println!("{}", queue_time(&[2, 2, 3, 3, 4, 4], 1));
    println!("{}", queue_time(&[1, 2, 3, 4, 5], 100));
    println!("{}", queue_time(&[2, 2, 3, 3, 4, 4], 1));
    println!("{}", queue_time(&[1, 2, 3, 4, 5], 1));
    println!("{}", queue_time(&[1, 2, 3, 4, 5], 100));
    println!("{}", queue_time(&[2, 3, 10], 2));
}
