class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> pairs;

        for (const auto& s : strs){
            string ss = s;
            sort(ss.begin(), ss.end());
            pairs[ss].push_back(s);
        }

        vector<vector<string>> res;
        for(auto& p : pairs){
            res.push_back(p.second);
        }
        
        return res;

    }
};

