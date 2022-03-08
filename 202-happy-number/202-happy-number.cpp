class Solution {
public:
    int digit(int n){
       int val=0;
        while(n){
        int t=n%10;
        val+=t*t;
        n/=10;
        
       }
        return  val;
    }
    bool isHappy(int n) {
   //SC
        /*  set<int>myset;
        while(1){
            int val=0;
            while(n){
                int t=n%10;
                val+=t*t;
                n=n/10;
            }
            if(val==1)
                return true;
            else if(myset.find(val)!=myset.end() )
                return false;
            myset.insert(val);
            n=val;   
        }
        return false;*/
        int slow=n,fast=n;
        do{
            slow=digit(slow);
            fast=digit(digit(fast));
            if(fast==1)
                return true;
        }while(slow!=fast);
       
            
    return false;    
    }
};