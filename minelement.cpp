class Solution {
public:
	int minimum(vector<vector<int>>& arr) {
		// Your code goes here
		int min=arr[0][0];
		for(int i=0;i<arr.size();i++){
			for(int j=0;j<arr[i].size();j++){
				if(arr[i][j]<min){
					min=arr[i][j];
				}
			}
		}
		return min;
	}
};