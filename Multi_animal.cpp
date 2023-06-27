

#include <iostream>

class ambidextrous {
public:
	virtual void Feets() = 0;
	virtual void lungs() = 0;

};

class bird : virtual public ambidextrous {
public:
	void Feets() override {
		std::cout << "Birds have feets" << std::endl;
	}

	void lungs() override {
		std::cout << "Birds have lungs" << std::endl;
	}
};

class sea_animal : virtual public ambidextrous{
public:
	
	void Feets() override {
		std::cout << "Main part of sea animal don't have feets" << std::endl;
	}
	void lungs() override {
		std::cout << "One part of sea animal don't have lungs" << std::endl;
	}
};

class frog : public bird, sea_animal {
public:
	void Feets() override {
		std::cout << "The frog has feets" << std::endl;
	}
	void lungs() override {
		std::cout << "The frog has lungs" << std::endl;
	}
};


int main()
{ 
	frog Frog;
	Frog.Feets();
	Frog.lungs();
	
   
}

