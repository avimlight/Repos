class Solution {
public:
	int sumAntiDiagonal(vector<vector<int>>& arr) {
		// Your code goes here
		int sum=0;
		for(int i=0;i<arr.size();i++){
			for(int j=0;j<arr[i].size();j++){
if(i+j==arr.size()-1){
	sum=sum+arr[i][j];
}
			}
		}
		return sum;
	}
};