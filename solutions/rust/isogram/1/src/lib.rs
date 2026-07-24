use std::collections::HashSet;

pub fn check(candidate: &str) -> bool {
    if candidate.is_empty()
    {
        return true;
    }
    let mut hash_store = HashSet::new();
    for ch in candidate.chars()
    {
        if ch.is_ascii_alphabetic()
        {
            let lower_ch = ch.to_ascii_lowercase();
            if hash_store.contains(&lower_ch)
            {
                return false;
            }
            hash_store.insert(lower_ch);
        }
    }
    return true;
}
