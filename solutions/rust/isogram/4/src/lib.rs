use std::collections::HashSet;
// Functional way to do this
pub fn check(candidate: &str) -> bool {
    if candidate.is_empty()
    {
        return true;
    }
    let mut seen = HashSet::new();
    candidate.chars()
        .filter(|ch| ch.is_ascii_alphabetic())
        .map(|ch| ch.to_ascii_uppercase())
        .all(|ch| seen.insert(ch))
}
