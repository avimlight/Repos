class Solution {
public:
	void numberPatternPrint(int n) {
		// Your code goes here
		for(int i=1;i<=n;i++){
			for(int j=1;j<=i;j++){
cout<<j<<" ";
			}
			cout<<endl;
		}
	}
};