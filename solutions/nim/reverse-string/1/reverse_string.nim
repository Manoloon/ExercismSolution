# learning nim by doing, this code isnt mine, I saw it on the video 14 ways to reverse.
proc reverse*(s: string): string =
  for c in s:
     result = c & result
