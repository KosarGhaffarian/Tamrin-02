#include <iostream>
#include <iomanip>


using namespace std;

int main()
{

    int h, m, s, resault;

    cout << "   enter clock with exact hour & minute & second" << endl;
    cout << "   hour   :   ";
    cin >> h ;
    cout << "   minute :   ";
    cin >> m ;
    cout << "   second :   ";
    cin >> s;




    cout << endl;
    if((h && m && s )<=9)
    {
        cout << "   your exact clock is ----->   " << setfill('0') << setw(2)<< h << ":" <<setfill('0')<< setw(2) << m << ":" <<setfill('0') << setw(2)<< s << endl;

    }

    else
    {
        cout << "   your exact clock is ----->   " << h << ":" << m << ":" << s << endl;

    }
    resault = (h*3600)+(m*60)+s;

    cout << "   " << resault << " seconds" << endl << endl << endl << endl;


    return 0;
}
