/*class Solution {
public:
    bool ispalindrome(string s,int l,int r ){
         while(l<r){
            if(s[l]==s[r]){
                l++;r--;
            }
            else
                return false;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int n=s.length();
        int l=0,r=n-1;
        while(l<r){
            if(s[l]==s[r]){
                l++;r--;
            }
            else
                return ispalindrome(s,l+1,r)||ispalindrome(s,l,r-1);
        }
        return true; 
    }
};*/
class Solution {
public:
    bool palindrome(string s, int l, int r){
        while(l<r){
            if(s[l]==s[r])
                l++,r--;
            else 
                return false;
        }
        return true;
    }
    bool validPalindrome(string s) {
      int n=s.size();
        int l=0,r=n-1;
        while(l<r){
            if(s[l]==s[r])
                l++,r--;
            else{
                return (palindrome(s,l+1,r) || palindrome(s,l,r-1));
            }
        }
        return true;
    }
};