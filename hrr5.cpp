#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
 int a,b;
 
 cin>>a>>b;
 
 
 for(int i=a; i<=b; i++){
     
     if ((a>=1 && a<=9)){
         string name[10] = {"","one","two","three","four","five","six","seven","eight","nine"};
         for(;a<=b;a++){
             if(a<=9)
                 cout << name[a] <<"\n";
             if (a>9){
                 for(;a<=b;a++)
                 {
                     if (a%2==0){
                     cout << "even\n";
                     }
                     else {
                     cout << "odd\n";
                     }
             }
         }
        
     }
     }
     return 0;
    }
}