#include <iostream>
using namespace std;

int main(){
    string s;
    cin >> s;

    int count[256]={0};

    for(char c:s)
        count[c]++;

    for(int i=0;i<256;i++)
        if(count[i]>0)
            cout << char(i) << " " << count[i] << endl;
}
