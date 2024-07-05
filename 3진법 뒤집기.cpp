#include <string>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

long long solution(int n) {
    long long answer = 0;
    
    //3진법으로 바꾸기
    long long num=0;
    long long k=1;
    
    while(n!=0){
        num+=k*(n%3);
        n/=3;
        k*=10;
    }
    
    //3진법 수 뒤집기
    string s = to_string(num);
    reverse(s.begin(), s.end());
    
   //10진법으로 계산하기
    long long k2=1;
    
    for(int i=s.length()-1; i>=0; i--){
        answer+=(s[i]-'0')*k2;
        k2*=3;
    }
    
    return answer;
}