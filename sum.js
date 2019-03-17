function sum(a, b) {
  return a + b
}

if (process.argv.length !== 4) {
  throw new Error('usage: node sum.js argument1 argument2');

}

let args = process.argv.slice(2).map(arg => parseInt(arg))

console.log(sum(...args))