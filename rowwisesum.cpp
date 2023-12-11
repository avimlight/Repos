class Solution {
public:
	int SumRowwise(vector<vector<int>>& arr) {
		// Your code goes here
		
		for(int i=0;i<arr.size();i++){
int sum=0;

			for(int j=0;j<arr[i].size();j++){
	sum+=arr[i][j];
			}
cout<<sum<<endl;
		}
	
	}
};