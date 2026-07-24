defmodule GuessingGame do
  def compare(_secret_number, :no_guess) do
    "Make a guess"
  end

  def compare(secret_number, guess \\ 0)  when guess == 0 do
    "Make a guess"
  end

  def compare(secret_number, guess) when guess == secret_number do
    "Correct"
  end

  def compare(secret_number, guess) when guess - secret_number > 1 do
    "Too high"
  end

  def compare(secret_number, guess) when guess - secret_number < -1 do
    "Too low"
  end

  def compare(secret_number, _guess) do
    "So close"
  end
end
