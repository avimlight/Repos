class Solution {
public:
	int min(int a, int b, int c) {
		// Your code goes here
		if(a<=b && a<=c){
			return a;

		}
		else if(b<=a && b<=c){
			return b;
		}
		else{
			return c;
		}
	}
};