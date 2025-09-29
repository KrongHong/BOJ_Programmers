#include<string>
#include <iostream>
#include <stack>

using namespace std;

bool solution(string s)
{
    bool answer = true;
    stack<char> stack;
    
    for(int i = 0; i < s.size(); i++){
        stack.push(s[i]);
        if(s[0] == ')'){
            answer = false;
            break;
        }
    	if(s[i] == '('){
            continue;
        }
        else{
            stack.pop();
            if(!stack.empty()){
                stack.pop();
            }
        }
    }
    
    if(!stack.empty()){
        answer = false;
    }
    
    return answer;
}