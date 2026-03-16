#include <iostream>
using namespace std;

int main(){
    double temp[7];

    for(int i=0;i<7;i++)
        cin >> temp[i];

    double sum=0;

    for(int i=0;i<7;i++)
        sum += temp[i];

    cout << "Average: " << sum/7;
}
