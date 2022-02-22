class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
     //TC-O(n) sc-O(n)
     /*   int n=nums.size();
        vector<int>res;
        unordered_map<int,int>mpp;
        for(int i=0;i<n;i++)
            mpp[nums[i]]+=1;
        for(int i=0;i<n;i++){
            if(mpp[nums[i]]>(n/3)){
                mpp[nums[i]]=0;           // ek baar check kar liya phir se check karne ki 
                res.push_back(nums[i]);  //jaroorat nahi hai
            }
        }
        return res;*/
        int num1=-1,num2=-1,c1=0,c2=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
          if(nums[i]==num1)
              c1++;
            else if (nums[i]==num2)
                c2++;
            else if(c1==0){
                num1=nums[i];
                c1=1;
            }
            else if(c2==0){
                num2=nums[i];
                c2=1;
            }
            else{
                c1--;
                c2--;
            }
                
        }
        vector<int>res;
        c1=c2=0;
        for(int i=0;i<n;i++){
            if(nums[i]==num1)
                c1++;
            else if(nums[i]==num2)
                c2++;
        }
        if(c1>(n/3))
            res.push_back(num1);
        if(c2>(n/3))
            res.push_back(num2);
        return res;
    }
};