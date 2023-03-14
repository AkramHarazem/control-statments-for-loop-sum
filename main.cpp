#include <iostream>

using namespace std;

int main()
{
    int i,num,sum =0;
    for (i=0;i<10;i++) {
        cout<< "Enter Number"<<i+1<<":";
        cin>> num;
        sum+=num;
    }
    cout<<"Sum is: "<< sum << endl;

    return 0;
}
