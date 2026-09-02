class Solution {
public:
    string countAndSay(int n) {
        string res = "1";
        for (int i = 2; i <= n; i++) {
            string next = "";
            int count = 1;
            for (int j = 1; j < res.length(); j++) {
                if (res[j] == res[j - 1]) {
                    count++;
                } else {
                    next += to_string(count);
                    next += res[j - 1];
                    count = 1;
                }
            }
            next += to_string(count);
            next += res.back();
            res = next;
        }
        return res;
    }
};