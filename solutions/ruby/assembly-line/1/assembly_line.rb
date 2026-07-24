class AssemblyLine
  def initialize(speed)
    @speed = speed
    @rate = 221.0
  end

  def production_rate_per_hour
      speed_rate = @speed * @rate
     if @speed > 0 && @speed < 5
        Float speed_rate
    elsif @speed < 9
        Float speed_rate * 0.9
    elsif @speed < 10
        Float speed_rate * 0.8
    else
        Float speed_rate * 0.77
     end
  end

  def working_items_per_minute
    Integer production_rate_per_hour / 60
  end
end
