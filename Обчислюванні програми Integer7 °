#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int a, b, c, sum, dob;

    ifstream f1;
    f1.open("input.txt");
    ofstream f2;
    f2.open("output.txt");

    f1>>a;

    b=a%10;
    c=(a-b)/10;

    sum=b+c;
    dob=b*c;

    f2<<sum<<" "<<dob;

    f2.close();
    f1.close();

    return 0;
}
