pub fn square_of_sum(n: u32) -> u32 {
    if n < 2
    {
        return n;
    }
    let mut sum = 0;
    for i in 1..=n 
    {
        sum += i;
    }
    return sum * sum;
}

pub fn sum_of_squares(n: u32) -> u32 {
    if n < 2
    {
        return n;
    }
    let mut sum = 1;
    for i in 2..=n
    {
        sum +=i * i;
    }
    return sum;
}

pub fn difference(n: u32) -> u32 {
    if n == 1 
    {
        return  0;
    }
    return square_of_sum(n) - sum_of_squares(n);
}
