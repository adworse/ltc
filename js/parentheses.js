function isBalanced(string) {
  len = string.length
  if (len == 0) return true;
  string = string.replace('()', '')
  if (string.length == len) return false;
  return isBalanced(string)
}
