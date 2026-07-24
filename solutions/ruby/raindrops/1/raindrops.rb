module Raindrops
  def self.convert(n)
    result = ''
    if n % 3 == 0
      result += "Pling"
    end
    if n % 5 == 0
      result += "Plang"
    end
    if n % 7 == 0
      result += "Plong"
    end
    result.empty?? n.to_s : result
  end
end