fn xo(string: &'static str) -> bool {
    let mut count = 0;
    for c in string.chars() {
        if c == 'x' || c == 'X' {
            count += 1;
        } else if c == 'o' || c == 'O' {
            count -= 1;
        }
    }
    count == 0
}

fn main() {
    println!("{}", xo("xo"));
    println!("{}", xo("Xo"));
    println!("{}", xo("xxOo"));
    println!("{}", xo("xxxm"));
    println!("{}", xo("Oo"));
    println!("{}", xo("ooom"));
}
