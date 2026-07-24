pub fn is_armstrong_number(num: u32) -> bool {
    if num < 10 {return true};
    let num_digits = num.ilog10() + 1;
    let mut sum : u32 = 0;
    let mut digits = Vec::new();
    let mut loc_num = num;

    while loc_num > 0
    {
        digits.push(loc_num % 10);
        loc_num /= 10;
    }

    for n in digits
    {
        sum += n.pow(num_digits);
    }
    return sum == num;
}
