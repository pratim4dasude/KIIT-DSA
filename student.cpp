using namespace std;
#include<iostream>
struct student
{
    int rn;
    void dip();
};
int main()
{
    struct student s;
    cout<<"enter rn";
    cin>>s.rn;
    cout<<" rn is  "<<s.rn;
    return 0;
}