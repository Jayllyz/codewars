//https://www.codewars.com/kata/5839edaa6754d6fec10000a2

fn find_missing_letter(chars: &[char]) -> char {
    let mut i = 0;
    while i < chars.len() - 1 {
        //u8 + 1 is the next char in ascii so we can compare it to the next char in the array
        if chars[i] as u8 + 1 != chars[i + 1] as u8 {
            return (chars[i] as u8 + 1) as char;
        }
        i += 1;
    }
    ' '
}

fn main() {
    println!("{}", find_missing_letter(&['a', 'b', 'c', 'd', 'f']));
    println!("{}", find_missing_letter(&['O', 'Q', 'R', 'S']));
}
