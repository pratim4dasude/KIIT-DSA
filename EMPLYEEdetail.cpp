#include <iostream>
using namespace std;

struct student
{
	char name[20];
	int roll;
	int marks[5];
	int total = 0;
	float percentage;

};

int tmark(int a[],int n)
{
	int tot = 0;
	for(int k=0;k<n;k++)
	{
       tot += a[k];
	}
	return tot;
}

float percent(int a)
{
	return a*(0.2);
}

void display(student s){
 
   cout<<s.name<<endl;
   cout<<s.roll<<endl;
   for (int j = 0; j < 5; ++j)
    {
    	cout<<s.marks[j]<<endl;
    } 
   	
   cout<<s.total<<endl;
   cout<<s.percentage<<endl;
   
}



int main(){

    int n;

	cout<<"enter the number of students to be taken as input :";
	cin>>n;

    struct student s[100];
    
   for(int i=0;i<n;i++){

   cout<<"enter the student name :";
   cin>>s[i].name;
   cout<<"enter the student roll number :";
   cin>>s[i].roll;
   for (int j = 0; j < 5; ++j)
   {
   	cout<<"enter the mark in "<<j+1<<" subject :";
   	cin>>s[i].marks[j];
   	
   }
   s[i].total = tmark(s[i].marks,5);
   
   s[i].percentage = percent(s[i].total);
   
  }
   
  int inp;
  cout<<"enter the roll number to be displayed :";
  cin>>inp;
  for(int l=0;l<n;l++)
  {
  	if(s[l].roll == inp)
  		display(s[l]);
  } 

  return 0;
}