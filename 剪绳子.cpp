#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
	int cutRope(int number) {
		int m = 2;
		int max = 0;
		for (; m <= number; m++)
		{
			int left = number % m;
			int base = number / m;
			int sum = 1;
			for (int i = 0; i < m; i++) {
				if (left-- > 0) {
					sum *= (base + 1);
				}
				else {
					sum *= base;
				}
			}
			if (sum > max) {
				max = sum;
			}
		}
		return max;
	}
};

int main()
{
	Solution s;
	int number;
	cin >> number;
	cout << s.cutRope(number) << endl;
}
