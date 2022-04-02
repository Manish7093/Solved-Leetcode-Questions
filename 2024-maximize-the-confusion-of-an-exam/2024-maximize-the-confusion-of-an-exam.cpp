class Solution {
public:
    int count(string s,char a,int k){
        int i{0},j{0},count{0},res{0};
        while(j<s.size()){
            if(s[j]==a) count++;
            while(count>k){
                if(s[i]==a)
                    count--;
                i++;
            }
            res=max(res,j-i+1);
            j++;
        }
        return res;
    }
    int maxConsecutiveAnswers(string answerKey, int k) {
        return max(count(answerKey,'T',k),count(answerKey,'F',k));
    }
};