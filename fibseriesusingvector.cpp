class Solution {
public:
	vector<int> fibonacci(int n) {
		// Your code goes here

        vector<int> fib;

        if(n>=1){
            fib.push_back(0);
        }
         if(n>=2){
fib.push_back(1);
        }
        

            int sum=0;
            int a=0;
            int b=1;
            int c=2;
            while(c<n){
                sum=a+b;
                fib.push_back(sum);
                a=b;
                b=sum;
                c++;
            }
            return fib;
        
	}