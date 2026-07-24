class Attendee
  def initialize(height)
    @Height = height
  end

  def height
    @Height
  end

  def pass_id
    return @pass_id
  end

  def issue_pass!(pass_id)
    @pass_id = pass_id
  end

  def revoke_pass!
    @pass_id = nil  
  end
end
