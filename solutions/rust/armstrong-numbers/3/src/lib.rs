pub fn is_armstrong_number(num: u32) -> bool {
    if num < 10 {return true};
    let num_digits = num.ilog10() + 1;
    let mut loc_num = num;
    let mut sum : u32 = 0;
    while loc_num > 0
    {
        let digit = loc_num % 10;
        sum += digit.pow(num_digits);
        if sum > num {return false};
        loc_num /= 10;
    }
    return sum == num;
}
