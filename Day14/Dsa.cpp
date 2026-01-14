class Solution {
  public:
    int setBits(int n) {
        int x;
        while(n>0){
            if((n%2)!=0){
               x=x+1;
            }
               n=n/2;
        }
           
        return x;
    }
};