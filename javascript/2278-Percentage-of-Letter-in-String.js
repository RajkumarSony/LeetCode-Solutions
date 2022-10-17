/**
 * @param {string} s
 * @param {character} letter
 * @return {number}
 */

 var percentageLetter = function(s, letter) {
    let count =0;
    for(let i in s){
        if(s[i] === letter){
            count++
        }
    }
    const ans = Math.trunc((count/s.length)*100)
    console.log(ans)
    return ans
};