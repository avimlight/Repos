class Solution {
public:
	int findSumOfPositives(vector<int>& arr) {
		// Your code goes here
		int sum=0;
		for(int i=0;i<arr.size();i++){
			if(arr[i]>0){
				sum+=arr[i];
			}
		}
		return sum;
	}

};