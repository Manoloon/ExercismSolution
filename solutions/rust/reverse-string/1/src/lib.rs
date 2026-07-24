pub fn reverse(input: &str) -> String {
    //todo!("Write a function to reverse {input}");
    if input.is_empty() 
    {
        return input.to_string();
    }
    let iterator  = input.chars().rev();
    let mut result = String::with_capacity(input.len());
    for ch in iterator
    {
        result.push(ch);
    }
    return result.to_string();
}
