#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;


class Solution {
public:
    vector<int> arr;
    void Insert(int num)  //4ms 480k
    {
        arr.push_back(num);
    }

    double GetMedian()
    {
        sort(arr.begin(),arr.end());
        if(arr.size() % 2){
            return arr[arr.size()/2];
        }
        else{
            return (arr[(arr.size()-1)/2]*1.0 + arr[(arr.size()-1)/2+1])/2.0;
        }
    }
};

int main(void)
{
    int n;
    cin>>n;
    Solution s;
    for(int i = 0;i<n;i++){
        int temp;
        cin>>temp;
        s.Insert(temp);
        cout<<s.GetMedian()<<" ";
    }
    cout<<endl;
}
