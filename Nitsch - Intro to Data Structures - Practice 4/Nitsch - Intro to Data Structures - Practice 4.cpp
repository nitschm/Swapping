#include <iostream>
using namespace std;

template <typename myType>
void mySwap(myType& num1, myType& num2)
{
    myType temp;

    temp = num1;
    num1 = num2;
    num2 = temp;
}

int main()
{
    int var1 = 10, var2 = 50;
    double var3 = 5.5, var4 = 25.5;
    string var5 = "Matt", var6 = "Nitsch";

    cout << "var1 = " << var1 << endl;
    cout << "var2 = " << var2 << endl;
    cout << endl;

    mySwap(var1, var2);

    cout << "var1 = " << var1 << endl;
    cout << "var2 = " << var2 << endl;
    cout << "\n\n";

    cout << "var3 = " << var3 << endl;
    cout << "var4 = " << var4 << endl;
    cout << endl;

    mySwap(var3, var4);

    cout << "var3 = " << var3 << endl;
    cout << "var4 = " << var4 << endl;
    cout << "\n\n";

    cout << "var5 = " << var5 << endl;
    cout << "var6 = " << var6 << endl;
    cout << endl;

    mySwap(var5, var6);

    cout << "var5 = " << var5 << endl;
    cout << "var6 = " << var6 << endl;
    cout << "\n\n";


    return 0;
}