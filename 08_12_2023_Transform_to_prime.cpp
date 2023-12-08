class Solution
{
    public:
    bool isPrime(int num){
        if(num<=1){
            return false;
        }
        for(int i=2; i*i <= num;i++){
            if(num%i == 0){
                return false;
            }
        }
        return true;
    }
    int minNumber(int arr[],int N)
    {
        int sum =0;
        for(int i=0;i<N;i++){
            sum = sum+ arr[i];
        }
        
        int t=0;
        int count =0;
        while (!isPrime(sum)) {
            sum++;
            count++;
        }
        return count;
    }
};
