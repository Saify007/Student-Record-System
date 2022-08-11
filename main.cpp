#include <iostream>
using namespace std;

class student{
private:

			char name[20];


    public:
        void input();
		void display();


    int id;

     char nameofdepartment[50];
     char nameofprogram[50];
     char nameofaddress[50];



};

 void student::input()
{
	cout<<"Enter Full Name:";
	cin>>name;


	cout<<"Enter  department:";
	cin>>nameofdepartment;



	cout<<"Enter  program:";
	cin>>nameofprogram;




	cout<<"Enter  addresss:";
	cin>>nameofaddress;


	cout<<"Enter  ID:";
	cin>>id;




}
void student::display()
{
	cout<<"\nName:"<<name;



	cout<<"\n  ID:"<<id;




	cout<<"\nDepartment:"<<nameofdepartment;




	cout<<"\nProgram:"<<nameofprogram;





	cout<<"\nAddresss:"<<nameofaddress;


}







int main()
{

int number;
    cout << "Enter an integer:if you enter positive number that's means you add course or enter negative number that's means you drop course :  ";
    cin >> number;

    if ( number >= 0)
    {
        cout << "That's means you add course " << number << endl;
    }

    else
    {
        cout << "That's means you drop course " << number << endl;
    }

    cout << " Best of luck"<<endl;









    student s;
	s.input();
	s.display();




    return 0;
}












