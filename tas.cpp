#include <iostream>
#include <time.h>
#include <string.h>


using namespace std;

int main()
{

    srand(time(0));

    string t;
    int r;


    for (int i=1 ; i<=6 ; i++)
    {

        cout <<  "Roll the dice by typing Roll---->  ";
        cin >> t;

        if(t == "Roll")
        {

            r = rand()%6+1;
            cout << r << endl<< endl;



            if ( r == 6 )
            {
                cout << endl << "Hurrahhhh!!!! You can roll it again!type Roll----->  ";
                cin >> t;
                r = rand()%6+1;
                cout << r << endl<< endl;

            }
            else {
                continue;
            }


        }
        else
        {
            cout << "wrong validation!!!!!!" << endl << endl;
            continue;
        }

    }
    return 0;
}
