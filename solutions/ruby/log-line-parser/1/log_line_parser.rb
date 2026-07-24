class LogLineParser
  def initialize(line)
    @line = line
  end

  def message
    @line.sub(/^\[.*?\]:\s*/, '').strip
  end

  def log_level
    @line.downcase[/\[([^\]]+)\]/, 1]
  end

  def reformat
    "#{message.capitalize} (#{log_level.downcase})"
  end
end
