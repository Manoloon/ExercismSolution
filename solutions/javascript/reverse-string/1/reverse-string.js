//
// This is only a SKELETON file for the 'Reverse String' exercise. It's been provided as a
// convenience to get you started writing code faster.
//

export const reverseString = (str) => {
  var split = str.split("");
  var reverse = split.reverse();
  var join = reverse.join("");
  return join;
};
