class Solution {
public:
    int bitwiseComplement(int n) {
        if(n==0)
            return 1;
        int k{0};
        int num=n;
        while(n!=0){
          n=  n>>1;
            k++;
        }
     int c=pow(2,k);
        return c-1-num;
    }
};