//Definition for singly-linked list.
struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(nullptr) {}
};
class Solution {
	public:
		ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
			auto p1=l1,p2=l2;
			auto p=ListNode(0);
			ListNode*p4=&p;
			int sum;
			int carry=0;
			while(p1&&p2){
				sum=p1->val+p2->val+carry;
				if(sum>9){
					p4->next=new ListNode(sum%10);
					carry=1;
				}else{
					p4->next=new ListNode(sum);
					carry=0;
				}
				p4=p4->next;
				p1=p1->next;
				p2=p2->next;
			}
			while(p1){
				sum=p1->val+carry;
				if(sum>9){
					p4->next=new ListNode(sum%10);
					carry=1;
				}else{
					p4->next=new ListNode(sum);
					carry=0;
				}
				p4=p4->next;
				p1=p1->next;
			}
			while(p2){
				sum=p2->val+carry;
				if(sum>9){
					p4->next=new ListNode(sum%10);
					carry=1;
				}else{
					p4->next=new ListNode(sum);
					carry=0;
				}
				p4=p4->next;
				p2=p2->next;
			}
			if(carry==1)
				p4->next=new ListNode(1);
			return p.next;
		}
};
