function solution(a, b) {
    var answer = 0;
    
    let len=a.length;
    for(i=0; i<len; i++)
    {
        answer+=a[i]*b[i];
    }
    
    return answer;
}