class Solution {
public:
    double myPow(double x, int n) {
        long m=abs(n);
        double ans=1;
        while(m>0){
          if(m%2==0){
              x=x*x;
              m=m/2;
          }
            else{
                ans*=x;
                m=m-1;
            }
        }
        if(n<0){        
            return 1.0/ans;
        }
        return ans;
    }
};