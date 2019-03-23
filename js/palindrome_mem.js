function isPalindrome(string) {
  function notLetter(character) {
    return character.match(/[^\p{L}\p{N}]/u)
  }

  function check(string, first, last) {
    if(last - first < 2) return true
    if(notLetter(string[first])) return check(string, first + 1, last)
    if(notLetter(string[last])) return check(string, first, last - 1)
    if (string[first].toLowerCase() === string[last].toLowerCase())
      return check(string, first + 1, last - 1)
    return false
  }

  return check(string, 0, string.length - 1)
}

