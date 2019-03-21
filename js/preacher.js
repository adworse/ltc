const text = "у попа была собака, он её любил\n\
она съела кусок мяса, он её убил\n\
в землю закопал\n\
и надпись написал, что у попа была собака, он её любил\n\
она съела кусок мяса, он её убил\n\
в землю закопал\n\
и надпись написал, что "

function sleep(ms) {
  return new Promise(resolve => setTimeout(resolve, ms));
}

async function recursive_out() {
  process.stdout.write(text)
  await sleep(200);
  recursive_out();
}

recursive_out()