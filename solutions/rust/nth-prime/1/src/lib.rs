struct Prime {
    count: u32,
    current: u32,
    limit: u32,
}
impl Prime {
    pub fn new(limit: u32) -> Self {
        Prime { count: 0, current: 1, limit }
    }
    fn is_prime(n: u32) -> bool {
        let high = (n as f64).sqrt() as u32;
        for i in 2..=high {
            if n.is_multiple_of(i) {
                return false;
            }
        }
        true
    }
}
impl Iterator for Prime {
    type Item = u32;
    fn next(&mut self) -> Option<Self::Item> {
        while self.count <= self.limit {
            self.current += 1;
            if Prime::is_prime(self.current){
                self.count +=1;
                return Some(self.current);
            }
        }
        None
    }
}

pub fn nth(n: u32) -> u32 {
    Prime::new(n).last().unwrap()
}
