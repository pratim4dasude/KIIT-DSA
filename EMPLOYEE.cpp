#include<iostream>
using namespace std;

struct employee{
	int empid;
	char name[20];
	float salary;
	int age;
	float gross;
    
    void input(employee *e)
{
	
	cout<<"enter the name of the employee  ";
	cin>>e->name;
	cout<<"enter the employee id ";
	cin>>e->empid;
	cout<<"enter the salary of the employee ";
	cin>>e->salary;
	cout<<"enter the age of the employee ";
	cin>>e->age;
}

    void output(employee *e)
{ 
   
	cout<<e->name<<"\t\t"<<e->empid<<"\t\t"<<e->salary<<"\t\t"<<e->age<<"\t\t"<<e->gross<<endl;
}

};

void gross_calc(employee *e)
{
	e->gross = 0.8*(e->salary) + 0.1*(e->salary);
}



int main()
{
    int n;
    cout<<"enter the number of employees :";
    cin>>n;
   // employee *e = new employee[n];
  struct employee em[n];
   struct employee *e;
   e=em;
       for(int i=0;i<n;i++)
    	{
    		e->input(&e[i]);
    		
    	}	
    cout<<"NAME"<<"\t\t"<<"ID"<<"\t\t"<<"SALARY"<<"\t\t"<<"AGE"<<"\t\t"<<"GROSS"<<endl;

    for (int i = 0; i < n; ++i)
    	{
    		gross_calc(&e[i]);
    		e->output(&e[i]);
    	}	


	return 0;
}