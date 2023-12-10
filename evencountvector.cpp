class Solution {
public:
	int countEvens(vector<int>& arr) {
		// Your code goes here
		int c=0;
		for(int i=0;i<arr.size();i++){

			if(arr[i]%2==0){
				c++;
			}
		}
		return c;
	}

};