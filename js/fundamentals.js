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

//We will consider a, e, i, o, u as vowels for this Kata (but not y).
function getCount(str) {
  let vowelsCount = 0;
  let strSplit = str.split("");
  for (let i = strSplit.length; i >= 0; --i) {
    if (
      strSplit[i] === "a" ||
      strSplit[i] === "e" ||
      strSplit[i] === "i" ||
      strSplit[i] === "o" ||
      strSplit[i] === "u"
    ) {
      vowelsCount++;
    }
  }
  return vowelsCount;
}
