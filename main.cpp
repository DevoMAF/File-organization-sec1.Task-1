
#include <iostream>
#include <fstream>
using namespace std;
#define er '\n'
int main()
{
string name ;
long long ID;
double Grade;
 cout<<" Enter your name : ";
  getline(cin,name);
   
  cout<< " Enter your id : ";
  cin>>ID;


cout<<" Enter you grade : ";
cin>>Grade;

ofstream myfile;
myfile.open("student2.txt");

myfile<<"FULL NAME : "<<name <<er;
myfile<<"ID : "<<ID <<er;
myfile<<" GRADE : "<<Grade<<er;

myfile.close();
 return 0;

}
 