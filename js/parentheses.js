function isBalanced(string) {
  len = string.length
  if (len == 0) return true;
  string = deletePair(string)
  if (string.length == len) return false;
  return isBalanced(string)
}

function deletePair(string) {
  return tryPair(string, 0);

  function tryPair(string, index) {
    if (string.substr(index, 2) == '()')
      return string.slice(0, index) + string.slice(index + 2);
    if (index < string.length - 1) return tryPair(string, index + 1);
    return string
  }
}