class Solution {
public:
    int addDigits(int num) {
        int val=0;
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
        return 0;
        
    }
};