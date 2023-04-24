fn count_duplicates(text: &str) -> u32 {
    let mut hm = std::collections::HashMap::new();
    for i in text.to_ascii_lowercase().chars() {
        if i.is_alphabetic() {
            let lower = i.to_ascii_lowercase();
            *hm.entry(lower).or_insert(0) += 1;
        }
    }
    hm.iter().filter(|&(_key, &value)| value > 1).count() as u32
}

fn main() {
    println!("{}", count_duplicates("abcde"));
    println!("{}", count_duplicates("aabbcde"));
    println!("{}", count_duplicates("E21RH9QyI49YTCyYp1780O"));
}