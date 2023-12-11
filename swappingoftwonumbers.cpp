class Solution {
public:
	void swap(int a, int b) {
		// Your code goes here
		cin>>a;
		cin>>b;
		int temp;
		temp=a;
		a=b;
		b=temp;
		cout<<a<<endl;
		cout<<b<<endl;
	}
};