#include<iostream>
#include<vector>
#include<bitset>
#include<string>
#include<algorithm>
using namespace std;

class Solution {
public:
    int  NumberOf1(int n) {
//        string result = bitset<numeric_limits<int>::digits+1>(n).to_string();
        int result = bitset<numeric_limits<int>::digits+1>(n).count();
//        return count(result.begin(),result.end(),'1');
        return result;
    }
};


int main(void)
{
    Solution s;
    int temp;
    cin>>temp;
    cout<<s.NumberOf1(temp)<<endl;
}
