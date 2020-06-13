
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
    ListNode* ReverseList(ListNode* pHead) {
        ListNode* p = nullptr;
        ListNode * t = nullptr;
        while(pHead){
            t = pHead->next;
            pHead->next = p;
            p = pHead;
            pHead = t;
        }
        return p;
    }
};
