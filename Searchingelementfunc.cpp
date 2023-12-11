class Solution {
public:
	bool findElement(vector<int>& arr, int x) {
		// Your code goes here
		for(int i=0;i<arr.size();i++){
			if(x==arr[i]){
				return true;
				break;
			}
		}
	}
};