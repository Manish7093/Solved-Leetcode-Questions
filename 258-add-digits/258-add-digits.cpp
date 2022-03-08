class Solution {
public:
    int addDigits(int num) {
    /*    int val=0;
        while(num){
            if((num/10)==0)
                return num;
            while(num){
            val+=num%10;
            num=num/10;
            }
            num=val;
            val=0;
        }
        return 0;*/
        //tc-O(1)
        
        if(num==0)
            return 0;
        else if(num%9==0)
            return 9;
        else
            return num%9;
        
    }
};