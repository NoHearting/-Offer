#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int sum;
    int jumpFloor(int number) {
//        1.
//        sum = 0;
//        back_track(number);
//        return sum;

//        2.
//        return back_track2(number);

//        3.
//        vector<int> dp(number+1,-1);
//        return back_track3(number,dp);

//        4.
//        return back_track4(number);

//        5.
        return back_track5(number);
    }

    //  1. 正向思维，每次只能走一步或者两步，依次递归  me
    void back_track(int n){  //559ms 504k

        for(int i = 1;i <= 2;i++){
            if(n - i == 0){
                sum ++;
                break;
            }
            back_track(n-i);
        }
    }

    // 2. 逆向思维，从n步台阶下台阶，有两种可能，下到n-1或者n-2步台阶，所以f[n]=f[n-1]+f[n-2]
    int back_track2(int n){  // 520ms  488k
        if(n <= 1)
            return 1;
        return back_track2(n-1) + back_track2(n-2);
    }

    // 3. (2)中有重复的值，可以将其保存下来，减少递归数量
    int back_track3(int n,vector<int> & dp){  //4ms 472k
        if(n <= 1){
            return 1;
        }
        if(dp[n] != -1){
            return dp[n];
        }
        return dp[n] = back_track3(n-1,dp)+back_track3(n-2,dp);
    }

    // 4. 在（3）的基础之上采用动态规划
    int back_track4(int n){  // 3ms  468k
        vector<int>dp(n+1,-1);
        dp[0] = dp[1] = 1;
        for(int i = 2;i <= n;i++){
            dp[i] = dp[i-1] + dp[i-2];
        }
        return dp[n];
    }

    // 5. 在（4）的基础之上优化空间
    int back_track5(int n){  //4ms  472k
        if(n==0 || n == 1){
            return 1;
        }
        int a = 1,b = 1,c;
        for(int i = 2;i<=n;++i){
            c = a + b;
            a = b;
            b = c;
        }
        return c;
    }
};

int main()
{
    Solution s;
    int n;
    cin>>n;
    cout<<s.jumpFloor(n)<<endl;
}
