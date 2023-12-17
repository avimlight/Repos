class Animal {
public:
string name,species;
	Animal(string name, string species) {
this->name=name;
this->species=species;
	}

	string getName() {
		// Your code goes here
		return this->name;
	}

	string getSpecies() {
		// Your code goes here
		return this->species;
	}
}