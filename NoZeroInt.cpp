class Solution {
public:
    vector<int> getNoZeroIntegers(int n) {
        vector<int> ans;
        for (int i = 1 ; i < n; i++){
            int first = i;         
            int second = n - first;
            string f = to_string(first);
            string s = to_string(second);
            if (f.find('0') != string::npos || s.find('0') != string::npos) continue;
            ans.push_back(first);
            ans.push_back(second);
            break;
        }
        return ans;
    }
};
