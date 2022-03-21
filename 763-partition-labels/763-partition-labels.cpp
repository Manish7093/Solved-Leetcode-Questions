class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int> res,pos(26,0);
        for(int i=0;i<s.size();i++)
            pos[s[i]-'a']=i;
        
        int maxindex=INT_MIN,lastindex{0};
        
        for(int i=0;i<s.size();i++){
            maxindex=max(maxindex,pos[s[i]-'a']);
            if(i==maxindex){
                res.push_back(maxindex-lastindex+1);
                lastindex=maxindex+1;
            }
        }
        
        return res;
    }
};