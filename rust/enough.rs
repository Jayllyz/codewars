//https://www.codewars.com/kata/554ca54ffa7d91b236000023
// Hasmap would be better i guess but i want to learn basics first

fn delete_nth(lst: &[u8], n: usize) -> Vec<u8> {
    let mut finalVec = Vec::new();
    for i in lst.iter() {
        if finalVec.iter().filter(|&x| x == i).count() < n {
            finalVec.push(*i);
        }
    }
    finalVec
}

fn main() {
    println!("{:?}", delete_nth(&[1, 1, 1, 1], 2));
    println!("{:?}", delete_nth(&[20, 37, 20, 21], 1));
}
