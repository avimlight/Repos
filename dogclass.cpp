class Dog {
public:
string name,species,breed;

	Dog(string name, string species, string breed) {
this->name=name;
this->species=species;
this->breed=breed;
	}

	string getBreed() {
		// Your code goes here
		return this->breed;
	}