class Solution {
public:
	int findMax(vector<int>& arr) {
		// Your code goes here
		int max=arr[0];
		for(int i=0;i<arr.size();i++){
			if(arr[i]>max){
				max=arr[i];
			}
		}
		return max;
	}
};