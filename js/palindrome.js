function isPalindrome(str) {
  function check(string) {
    let len = string.length
    if (len < 2) {
      return true
    } else if (string[0] === string[len - 1]) {
      return isPalindrome(string.substr(1, len - 2))
    }
    return false
  }
  return check(str.replace(/[^\p{L}\p{N}]/gu, '').toLowerCase())
}
