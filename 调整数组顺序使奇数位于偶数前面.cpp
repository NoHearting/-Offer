#include<algorithm>

class Solution {
public:
    // 直接使用库函数  me
    void reOrderArray(vector<int> &array) {
        stable_partition(array.begin(), array.end(),[](const int lhs){
            return lhs & 1;
        });
    }
};


int main(){
    Solution s;

}
