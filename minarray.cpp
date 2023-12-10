class Solution {
public:
	int findMin(vector<int>& arr) {
		// Your code goes here
		int min=arr[0];
		for(int i=0;i<arr.size();i++){
			if(arr[i]<min){
				min=arr[i];
			}
		}
		return min;
	}
};