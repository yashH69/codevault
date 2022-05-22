#include <iostream>
#include <string>
using namespace std;


int main() {

    string name ;
    char cname ;
    char symbol ;
    float amount ;
    int year ;

    cout << "enter the name of the country";
    getline(cin, name);

    cout << "enter the the currency name";
    cin >> cname;

    cout << "enter the the currency symbol";
    cin >> symbol;
    
    cout << "enter the the currency amount";
    cin >> amount;

    cout << "enter the year";
    cin >> year;

    cout << "As economic reforms picked up the pace, " << name << "'s " << name << "five-fold to reach US" << cname << amount <<" trillion in " << year << " (as per IMF estimates).";

    return 0;
}