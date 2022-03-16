class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        int index=0;
        stack<int>stk;
        for(int val:pushed){
            stk.push(val);
            while(!stk.empty() && popped[index]==stk.top()){
                stk.pop();
                index++;
            }
        }
        if(stk.empty())
            return true;
        
        return false;
    }
};