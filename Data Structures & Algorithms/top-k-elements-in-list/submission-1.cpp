class cmp {
public:
    bool operator()(const pair<int,int>& a,
                const pair<int,int>& b) const {
    return a.first < b.first;
    }
};
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> m;
        priority_queue<pair<int,int> , vector<pair<int,int>>, cmp> pq;

        for(auto num : nums)
           m[num]++;

        for(auto p : m)
            pq.push({p.second, p.first});

        vector<int> res;
        while(k--){
            auto temp = pq.top();
            pq.pop();
            res.push_back(temp.second);
        }

        return res;
    }
};
