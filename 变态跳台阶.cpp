class Solution {
public:
    int sum;
    int layer;
    int jumpFloorII(int number) {
        sum = 0;
        layer = number;
        back_track(number);
        return sum;
    }

    void back_track(int n){  //559ms 504k

        for(int i = 1;i <= layer;i++){
            if(n - i == 0){
                sum ++;
                break;
            }
            back_track(n-i);
        }
    }
};

int main()
{
    Solution s;
    int n;
    cin>>n;
    cout<<s.jumpFloor(n)<<endl;
}
