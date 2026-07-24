defmodule Year do
  @spec leap_year?(non_neg_integer) :: boolean
  def leap_year?(year \\ :no_val) when is_integer(year) and year >= 0 do
      Integer.mod(year,4) == 0 and (Integer.mod(year,100) != 0 or       Integer.mod(year,400) == 0)
  end
end
