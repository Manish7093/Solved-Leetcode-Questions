class Solution {
public:
    string minRemoveToMakeValid(string s) {
        int count{0};
        int n=s.length();
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                count++;
            }
            else if(s[i]==')'){
                if(count==0){
                    s[i]='#';
                }
            else{
                count--;
            }
        }
    }
        
        count=0;
        for(int i=n-1;i>=0;i--){
            if(s[i]==')')
                count++;
            else if(s[i]=='('){
                if(count==0)
                    s[i]='#';
                else{
                    count--;
                }
            }
        }
        string res="";
        for(int i=0;i<n;i++){
            if(s[i]!='#')
                res.push_back(s[i]);
        }
        
        return res;
       /*   int n=s.length();
        
        int count=0; 
        for(int i=0;i<n;i++){
            if(s[i]=='('){ 
                count++;
            }
            else if(s[i]==')'){
                if(count==0){  
                    s[i]='#';
                }
                else{
                
                    count--;
                }
            }
        }
        
        count=0;
        for(int i=n-1;i>=0;i--){
            if(s[i]==')'){ 
                count++;
            }
            else if(s[i]=='('){ 
                if(count==0){ 
                    s[i]='#';
                }
                else{

                    count--;
                }
            }
        }
        
    
        string ans="";
        for(int i=0;i<n;i++){
            if(s[i]!='#'){ 
                ans+=s[i];
            }
        }
        return ans;*/
    }
};