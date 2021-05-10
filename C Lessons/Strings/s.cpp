#include <iostream>
#include <string>
#include <fstream>
#include<iomanip>
#include <sstream>
#include <time.h>
using namespace std;

void add_book(void);
void add_student(void);
void search_book(string [][3],int );
void search_student(string [][3],int);
void issue(string [][3],string[][3],int,int,int [],string,string, int []);
void retrn(string [][3],string[][3],int,int,int [],string,string, int []);
string due_date(void);
string date_format(void);
void check_due_date(string[],int,string[][3],int,string [][3],string [][5]);

int main(){
	system("COLOR 81");
	string pass;
	
top:
        system("cls");
		for(int star = 0;star <40; ++star)
		cout<< "_";
		cout<< "" << setw(13) << "WELCOME TO THE FUCKING LIBARARY:" <<setw (13) <<  "";
		
		for(int star = 0;star<40;++star)
		cout<<"_";
		cout<< endl; 
		
		cout<<"Please Enter the password to access the gain:";
		cin>>pass;
		if(pass=="fck"){
			cin.ignore();
			string date;
			//date = date_format();
			
			system("cls");
			
top2:  
            int choice_section;
            int choice_database;
            int choice_lib;
            int choice_issue;
            int count_book[100];
            int user_issue[100][5];
            int user_count [100]={0};
            int avail_book[100];
			
			
		}
		
}
