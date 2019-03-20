const readline = require('readline').createInterface({
  input: process.stdin,
  output: process.stdout
})

function enterWeight() {
  return new Promise((resolve) => {
    readline.question('Enter weight: ', (weight) => { resolve(parseFloat(weight)) })
  })
}

function enterHeight(weight) {
  return new Promise((resolve) => {
    readline.question('Enter height: ', (height) => { resolve([weight, parseFloat(height)]) })
  })
}

function printJudgement([weight, height]) {
  console.log(judge(bmi(height, weight)))
  readline.close()
}

function judge(bmi) {
  if (bmi >= 25)
    return "overweight"
  else if (bmi < 18.5)
    return "underweight"
  else
    return "normal"
}

function bmi(height, weight) {
  height /=100
  return weight / (height * height)
}

enterWeight().then(enterHeight).then(printJudgement)
