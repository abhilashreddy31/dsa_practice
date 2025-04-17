class Solution {
public:
    int reverse(int x) {
        long revNum=0;
        while(x){
            int d=x%10;
            revNum=revNum*10+d;
            x=x/10;
        }
        // return revNum;  //ptints just positive numbers
        if(revNum>INT_MAX || revNum<INT_MIN) return 0;  //for negative numbers
        return int(revNum);
    }
};
