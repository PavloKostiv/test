#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int a;

    ifstream f1;
    f1.open("input.txt");

    ofstream f2;
    f2.open("output.txt");

    f1>>a;
    f2<<a;

    f1.close();
    f2.close();

    return 0;
}
