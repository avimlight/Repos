class Solution {
public:
	vector<int> findPairWithGivenSum(vector<int>& arr, int targetSum) {
		// Your code goes here
		vector<int> ans;
	for(int i=0;i<arr.size();i++){

		for(int j=i+1;j<arr.size();j++){
			int sum=arr[i]+arr[j];
			if(sum==targetSum){
				ans.push_back(arr[i]);
				ans.push_back(arr[j]);
			
			}
		}
	
	}	
	return ans;

		
	}
};