class Solution
{
    public:
    int count(struct node* head, int search_for)
    {
    //add your code here
    node *p=head;
    int count =0;
    while(p){
        if(p->data==search_for){
            count++;
        }
        p=p->next;
    }
    return count;
    }
};
