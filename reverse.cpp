class Solution {
public:
	vector<int> reverseArray(vector<int>& arr) {
		// Your code goes here
int i=0;
int j=arr.size()-1;
int temp;
while(i<j){
temp=arr[i];
arr[i]=arr[j];
arr[j]=temp;
i++;
j--;

}
return arr;
	}
};