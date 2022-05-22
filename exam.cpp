#include<bits/stdc++.h>
using namespace std;


class Animal
{
private:
	int age; // Age of Animal
	int weight; // Weight of Animal
	string name; // Name of Animal
	char gender; // M or F
public:
	Animal(int age1=15, int weight1=200, string name1 = "sam", char gender1 ='M')
	{
		age = age1;
		weight = weight1;
		name = name1;
		gender = gender1;
	}

	void setAge(int age1){age = age1;}
	void setWeight(int weight1){weight = weight1;}
	void setName(string name1){name = name1;}
	void setGender(char gender1){gender = gender1;}
	int getAge(){return age;}

	virtual void look(){;}
	void printDetail(){cout<<"I am "<<name<<" , age : "<<age<< " and weight : "<<weight<<" ";}
	


	//~Animal();
	
};

class Tiger : public Animal
{
public:
	Tiger(int age1 = 15, int weight1=200, string name1 = "sam", char gender1 ='M')
	{
		setAge(age1);
		setWeight(weight1);
		setName(name1);
		setGender(gender1);
		cout << "Base class Parameterized constructor called" << endl;
	}
	void look() {cout<< "looks like a big cat.\n";}
	//~Tiger();
	

	
};

class Lion : public Animal
{
public:
	Lion(int age1 = 15, int weight1=200, string name1 = "sam", char gender1 ='M')
	{
		setAge(age1);
		setWeight(weight1);
		setName(name1);
		setGender(gender1);
		cout << "Base class Parameterized constructor called" << endl;
	}
	void look() {cout<< "looks like a king of jungle.\n";}
	//~ Lion();
	
};



int main()
{
	
	Animal arr[]={Tiger(15,800,"Bishnu",'M'),Lion(12,1200,"Rupasi",'F'),
	Tiger(20,1200,"Siba", 'M'),Lion(10,1100,"Bimal",'M'),
				Tiger(5,500,"Rupa",'F'),Lion(2,200,"Ashok",'M')};

	int oldIndex = 0;
    int oldestAge = 0;

	for(int i=0;i<6;i++)
	{
		if(arr[i]->getAge() > oldestAge) {
            oldestAge = arr[i]->getAge();
            oldIndex = i;
        }
		arr[i].printDetail();
		arr[i].look();
	}


/*
	Tiger *n1 = new Tiger(15,800,"Bishnu",'M');
	n1->printDetail();
	n1->look();
	arr[0] = n1->getAge();


	Lion *n2 =new Lion(12,1200,"Rupasi",'F');
	n2->printDetail();
	n2->look();
	arr[1] = n2->getAge();

	Tiger *n3=new Tiger(20,1200,"Siba", 'M');
	n3->printDetail();
	n3->look();
	arr[2] = n3->getAge();

	Lion *n4=new Lion(10,1100,"Bimal",'M');
	n4->printDetail();
	n4->look();
	arr[3] = n4->getAge();

	Tiger *n5=new Tiger(5,500,"Rupa",'F');
	n5->printDetail();
	n5->look();
	arr[4] = n5->getAge();

	Lion *n6=new Lion(2,200,"Ashok",'M');
	n6->printDetail();
	n6->look();
	arr[5] = n6->getAge();


	for (int i = 0; i < 6; ++i)
	{
		if(arr[i]>arr[0])
			swap(arr[i],arr[0]);
	}

*/








	return 0;
}