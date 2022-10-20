/**
 * @param {number} num
 * @return {string}
 */
 var intToRoman = function(num) {
  const romanValue = {
    I: 1,
    IV: 4,
    V: 5,
    IX: 9,
    X: 10,
    XL: 40,
    L: 50,
    XC: 90,
    C: 100,
    CD: 400,
    D: 500,
    CM: 900,
    M: 1000,
  };
  let result = '';
  
  for (key in romanValue) {  
    const repeatCount = Math.floor(num / romanValue[key]);
    
    if (repeatCount !== 0) {
      result += key.repeat(repeatCount);
    }
    
    num %= romanValue[key];
    
    if (num === 0) return result;
  }
  
  return result;
 
};