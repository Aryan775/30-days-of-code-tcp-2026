class Solution {
  public:
    void sort012(vector<int>& arr) {
        int c=0;
        int d=0;
        int e=0;
        
        for (int i=0 ; i<arr.size() ; i++){
            if(arr[i]==0){
                c=c+1;
                
            }
            else if(arr[i]==1){
                d=d+1;
                
            }
            else{
                e=e+1;
                
            }
        }
        for (int j = 0; j < c; j++)
        {
            arr[j]=0;
        }
        for (int k = c; k <(c+ d); k++)
        {
            arr[k]=1;
        }
        for (int l = (c+d); l < (c+d+e); l++)
        {
            arr[l]=2;
        }
    }
};