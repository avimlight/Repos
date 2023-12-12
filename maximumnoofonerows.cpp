class Solution {
public:
	int maximumOnesRow(vector<vector<int>>& arr, int r, int c) {
		// Your code goes here
   int mx=-1;
   int index=-1;
        for(int i=0;i<r;i++){
                 int c=0;
              

            for(int j=0;j<c;j++){
                if(arr[i][j]==1){
                    c++;
                }
            }
            if(c>mx){
                mx=c;
                index=i;
            }

        }
        return index;
	}
};