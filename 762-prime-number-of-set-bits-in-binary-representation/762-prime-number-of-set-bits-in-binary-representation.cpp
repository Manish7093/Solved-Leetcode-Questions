/*ass Solution {
public:
    int count(int n){
        int count{0};
           while(n!=0){
            int rsmb= n&(-n);
            n=n-rsmb;
            count++;
        }
        return count;
    }
    bool prime(int n){
        bool flag=true;
        if(n==0||n==1)
            return false;
        if(n==2)
            return true;
        for(int i=2;i<=n/2;i++){
            if(n%i==0){
                flag=false;
                break;
            }
           
        }
        return flag;
    }
    int countPrimeSetBits(int left, int right) {
      int sum{0};
       while(left<=right){ 
        int k=count(left);
        bool check=prime(k);
           if(check)
               sum=sum+1;
           left=left+1;
       }
        return sum;
    }
};*/

class Solution {
public:
    bool isprime(int n){
        if(n==2||n==3||n==5||n==7||n==11||n==13||n==17||n==19||n==23||n==29||n==31)
            return true;
        return false;
    }
    int count(int n){
        int count{0};
        while(n!=0){
            n=n&(n-1);
            count++;
        }
        return count;
    }
    int countPrimeSetBits(int left, int right) {
     int sum{0};
        while(left<=right){
         if(isprime(count(left++)))
             sum=sum+1;
     }
        return sum;
    }
};