
#include<iostream>
#include<vector>
#include<bitset>
#include<string>
#include<algorithm>
using namespace std;

class Solution {
public:

    // 暴力破解  me
    double Power(double base, int exponent) {
//        --exponent;
        if(base == 0){
            return 0;
        }
        if(exponent == 0){
            return 1;
        }
        double result = 1;
        if(exponent < 0){
            exponent = -exponent;
            while(exponent--){
                result *= (1/base);
            }
        }
        else{
            while(exponent--){
                result *= base;
//            cout<<result<<endl;
            }
        }

        return result;
    }

    //非递归快速幂
    double Power2(double base, int exponent){
        if(exponent < 0){
            exponent = -exponent;
            base = 1/base;
        }
        double x = base;
        double result = 1;
        while(exponent){
            if(exponent & 1){
                ret *= x;
            }
            x *= x;
            exponent >>= 1;
        }
        return result;
    }


};


int main(void)
{
    Solution s;
    double base,exponent;
    cin>>base>>exponent;
    cout<<s.Power(base,exponent)<<endl;
}
