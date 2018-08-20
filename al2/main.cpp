  struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };
  class Solution {
  public:
      ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *p,*q,*res,*head;
          p=l1;
          q=l2;
          res=new ListNode(0);
          head=new ListNode(0);
          head=res;
          int temp=0;
          while((p->next!= nullptr)&&(q->next!= nullptr)){
              temp=p->val+q->val+temp;
              ListNode *te=new ListNode(temp%10);
              temp=temp/10;
              res->next=te;
              res=te;
              p=p->next;
              q=q->next;
          }
          while(p->next!= nullptr){
              temp+=p->val;
              ListNode *te=new ListNode(temp%10);
              temp=temp/10;
              res->next=te;
              res=te;
              p=p->next;
          }
          while(q->next!= nullptr){
              temp+=q->val;
              ListNode *te=new ListNode(temp%10);
              temp=temp/10;
              res->next=te;
              res=te;
              q=q->next;
          }
          if(temp==1){
              ListNode *te=new ListNode(1);
              res->next=te;
              res=te;
          }
          return head->next;
      }
  };