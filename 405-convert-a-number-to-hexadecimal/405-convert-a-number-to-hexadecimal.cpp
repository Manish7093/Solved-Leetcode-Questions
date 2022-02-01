class Solution {
public:
    string toHex(int num) {
        char ourarr[]="0123456789abcdef";
        unsigned int ournum=num;
        string str;
        
       do{ 
           str+=ourarr[ournum%16];
            ournum=ournum/16;   
        } while(ournum!=0);
        
        return {str.rbegin(),str.rend()};
    }
};