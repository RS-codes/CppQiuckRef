//80.a Diamond problem in OOPS, Solution using Virtual Inheritance with Example

/*DIAMOND PROBLEM- when there is an inheritance hierarchy containing 2 or more base classes dat inherit frm a common base, results in a need of ambiguity resolution in d ABSENCE OF VIRTUAL INHERITANCE*/

class Animal{
public:
	void walk(){
	cout<<"Animal walks"<<endl;	
	}
};

class Lion : public Animal{
		
};


class Tiger : public Animal{
		
};


class Liger : public Lion, public Tiger{
		
};

int main()
{
	Liger diamond;
	diamond.walk();  //error C2385: ambiguous access of 'walk'


	return 0;
}

