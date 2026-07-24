use std::collections::HashSet;

pub fn check(candidate: &str) -> bool {
    if candidate.is_empty()
    {
        return true;
    }
    candidate.chars()
            .filter(|ch| ch.is_ascii_alphabetic())
            .map(|ch| ch.to_ascii_lowercase())
            .try_fold(HashSet::new(), |mut set,ch| 
            {
                    if set.contains(&ch)
                    {
                        Err(())
                    } else {
                        set.insert(ch);
                        Ok(set)
                    }
            })
            .is_ok()
}
