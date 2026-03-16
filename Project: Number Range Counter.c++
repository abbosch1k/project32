#include <iostream>
using namespace std;

int main() {
    int start, end, count = 0;

    cin >> start >> end;

    for(int i = start; i <= end; i++)
        count++;

    cout << "Numbers in range: " << count;
}
