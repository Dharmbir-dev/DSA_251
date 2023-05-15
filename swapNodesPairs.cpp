/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
            int data;
            Node *next;
            Node(int data)
            {
                this->data = data;
                this->next = NULL;
            }
        };

*****************************************************************/

Node* pairsSwap(Node *head)
{


if(head==NULL || head->next==NULL){

return head;

}

Node* p=head;

Node* q=head->next;

while(p && q){

int temp=p->data;

p->data=q->data;

q->data=temp;

if(q->next==NULL){

break;

}

p=q->next;

q=p->next;

}

return head;
}
