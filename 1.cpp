#include<iostream>
using namespace std;

class student{
	private :
		int id;
		char name[30];
		int age;
		char course[40];
		char email[50];
		char city[20];
		char collage[40];

	public :
		void setdata(){
			cout<<"enter your ID :-";
			cin>>id;
			cout<<"enter your NAME :-";
			cin>>name;
			cout<<"enter your AGE :-";
			cin>>age;
			cout<<"enter your COURSE :-";
			cin>>course;
			cout<<"enter your EMAIL :-";
			cin>>email;
			cout<<"enter your CITY :-";
			cin>>city;
			cout<<"enter your COLLAGE :-";
			cin>>collage;
		}
			void getdata(){
				cout<<"student id is :"<<id<<endl;
				cout<<"student name is :"<<name<<endl;
				cout<<"student age is :"<<age<<endl;
				cout<<"student course is :"<<course<<endl;
				cout<<"student email is :"<<email<<endl;
				cout<<"student city is :"<<city<<endl;
				cout<<"student collage is :"<<collage<<endl;
			}
};
int main(){
	student s[5];
	int i;
	for(i=0;i<5;i++){
		s[i].setdata();
		s[i].getdata();
	}
	return 0;

}















