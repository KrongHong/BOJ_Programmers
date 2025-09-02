#include <string>
#include <vector>
#include <queue>
using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    vector<int> arr;
    int idx = 1;
    int count = 1;
    int i = 0;
    
    while(true){
        if(arr.size() == progresses.size())
        {
            break;
        }
        
        if(progresses[i] + speeds[i] * idx >= 100){
            arr.push_back(idx);
            i++;
        }
        else{
            idx++;
        }
    }
    
    
    for(int i = 1; i < arr.size(); i++){
        if(arr[i] == arr[i-1]){
            count++;
        }
        else{
            answer.push_back(count);
            count = 1;
        }
    }
    answer.push_back(count);
    
    return answer;
}