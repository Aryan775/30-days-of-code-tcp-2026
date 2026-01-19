/*

struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

class Solution {
  public:
    Node* addOne(Node* head) {
        // Your Code here
        vector<int> v;
        
        Node *temp = head;
        
        while(temp->next != NULL){
            v.push_back(temp->data);
            temp = temp->next;
        }
        
        if(temp->data < 9){
            temp->data = temp->data + 1;
            return head;
        }else{
            v.push_back(temp->data);
            
            reverse(v.begin(),v.end());
            
            int i = 0;
            
            while(i < v.size() && v[i] == 9){
                v[i] = 0;
                i++;
            }
            
            if(i < v.size()){
                v[i] += 1;
            }else{
                v.push_back(1);
            }
            
            reverse(v.begin(),v.end());
            
            temp = head;
            
            i = 0;
            while(temp->next != NULL){
                temp->data = v[i++];
                temp = temp->next;
            }
            
            temp->data = v[i++];
            if(i == v.size()){
                return head;
            }else{
                Node * n = new Node(v[i]);
                temp->next = n;
                
                return head;
            }
        }
        // return head of list after adding one
    }
};