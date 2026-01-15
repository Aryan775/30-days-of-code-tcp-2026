class Solution {
public:


    int nthUglyNumber(int n, int a, int b, int c){
        long long s = 1;
        long long e = 2 * 1e9;
        long long ans;
        long p = long(a);
        long q = long(b);
        long r = long(c);

        while(s <= e){
            long long mid = s + (e - s) / 2;
            long long count = 0;
            count += mid / p;
            count += mid / q;
            count += mid / r;
            count -= mid / lcm(p,q);
            count -= mid / lcm(q,r);
            count -= mid / lcm(r,p);
            count += mid / lcm(p,lcm(q,r));

            if(count >= n){
                ans = mid;
                e = mid - 1;
            }
            else{
                s = mid + 1;
            }
        }

        return ans;

    }
};