#include <iostream>

using namespace std;

int x,y,holder,hcf;

int main()
{
    cout << "THIS PROGRAM IS WRITTEN TO DETERMINE THE GCD OF NUMBERS" << endl;
    cout << endl;
    cout << "Please enter a number" <<endl;
    cin >> x;
    cout << endl;
    cout << "Please enter next number" <<endl;
    cin >> y;
    cout << endl;

    while (y!=0){

        holder = y;
        y = x%y;
        x = holder;

    }
        hcf = x;
    cout << "The GCD of the numbers is " << hcf <<endl;
    return 0;
}
