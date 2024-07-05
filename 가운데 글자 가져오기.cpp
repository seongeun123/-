/*자바스크립트에서 문자열 길이를 length 메소드로 구한다.*/
/*몫을 구하려면 Math.floor (원래값 / 나눈수)           */

function solution(s) {
    var answer = '';
    
    let len=s.length;
    if(len%2==0){
        answer+=s[len/2-1];
        answer+=s[len/2];
    }
    else{
        answer+=s[Math.floor(len/2)];
    }
    
    return answer;
}