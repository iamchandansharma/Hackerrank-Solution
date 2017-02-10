/**
    Created By Chandan Sharma
**/    

/*
  Insert Node at the end of a linked list 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Insert(Node *head,int data)
{
    Node *temp= new Node;  
    temp->data = data;  
    temp->next = NULL;  
    if(head==NULL)  
        head = temp; 
    else{
        Node *start = new Node;
        start = head;
        while(start->next !=NULL)  
            start = start->next;  
        start->next = temp;
    }    
    return head; 
}