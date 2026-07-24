
pub fn sum_of_multiples(limit: u32, factors: &[u32]) -> u32 
{
     if factors.is_empty() 
     {
        return 0;
    }
    let mut multiples: Vec<u32> = Vec::new();
    for count in 1..limit
    {
        for factor in factors
        {
            let num = factor * count;
            if num < limit && !multiples.contains(&num)
            {
                multiples.push(num);
            }
        }
    }
    multiples.iter().sum()
}
