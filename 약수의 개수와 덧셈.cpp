function checkOdd(n){ // 약수의 개수가 홀수이면 true
    let cnt=0;
    for(let i=1 ; i<=n; i++){
        if(n%i==0){
            cnt++;
        }
    }
    
    if(cnt%2==1){
        return true;
    }
    return false;
}
function solution(left, right) {
    var answer = 0;
    
    for(let i=left; i<=right; i++){
        if(checkOdd(i)){
            answer-=i;
        }else{
            answer+=i;
        }
    }
    
    return answer;
}