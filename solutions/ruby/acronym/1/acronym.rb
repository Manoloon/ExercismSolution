module Acronym
  def self.abbreviate(phrase)
    wds = phrase.split(/[^a-zA-Z]/) #/\s/
    chs = wds.map { |wds| wds[0]}
    chs.join.upcase
  end
end
