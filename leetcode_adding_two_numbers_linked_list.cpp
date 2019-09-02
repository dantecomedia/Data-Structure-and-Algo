class Solution 
{
public:
	ListNode * addTwoNumbers(ListNode* l1, ListNode * l2)
	{  

		ListNode *out= new ListNode(0);
		ListNode *oo = out;
		int sum=0;

		while(l1 || l2)
		{
			sum+=(l1!=NULL?l1->val:0);
			sum+=(l2!=NULL? l2->val:0);
			if(l1)
				l1=l1->next;
			if(l2)
				l2=l2->next;
			OO->val= sum%10;
			sum=static_cast<int> (sum/10);


			if (l1||l2)
				oo->next= new ListNode(0);
			else
				if (sum)
					oo->next= new ListNode(1);
		
				oo=oo->next;		}

	}
};