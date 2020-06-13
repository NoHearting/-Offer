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
    ListNode* Merge(ListNode* pHead1, ListNode* pHead2)
    {
        listNode * result = new ListNode;
        listNode * t = result;

        while(pHead1 && pHead2){
            if(pHead1->val < pHead2->val){
                result->next = pHead1;
                pHead1 = pHead1->next;
            }
            else{
                result->next = pHead2;
                pHead2 = pHead2->next;
            }
            result = result->next;
        }
        result->next = pHead1 ? pHead1 : pHead2;
        return t->next;
    }
};
