#include<iostream>
#include<iomanip>
#include<vector>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    long long sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    long long s1=0;
    for (int i = 0; i < k; i++) {
        s1 += a[i];
    }
    sum=s1;
    int p1=0;
    int p2=k;
    while(p2<n){
        s1=s1-a[p1]+a[p2];
        sum+=s1;
        p1++;
        p2++;
    }
    cout <<fixed<<setprecision(6)<< 1.0*sum /(n-k+1)<< endl;
    return 0;
}