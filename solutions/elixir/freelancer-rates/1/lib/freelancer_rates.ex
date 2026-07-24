defmodule FreelancerRates do
  def daily_rate(hourly_rate) do
    (hourly_rate * 8.0)
  end

  def apply_discount(before_discount, discount) do
    cond do 
      discount > 0 -> (before_discount - ((before_discount * discount)*0.01))
      true -> before_discount
    end
  end

  def monthly_rate(hourly_rate, discount) do
    ceil(apply_discount((22 * daily_rate(hourly_rate)),discount))
  end

  def days_in_budget(budget, hourly_rate, discount) do
      daily = daily_rate(hourly_rate)
      discount_applied = (apply_discount(daily,discount))
      Float.floor(budget /discount_applied,1)
  end
end
