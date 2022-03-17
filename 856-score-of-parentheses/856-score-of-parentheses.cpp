class Solution {
public:
    int scoreOfParentheses(string s) {
   /*     stack<int>stk;
        int score{0};
        stk.push(0);
        for(int i=0;i<s.length();i++){
            if(s[i]=='(')
                stk.push(0);
            else{
                int val=0;
                int temp=stk.top();
                stk.pop();
                if(temp>0)
                    val=2*temp;
                else
                    val=1;
                stk.top()+=val;
            }
        }
        return stk.top();*/
        int res{0},l{0};
        for(int i=0;i<s.length();i++){
            if(s[i]=='(')
                l++;
            else
                l--;
            if(s[i]==')' && s[i-1]=='(')
                res+=1<<l;
        }
        return res;
    }
};