function solution(n) {
    var answer = '';
    
    for(let i=1; i<=n/2; i++){
        answer+="수박";
    }
    if(n%2==1){
        answer+="수";
    }
    
    return answer;
}