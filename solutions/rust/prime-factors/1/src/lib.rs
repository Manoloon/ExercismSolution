pub fn factors(n: u64) -> Vec<u64> {
    let mut primes = Vec::new();
    if n <= 1 
    {
        return primes;
    }
    if n == 2 
    {
        primes.push(n);
        return primes;
    }
    let mut m = n;
    let mut i = 2;
    while i * i <= m
    {
        while m % i == 0
        {
            primes.push(i);
            m /= i;
        }
        i += 1;
    }
    if m > 1
    {
        primes.push(m);
    }
    primes
}
