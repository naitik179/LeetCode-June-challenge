class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n <= 0){
            return false;
        }
        double f = log2(n);
        int ff = (int)f;
        if(ff == f){
            return true;
        }
        else{
            return false;
        }
    }
};
