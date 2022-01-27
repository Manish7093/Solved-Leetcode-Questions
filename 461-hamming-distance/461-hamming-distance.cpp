class Solution {
public:
    int hammingDistance(int x, int y) {
      /*  int count{0};
        for(int i=0;i<32;i++){
            int mask=1<<i;
            if((mask&x)!=(mask&y))
                count++;
        }
        return count;*/
        int count{0};
        int xor1=x^y;
        while(xor1!=0){
               count++; 
            int rsmb=xor1 &(-xor1);
             xor1=xor1-rsmb;
                
    
        }
        return count;
    }
};