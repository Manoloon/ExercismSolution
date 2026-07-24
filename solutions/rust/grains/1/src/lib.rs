pub struct GrainCount {
    current: u32,
    limit: u32,
}
impl GrainCount {
    pub fn new(limit: u32) -> Self {
        GrainCount {
            current: 1,
            limit,
        }
    }
}
impl Iterator for GrainCount {
    type Item = u64;
    fn next(&mut self) -> Option<Self::Item> {
        if self.current > self.limit {
            None
        } else {
            let new_val = 2u64.pow(self.current -1);
            self.current += 1;
            Some(new_val)
        }
    }
}
pub fn square(s: u32) -> u64 {
    GrainCount::new(s).last().unwrap()
}

pub fn total() -> u64 {
    GrainCount::new(64).sum()
}
