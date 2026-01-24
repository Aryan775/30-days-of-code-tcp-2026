#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class solution{
    public:
    int func(vector<int> arr1,int n, int d){
        
    int maxi =0;
    int a =0;
    int b=n-1;
    int c=1;
 
    sort(arr1.begin(),arr1.end());
    int i=1;
    while(a<=b){
        if (a + i - 1 > b)
            break;
        if(arr1[b]*i>d){
            maxi=maxi+1;
            b=b-1;
            a=a+i-1;
            i=1;
        }
        else{
            i++;
        }
 
    }
    return maxi;
}
};
int main(){
    int n, d;
    cin>>n>>d;
    vector<int> arr1;
    for(int i=0;i<n;i++){
        int y;
        cin>>y;
        arr1.push_back(y);
    }
    
    solution s1;
    int x=s1.func(arr1,n,d);
    cout<<x;
 
    
    return 0;
}