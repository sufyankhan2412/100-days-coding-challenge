class Solution {
public:
    string countAndSay(int n) {
        if(n==1) return "1";
        string s = "1";
        for(int j=0;j<n-1;j++){
            string ans = "";
            int n1 = s.size();
            ans.reserve(2 * n1);
            for(int i=0;i<n1;i++){
                int count = 1;
                while (i < n1 - 1 && s[i] == s[i + 1]) count++, i++;
                ans += to_string(count) + s[i];
            }
            s = ans;
        }
        return s;
    }
};