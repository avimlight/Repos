class Solution {
public:
	vector<int> findRowMaxima(vector<vector<int>>& arr) {
		// Your code goes here
        vector<int> ans;
        for(int i=0;i<arr.size();i++){
            int max=arr[i][0];
            for(int j=0;j<arr.size();j++){
if(arr[i][j]>max){
    max=arr[i][j];
}
            }
            ans.push_back(max);
        }
        return ans;
	}