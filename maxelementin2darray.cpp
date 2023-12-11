class Solution {
public:
	int max(vector<vector<int>>& args) {
		// Your code goes here
	int max=args[0][0];
	for(int i=0;i<args.size();i++){
		for(int j=0;j<args[i].size();j++){
			if(args[i][j]>max){
				max=args[i][j];
			}
		}
	}
	return max;
	}
};