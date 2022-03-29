// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int longestKSubstr(string s, int k) {
    int i{0},j{0};
    int maxlen=-1;
    unordered_map<char,int>mp;
    while(j<s.size()){
        char ch=s[j];
        if(mp.find(ch)!=mp.end()){
            int freq=mp[ch];
            freq++;
            mp[ch]=freq;
        }
        else{
            mp[ch]=1;
        }
        
        if(mp.size()<k) j++;
        else if(mp.size()==k){
            maxlen=max(maxlen,j-i+1);
            j++;
        }
        else if(mp.size()>k){
            while(mp.size()>k && i<s.size()){
                if(mp.find(s[i])!=mp.end()){
                    int freq=mp[s[i]];
                    freq--;
                    mp[s[i]]=freq;
                }
                if(mp[s[i]]==0){
                    mp.erase(s[i]);
                }
                i++;
            }
            j++;
        }
    
    }
    return maxlen;
    
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;
    }
}
  // } Driver Code Ends