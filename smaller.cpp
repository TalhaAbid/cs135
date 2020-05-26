#include <iostream>
using namespace std;

int main(){
    int a,b,smaller;
    cout << "Enter the first number: " << endl;
    cin >> a;
    cout << "Enter the second number: " << endl;
    cin >> b;
    if (a < b) { smaller = a;}
    else { smaller = b;}
    cout << "The smaller of the two is " << smaller << endl;
  

    return 0;
}
