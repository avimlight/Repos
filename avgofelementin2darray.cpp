class Solution {
public:
	double findAverage(vector<vector<int>>& arr) {
		// Your code goes here
        float c=0;
        float sum=0;
        for(int i=0;i<arr.size();i++){
            for(int j=0;j<arr[i].size();j++){
                sum+=arr[i][j];
                c++;
            }
        }
        float avg=sum/c;
        return avg;
	}
};