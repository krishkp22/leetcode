class Solution {
public:
    bool isHappy(int n) {
        while(true)
        {
            int rem=0;
            long sum=0;
            while(n!=0)
            {
                rem=n%10;
                n=n/10;
                sum+=(rem*rem);
            }
            if(1<=sum && sum<=9)
            {
                if(sum==1 || sum==7)
                    return true;
                else
                    return false;
            }
            else
                n=sum;
        }
        return false;
    }
};
