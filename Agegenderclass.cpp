class Student {
public:
string name;
int age;
string gender;
	Student(string name, int age, string gender) {
this->name=name;
this->age=age;
this->gender=gender;
	}

	string getName() {
		// Your code goes here
		return this->name;
	}

	int getAge() {
		// Your code goes here
		return this->age;
	}

	string getGender() {
		// Your code goes here
		return this->gender;
	}

	void setName(string name) {
		// Your code goes here
		this->name=name;
	}

	void setAge(int age) {
		// Your code goes here
		this->age=age;
	}

	void setGender(string gender) {
		// Your code goes here
		this->gender=gender;
	}
}