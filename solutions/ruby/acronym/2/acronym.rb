module Acronym
  def self.abbreviate(phrase)
    wds = phrase.split(/[^a-zA-Z]/)
    chs = wds.map { |wds| wds[0]}
    chs.join.upcase
  end
end
