class Solution {
public:
    vector<int> countBits(int n) {
    //TC-O(32n) or  O(nlogn) Sc--O(1)
        /*  vector<int>res(n+1,0);
        
        while(n!=0){
            int k=n;
            int count{0};
            while(k!=0){
                int rsmb=k & (-k);
                k=k-rsmb;
                count ++;
            }
            res[n]=count;
            n--;
        }
        return res;*/
     //tc-O(n) sc - O(1)   
        vector<int>res(n+1);
        res[0]=0;
        for(int i=0;i<=n;i++){
            res[i]=res[i/2]+i%2;
        }
        return res;
        
     //Using built in function
     /*   vector<int>res;
        while(n>=0){
            res.push_back(__builtin_popcount(n--));
        }
        reverse(res.begin(),res.end());
        return res;*/
        
        
    }
};