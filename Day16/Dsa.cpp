class Solution {
public:
    int candy(vector<int>& ratings) {
        int sum=1;
        int i=1;
        while(i<ratings.size()){
            if(ratings[i]==ratings[i-1]){
                sum++;
                i++;
            }
            int peak=1;
            while((i<ratings.size())&&(ratings[i-1]<ratings[i])){
                peak++;
                sum+=peak;
                i++;
            }
            int down=0;
            while((i<ratings.size())&&(ratings[i-1]>ratings[i])){
                down++;
                sum+=down;
                i++;
            }
            down++;
            if(down>peak){
                sum+=(down-peak);
            }
        }
        return sum;
    }
};