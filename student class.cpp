																			#include<iostream>
using namespace std;

class student{
private:
string name;
int roll_no;
float marks;

public:
void inputdetails(){
cout<<"Enter student name";
cin>>name;

cout<,"Enter student roll_no";
cin>>roll_no;

cout<<"Enter student marks";
cin>>marks;
}
void displaydetails(){
cout<<"student Name:"<<name<<endl;
cout<<"student roll_no:"<<roll_no<<endl;
cout<<"student marks:"<<marks<<endl				;
}
};
int main()
{
student s;
s.inputdetails();

cout<<"\nstudent display\n;
s.displaydetails();
return 0;
}


