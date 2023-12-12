class Solution {
public:
	char grades(vector<double>& marks) {
		// Your code goes here
		char grade='D';
		for(int i=0;i<marks.size();i++){
	if(marks[i]>=80){

		grade='A';
		
	}	
	else if(marks[i]>=60 && marks[i]<80){
		grade='B';
	
	}
	else if(marks[i]>=40 && marks[i]<60){
		grade='C';
		
	}

		}
		return  grade;
	}
};