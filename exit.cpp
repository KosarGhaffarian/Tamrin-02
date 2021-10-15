#include <iostream>

using namespace std;

int main()
{
    string text;
    int number,a,sum=0;

    cout << "How many words do you want to enter? -----> ";
    cin >> a;




    for (int i=0 ; i<a ; i++)
    {
        cout << endl << "please enter a word -----> ";
        cin >> text;


        while (text != "exit" )
        {
            cout << "enter a number -----> ";
            cin >> number;
            sum += number;
            break;
        }
    }
    cout << endl << endl << endl << "sum is -----> "<< sum << endl << endl ;

    return 0;
}
