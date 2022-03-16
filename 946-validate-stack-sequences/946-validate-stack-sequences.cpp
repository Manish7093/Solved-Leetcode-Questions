class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
      /*  int index=0;
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
        
        return false;*/
        int index=0;
        int count{0};
        for(int val:pushed){
        pushed[count]=val;
            while(count>=0 && popped[index]==pushed[count]){
                count--;index++;
            }
            count++;
        }
        if(count==0)
            return true;
        return false;
    }
};