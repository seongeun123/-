function solution(s) {
    var answer = '';
  
    const arr = s.split('');
    arr.sort();
    
    let len=arr.length;
    
    for(let i=len-1; i>=0; i--){
        answer+=arr[i];
    }
    
    return answer;
}