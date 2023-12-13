class Solution{
public:
	// #define ll long long
	ll countStrings(int n) {
	    // code here
	    long long zero = 1, one =1, total = zero+one;
	    if(n==1){
	        return 2;
	    }
	    
	    while(n-->1){
	       one = zero;
	       zero = total;
	       total = (one+zero)%1000000007;
	    }
	    return total;
	}
};
