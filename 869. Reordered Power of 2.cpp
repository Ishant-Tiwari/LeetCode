class Solution {
public:
    string sorteddigit(int n){
        string s = to_string(n);
        sort(s.begin(), s.end());
        return s;
    }
    bool reorderedPowerOf2(int n) {
        string target = sorteddigit(n);
        for(int i = 0; i < 31; ++i){
            int pow = 1 << i;
            if(sorteddigit(pow) == target) return true;
        }
        return false;
    }
};
