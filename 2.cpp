#include<iostream>
using namespace std;

class simcard{
	private :
		int id ;
		char name[25] ;
		int age;
		char telecome_brand_name[30];
		long long int mobile_number;
		char city[30];
		int simcard_validity;

	public :
		void setdata(){
			cout<<"enter your id :-";
			cin>>id;
			cout<<"enter your name :-";
			cin>>name;
			cout<<"enter your age :-";
			cin>>age;
			cout<<"enter your telecome brand name :-";
			cin>>telecome_brand_name;
			cout<<"enter your mobile number :-";
			cin>>mobile_number;
			cout<<"enter your city :-";
			cin>>city;
			cout<<"enter your simcard validity :-";
			cin>>simcard_validity;
	}
		void getdata(){
			cout<<"Customer ID is : "<<id<<endl;
			cout<<"Customer Name is : "<<name<<endl;
			cout<<"Customer Age is : "<<age<<endl;
			cout<<"Customer telecome Brand  is : "<<telecome_brand_name<<endl;
			cout<<"Customer Mobile Number is : "<<mobile_number<<endl;
			cout<<"Customer City is : "<<city<<endl;
			cout<<"Customer Simcard Validity is : "<<simcard_validity<<endl;
		}
};
	

	int main(){
		simcard s[5];
		int i;
		for(i=0;i<5;i++){
			s[i].setdata();
			s[i].getdata();
		}
	}



