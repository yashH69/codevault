#include <iostream>
using namespace std;
int main()
{
int marks[9];

for(int i=0; i<9; i++)
{
    cout<<"enter the marks of "<<i<<"th student is"<<endl;
    cin>>marks[i];
}

for(int i=0; i<9; i++)
{
    cout<<"Marks of "<<i<<"th student is"<<marks[i]<<endl;
    
}

return 0;
}