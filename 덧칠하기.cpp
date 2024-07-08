/* 
    배열 크기가 n+1 이고 true 로 초기화 되어있는 배열 생성하기
    let check = new Array(n+1).fill(true);
*/

function solution(n, m, section) {
    var answer = 0;
    
    //check 초기화
    let check = new Array(n+1).fill(true);
    
    for(let i=0; i<section.length; i++)
    {
        check[section[i]]=false;
    } 
  
    // greedy
    for(let i=1; i<=n; i++)
    {
        if(!check[i])
        {
            answer++;
            for(let j=0; j<m; j++){
                check[i+j]=true;
            }
        }
    }
    return answer;
}