class Solution {
public:
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        int res1{0};
        int res2{0};
        int res3{0};
        for(int i=0;i<firstWord.size();i++)
            res1=res1*10+(firstWord[i]-'a');    
        for(int i=0;i<secondWord.size();i++)
            res2=res2*10+(secondWord[i]-'a');
        for(int i=0;i<targetWord.size();i++)
            res3=res3*10+(targetWord[i]-'a');
        if((res1)+(res2)==(res3))
            return true;
        return false;
    }
};