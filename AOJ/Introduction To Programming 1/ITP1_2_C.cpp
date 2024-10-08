#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int a,b,c;

    cin >> a >> b >> c;

    int numbers[] = {a,b,c};

    sort(numbers,numbers+ 3);

    cout << numbers[0] << " "<< numbers[1] << " " << numbers[2] << endl;

    return 0;
}