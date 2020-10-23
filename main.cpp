#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int a, c, b;

    ifstream f1;
    ofstream f2;
    f1.open("input.txt");
    f2.open("output.txt");

    f1>>a;

    c=a%10;
    b=(a%100-c)/10;

    f2<<c<<" "<<b;

    f1.close();
    f2.close();

    return 0;
}
