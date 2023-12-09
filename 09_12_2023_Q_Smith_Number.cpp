class Solution {
  public:
  int digitSum(int a){
      int sum =0;
      while(a!=0){
            sum = sum + a%10;
            a = a/10;
        }
        return sum;
  }
     bool isPrime(int n){
        if(n<=1){
            return false;
        }
        for(int i = 2; i*i <= n; i++){
            if(n%i == 0){
                return false;
            }
        }
        return true;
     }
    int primeSum(int n){
        int pSum = 0;
        int k =n;
        for(int i = 2;i<=sqrt(n);i++){
            while (n % i == 0 && isPrime(i)) {
                pSum += digitSum(i);
                n /= i;
            }
        }
        if(n>1 && n!=k ){
            pSum += digitSum(n);
        }
        return pSum;
    }
    int smithNum(int n) {
        // code here
        int a = n;
        int sum =digitSum(n);
        int factSum = primeSum(n); 
        
        if(factSum == sum){
            return 1;
        }
        else{
            return 0;
        } 
        
    }
};
