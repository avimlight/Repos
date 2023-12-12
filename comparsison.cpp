class Solution {
public:
	bool stringToBoolean(string str) {
		// Your code goes here
		if(str.compare("true")==0){
			return true;
		}
		else{
			return false;
		}
	}
};