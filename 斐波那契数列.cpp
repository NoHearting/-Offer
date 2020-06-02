#include<iostream>
using namespace std;

class Solution {
public:
    int Fibonacci(int n) {
        if(n == 0){
            return 0;
        }
        if(n == 1){
            return 1;
        }
        int arr[40] = {0,1};
        for(int i = 2;i<=n;i++){
            arr[i] = arr[i-1]+arr[i-2];
        }
        return arr[n];
    }
};

int main()
{
    int n;
    cin>>n;
    Solution s;
    cout<<s.Fibonacci(n)<<endl;

}
