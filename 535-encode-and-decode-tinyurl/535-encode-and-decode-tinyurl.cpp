class Solution {
public:
    unordered_map<string,string>mp;
    int i=1;
    string encode(string longUrl) {
        string s="http://url/"+to_string(i);
        i++;
        mp[s]=longUrl;
        return s;
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        return mp[shortUrl];
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));