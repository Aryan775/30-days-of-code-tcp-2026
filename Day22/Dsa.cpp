/*You are required to complete below methods*/

/*inserts an element x at
the back of the queue q */
void push(queue<int> &q, int x) {
    q.push(x);
    // Your code here
}

/*pop out the front element
from the queue q and returns it */
int pop(queue<int> &q) {
    
    int x;
    if(!q.empty()){
        x =q.front();
        q.pop();
    }
    else{
        x=-1;
    }
    return x;
    // Your code here
}

/*returns the size of the queue q */
    
int getSize(queue<int> &q) {
    int x=q.size();
    return x;
    // Your code here
}

    
/*returns the last element of the queue */
int getBack(queue<int> &q) {
    int x;
    if(!q.empty()){
        x =q.back();
    }
    else{
        x=-1;
    }
    return x;
    // Your code here
}
    

/*returns the first element of the queue */
int getFront(queue<int> &q) {
    int x;
    if(!q.empty()){
        x =q.front();
    }
    else{
        x=-1;
    }
    return x;
    // Your code here
}