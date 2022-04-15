//fundamentals katas to start js with good fundamentals
function digitize(n) {
  let arrayN = Array.from(String(n), Number);
  return arrayN.reverse();
}

function boolToWord(bool) {
  return bool === true ? "Yes" : "No";
}

function repeatStr(n, s) {
  return s.repeat(n);
}

function reverseSeq(n) {
  let array = [];
  for (let i = n; i > 0; i--) {
    array.push(i);
  }
  return array;
}
