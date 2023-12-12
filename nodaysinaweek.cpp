class Solution {
public:
	string daysOfWeek(int num) {
		// Your code goes here
		string ans="";
		switch(num){
			case 1:
			ans="Monday";
			break;
				case 2:
			ans="Tuesday";
			break;
				case 3:
			ans="Wednesday";
			break;
				case 4:
			ans="Thursday";
			break;
				case 5:
			ans="Friday";
			break;
				case 6:
			ans="Saturday";
			break;
			case 7:
			ans="Sunday";
			break;
default:
ans="Invalid Input";
			


		}
		return ans;
	}
};