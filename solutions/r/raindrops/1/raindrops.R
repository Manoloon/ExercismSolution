raindrops <- function(number) {
  if (number <=1){
    return (as.character(number))
  }
  result <- ""
  if (number %% 3 == 0) {
    result <- paste(result, "Pling", sep = "")
  }
  if ( number %% 5 == 0){
    result <- paste(result, "Plang", sep = "")
  }
  if ( number %% 7 == 0){
    result <- paste(result, "Plong", sep = "")
  }
  if(result == ""){
    return (as.character(number))
  }
  return (result)
}
