#include<iostream>

using namespace std;

class Solution {
public:
    int rectCover(int number) {
        if(number<4){
            return number;
        }
        int a = 1,b = 2,c;
        for(int i = 3;i<=number;i++){
            c = a+b;
            a = b;
            b = c;
        }
        return c;
    }
};

int main()
{
    int n;
    cin>>n;
    Solution s;
    cout<<s.rectCover(n)<<endl;

}
