class Solution {
public:
	int sum_of_numbers_in_range(vector<int>& interval) {
		// Your code goes here
		int sum=0;
		for(int i=interval[0];i<=interval[1];i++){
			sum=sum+i;
		}
		return sum;
	}