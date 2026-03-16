#include <iostream>
using namespace std;

int main(){
    string text;
    cin >> text;

    int count=0;

    for(char c:text)
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
            count++;

    cout << count;
}
