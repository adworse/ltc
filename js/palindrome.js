function isPalindrome(string) {
  function notLetter(character) {
    return !!character.match(/[^\p{L}\p{N}]/u)
  }

  let len = string.length
  if(len < 2) {
    return true
  } else if(notLetter(string[0])) {
    return isPalindrome(string.substr(1))
  } else if(notLetter(string[len - 1])) {
    return isPalindrome(string.substr(0, len - 1))
  } else if (string[0].toLowerCase() === string[len - 1].toLowerCase()) {
    return isPalindrome(string.substr(1, len - 2))
  }
  return false
}
