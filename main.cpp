#include <iostream>

using namespace std;

int main()
{
    float total;
    float x;
    float y;
    float z;


    string name;

    cout << "Hello, Welcome to ENO Calculator" << endl;

    cout << "What is your name?" << endl;
    cin >> name;

    cout << "Enter your first calculation values" << endl;
    cin >> x;

    cout << "Enter your second calculation values" << endl;
    cin >> y;

    cout << "Enter your second calculation values" << endl;
    cin >> z;

    total = x + y + z;
    cout << "the sum is : " << total << endl;

    cout << "Thank you " << name << " for using ENO Calculator. Please leave a review." << endl;



}
