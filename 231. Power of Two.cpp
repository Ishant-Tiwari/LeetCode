class Solution {
public:

    bool solve(int num){
        if(num == 1){
            return true;
        }
        else if(num%2 != 0){
            return false;
        }
        else{
            return solve(num/2);
        }
    }
    bool isPowerOfTwo(int n) {
        if(n == 0){
            return false;
        }
        return solve(n);
    }
};
