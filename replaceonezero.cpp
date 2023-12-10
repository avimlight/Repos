class Solution {
public:
	vector<int> modifyArray(vector<int>& arr) {
		// Your code goes here
		for(int i=0;i<arr.size();i++){
			if(arr.at(i)%2==0){

				arr.at(i)=0;
			}
			else{
				arr.at(i)=1;
			}
		}
		return arr;
	}

};