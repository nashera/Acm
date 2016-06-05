#include <iostream>
using namespace std;
int sum(int a, int b){
    int s = a + b;
    return s;
}
int main(int argc, char const *argv[])
{
    int a = 7, b = 9;
    cout << sum(a, b) << endl;
    /* code */
    return 0;
}