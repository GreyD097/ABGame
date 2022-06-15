#include <stdio.h>
#include <iostream>
#include <string>
#include <ctime>
using namespace std;

int s(int a, int b, int c, int d)
{
    if (a > 0 && a < 10 && b>0 && b < 10 && c>0 && c < 10 && d>0 && d < 10 && a != b && a != c && a != d && b != c && b != d && c != d)
        return 0;
    else
        return 1;
}

int main()
{
    int a, b, c, d;
    int q, w, e, r;
    int x = 0, y = 0, z = 0;

    char t;


    do {
        cout << "请选择模式:" << '\n' << "a - 单人模式" << '\n' << "b - 双人模式"<<endl;
        cin >> t;
    } while (!(t=='a'||t=='b'));

    if (t == 'a')
    {
        do {
            a = rand() % (10 - 0 + 1) + 0;
            b = rand() % (10 - 0 + 1) + 0;
            c = rand() % (10 - 0 + 1) + 0;
            d = rand() % (10 - 0 + 1) + 0;
        } while(s(a, b, c, d) == 1);
        cout << "****" << endl;
    }
    else
    {
        do {
            cout << "Put your numbers:";
            cin >> a >> b >> c >> d;
        } while (s(a, b, c, d) == 1);
        cout << "****" << endl;
    }


    do {
        x = 0;
        y = 0;

        cout << "Your answer:" << endl;

        do {
            cin >> q >> w >> e >> r;
        } while (s(q, w, e, r) == 1);

        if (q == a) x++;
        if (w == b) x++;
        if (e == c) x++;
        if (r == d) x++;
        if (q == a || q == b || q == c || q == d) y++;
        if (w == a || w == b || w == c || w == d) y++;
        if (e == a || e == b || e == c || e == d) y++;
        if (r == a || r == b || r == c || r == d) y++;
        y = y - x;
        z++;

        cout << q << w << e << r << ' ';
        cout << x << "A" << y << "B" << endl;

    } while (x != 4);

    cout << "Your win!" << '(' << z << ')' << endl;


    system("pause");
    return 0;
}