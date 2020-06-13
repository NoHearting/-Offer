#include<algorithm>
#include<vector>
/*
struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
			val(x), next(NULL) {
	}
};*/
class Solution {
public:

    //暴力解法  me  时间O(n) 空间O(n)
    ListNode* FindKthToTail(ListNode* pListHead, unsigned int k) {
        vector<ListNode*> arr;
        while(pListHead){
            arr.push_back(pListHead);
            pListHead = pListHead->next;
        }
        if(k > arr.size()){
            return nullptr;
        }
        else{
            return arr[arr.size() - k];
        }
    }

    //快慢指针
    ListNode* FindKthToTail2(ListNode* pListHead, unsigned int k){
        if(!pListHead || k < 1){
            return nullptr;
        }
        auto slow = pListHead,fast = pListHead;
        while(--k)
        {
            if(fast){
                fast = fast->next;
            }
            else{
                return nullptr;
            }
        }

        while(fast){
            slow = slow->next;
            fast = fast->next;
        }
        return slow;
    }
};


int main(){
    Solution s;

}
