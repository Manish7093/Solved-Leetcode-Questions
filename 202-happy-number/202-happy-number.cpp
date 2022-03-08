class Solution {
public:
    bool isHappy(int n) {
        set<int>myset;
        
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
        
        return false;
    }
};