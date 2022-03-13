class Solution {
public:
/*    bool isValid(string s) {
        stack<char>stk;
        for(auto it:s){
            if(it=='('||it=='{'||it=='[')
                stk.push(it);
            else{
                if(stk.size()==0)
                    return false;
                char ch=stk.top();
                stk.pop();
                if((it==')'&&ch=='(')||(it=='}'&&ch=='{')||(it==']'&&ch=='['))
                    continue;
                else
                    return false;
            }
        }
        return stk.empty();
    }
};*/
    bool isValid(string s) {
   /*  stack<char>stk;
        for(auto&c:s){
            switch(c){
                    case'(':stk.push(')');break;
                    case'[':stk.push(']');break;
                    case'{':stk.push('}');break;
                default:    if(stk.size()==0||c!=stk.top())
                                return false;
                            else
                                stk.pop();
                    
            }
            
        }
        return stk.empty();*/
        stack<char>stk;
        for(auto&c:s){
            switch(c){
                    case'(':stk.push(')');break;
                    case'[':stk.push(']');break;
                    case'{':stk.push('}');break;
                default: if(stk.size()==0 ||c!=stk.top())
                                return false;
                        else
                            stk.pop();
            }
        }
        return stk.empty();
    }
};