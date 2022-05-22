#include <iostream>
using namespace std;
int main()
{
int arr[9] = {1, 3, 6, 19, 27, 51, 44, 13, 38};
// arr index  0  1  2   3   4   5   6   7   8   
int theorymarks[5] = {15,17,20,18,19};
int practicalmarks[5];
practicalmarks[0]=6;
practicalmarks[1]=10;
practicalmarks[2]=5;
practicalmarks[3]=9;
practicalmarks[4]=7;
cout<<"these arr data"<<endl;
cout<<arr[0]<<endl;
cout<<arr[1]<<endl;
cout<<arr[2]<<endl;
cout<<arr[3]<<endl;
cout<<"these are theory marks"<<endl;
cout<<theorymarks[0]<<endl;
cout<<theorymarks[1]<<endl;
cout<<theorymarks[2]<<endl;
cout<<theorymarks[3]<<endl;
cout<<theorymarks[4]<<endl;
cout<<"these are practical marks"<<endl;
cout<<practicalmarks[0]<<endl;
cout<<practicalmarks[1]<<endl;
cout<<practicalmarks[2]<<endl;
cout<<practicalmarks[3]<<endl;
cout<<practicalmarks[4]<<endl;
return 0;
}