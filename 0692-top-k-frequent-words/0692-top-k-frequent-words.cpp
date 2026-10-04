class Solution {
public:

    bool operator()(pair<int,string>& a, pair<int,string>& b) {

        if(a.first == b.first) {
            return a.second < b.second;
        }

        return a.first > b.first;
    }

    vector<string> topKFrequent(vector<string>& words, int k) {

        int n = words.size();

        unordered_map<string,int> mp;

        for(int i = 0; i < n; i++) {
            mp[words[i]]++;
        }

        priority_queue<
            pair<int,string>,
            vector<pair<int,string>>,
            Solution
        > pq;

        for(auto i : mp) {

            string word = i.first;
            int freq = i.second;

            pair<int,string> curr = {freq, word};

            pq.push(curr);

            if(pq.size() > k) {
                pq.pop();
            }
        }

        vector<string> res;

        while(!pq.empty()) {
            res.push_back(pq.top().second);
            pq.pop();
        }

        reverse(res.begin(), res.end());

        return res;
    }
};