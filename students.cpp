#include <iostream>
#include <climits>


using namespace std;

int main()
{

    int n, score, max,min;
    float avg=0, sum=0;
    min = INT_MAX;
    max = INT_MIN;

    cout << "enter the number of students----->  ";
    cin >> n;

    for (int i=0 ; i<n ; i++)
    {
        cout << "enter the scores----->  ";
        cin >> score;
        sum += score;


        if ( score > max)
        {
            max=score;

        }

        if ( min > score )
        {
            min = score;
        }


        avg = sum / n;

    }



    cout <<endl<<endl<<endl<< "max: " << max << endl << "min: " << min << endl;
    cout << "avg----->  " << avg << endl << endl << endl;
    return 0;
}











