#include<iostream>
using namespace std;

int num1, num2, result;
int num1p, num2p, resultp, point;
char h = 221;
char b = 222;
char a = 223;
int line = 1;
char op;
void  second()
{
    line = 1;
    system("cls");
    cout << "\n\n\n";
    for (int i = 1;i <= 21;i++)
    {
        if (i == line) {
            line = line + 4;
            cout << "\t";
            for (int j = 0; j < 29; j++)
            {
                if (j == 0)
                    cout << b;
                cout << a;
                if (j == 28)
                    cout << h;
            }
        }
        else if (i == 3) {
            if (point == 3)
                cout << "\t" << b << "                   " << num1 << " " << op << " " << num2 << " = " << result << " " << h;
            else  if (point == 4)
                cout << "\t" << b << "                  " << num1 << " " << op << " " << num2 << " = " << result << " " << h;
            else if (point == 5)
                cout << "\t" << b << "                 " << num1 << " " << op << " " << num2 << " = " << result << " " << h;
            else if (point == 6)
                cout << "\t" << b << "                " << num1 << " " << op << " " << num2 << " = " << result << " " << h;
            else if (point == 7)
                cout << "\t" << b << "               " << num1 << " " << op << " " << num2 << " = " << result << " " << h;
            else if (point == 8)
                cout << "\t" << b << "              " << num1 << " " << op << " " << num2 << " = " << result << " " << h;
            else if (point == 9)
                cout << "\t" << b << "             " << num1 << " " << op << " " << num2 << " = " << result << " " << h;
            else if (point == 10)
                cout << "\t" << b << "            " << num1 << " " << op << " " << num2 << " = " << result << " " << h;
            else if (point == 11)
                cout << "\t" << b << "           " << num1 << " " << op << " " << num2 << " = " << result << " " << h;
            else if (point == 12)
                cout << "\t" << b << "          " << num1 << " " << op << " " << num2 << " = " << result << " " << h;
            else if (point == 13)
                cout << "\t" << b << "         " << num1 << " " << op << " " << num2 << " = " << result << " " << h;
            else if (point == 14)
                cout << "\t" << b << "        " << num1 << " " << op << " " << num2 << " = " << result << " " << h;
            else if (point == 15)
                cout << "\t" << b << "       " << num1 << " " << op << " " << num2 << " = " << result << " " << h;
            else if (point == 16)
                cout << "\t" << b << "      " << num1 << " " << op << " " << num2 << " = " << result << " " << h;
            else if (point == 17)
                cout << "\t" << b << "     " << num1 << " " << op << " " << num2 << " = " << result << " " << h;
            else if (point == 18)
                cout << "\t" << b << "    " << num1 << " " << op << " " << num2 << " = " << result << " " << h;
            else if (point == 19)
                cout << "\t" << b << "   " << num1 << " " << op << " " << num2 << " = " << result << " " << h;
            else if (point == 20)
                cout << "\t" << b << "  " << num1 << " " << op << " " << num2 << " = " << result << " " << h;
            else if (point == 21)
                cout << "\t" << b << " " << num1 << " " << op << " " << num2 << " = " << result << " " << h;
            else if (point == 22)
                cout << "\t" << b << "" << num1 << " " << op << " " << num2 << " = " << result << " " << h;
        }
        else if (i == 7) {
            cout << "\t" << b << "   7      8      9       +   " << h;
        }
        else if (i == 11) {
            cout << "\t" << b << "   4      5      6       -   " << h;
        }
        else if (i == 15) {
            cout << "\t" << b << "   1      2       3      *   " << h;
        }
        else if (i == 19) {
            cout << "\t" << b << "   .      0       =      /   " << h;
        }
        else
        {
            cout << "\t" << b << "                             " << h;
        }
        cout << endl;
    }
}
void finalpoint()
{
    point = 0;
    for (int p = 1;p < 4;p++)
    {
        if (p == 1)
        {
            if (num1 < 10 && num1 >= 0)
                num1p = 1;
            else if (num1 < 100 && num1 >-10)
                num1p = 2;
            else if (num1 < 1000 && num1 >-100)
                num1p = 3;
            else if (num1 < 10000 && num1 >-1000)
                num1p = 4;
            else if (num1 < 100000 && num1 >-10000)
                num1p = 5;
            else if (num1 < 1000000 && num1 >-100000)
                num1p = 6;
            else if (num1 < 10000000 && num1 >-1000000)
                num1p = 7;
            else if (num1 < 100000000 && num1 >-10000000)
                num1p = 8;
            else if (num1 < 1000000000 && num1 >-100000000)
                num1p = 9;
        }
        else if (p == 2)
        {
            if (num2 < 10 && num2 >= 0)
                num2p = 1;
            else if (num2 < 100 && num2 >-10)
                num2p = 2;
            else if (num2 < 1000 && num2 >-100)
                num2p = 3;
            else if (num2 < 10000 && num2 >-1000)
                num2p = 4;
            else if (num2 < 100000 && num2 >-10000)
                num2p = 5;
            else if (num2 < 1000000 && num2 >-100000)
                num2p = 6;
            else if (num2 < 10000000 && num2 >-1000000)
                num2p = 7;
            else if (num2 < 100000000 && num2 >-10000000)
                num2p = 8;
            else if (num2 < 1000000000 && num2 >-100000000)
                num2p = 9;
        }
        else if (p == 3)
        {
            if (result < 10 && result >= 0)
                resultp = 1;
            else if (result < 100 && result >-10)
                resultp = 2;
            else if (result < 1000 && result>-100)
                resultp = 3;
            else if (result < 10000 && result>-1000)
                resultp = 4;
            else if (result < 100000 && result>-10000)
                resultp = 5;
            else if (result < 1000000 && result>-100000)
                resultp = 6;
            else if (result < 10000000 && result>-1000000)
                resultp = 7;
            else if (result < 100000000 && result>-10000000)
                resultp = 8;
            else if (result < 1000000000 && result>-100000000)
                resultp = 9;
        }
    }
    point = num1p + num2p + resultp;
    second();
}
void fourth()
{
    num1 = result;
    cin >> op >> num2;
    switch (op)
    {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        result = num1 / num2;
        break;
    case '%':
        result = num1 % num2;
        break;
    default:
        break;
    }
    finalpoint();
}
void third()
{
    cin >> num1 >> op >> num2;
    switch (op)
    {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        result = num1 / num2;
        break;
    case '%':
        result = num1 % num2;
        break;
    default:
        break;
    }
    system("cls");
}
void  first()
{
    system("cls");
    cout << "\n\n\n";
    for (int i = 1;i <= 21;i++)
    {
        if (i == line) {
            line = line + 4;
            cout << "\t";
            for (int j = 0; j < 30; j++)
            {
                if (j == 0)
                    cout << b;
                cout << a;
                if (j == 29)
                    cout << h;
            }
        }
        else if (i == 7) {
            cout << "\t" << b << "   7      8       9       +   " << h;
        }
        else if (i == 11) {
            cout << "\t" << b << "   4      5       6       -   " << h;
        }
        else if (i == 15) {
            cout << "\t" << b << "   1      2       3       *   " << h;
        }
        else if (i == 19) {
            cout << "\t" << b << "   .      0       =       /   " << h;
        }
        else if (i == 3) {
            cout << "\t" << b << "                          0   " << h;
        }
        else
        {
            cout << "\t" << b << "                              " << h;
        }
        cout << endl;
    }
}
int main()
{
    system("color 0B");
    first();
    third();
    finalpoint();
    start:
    second();
    fourth();
    goto start;
    return 0;
}