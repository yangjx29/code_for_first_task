char y4OtfpyTB [(1087 - 967)], ooCGtwMdWc;
int EZn0YSvX;

int search (int p) {
    int q = p + 1;
    if (EZn0YSvX <= q)
        return q;
    while ((!('?' == y4OtfpyTB[q])) && (EZn0YSvX > q)) {
        if (!('$' != y4OtfpyTB[q]))
            q = search (q) + 1;
        else
            q = q + 1;
    }
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    if (q < EZn0YSvX) {
        y4OtfpyTB[p] = ' ';
        y4OtfpyTB[q] = ' ';
    }
    return q;
}

int main () {
    int PTnefXS4MYo = (864 - 864);
    while (cin >> ooCGtwMdWc) {
        cout << ooCGtwMdWc;
        EZn0YSvX = (187 - 187);
        while (!('\n' == ooCGtwMdWc)) {
            if (ooCGtwMdWc == '(')
                y4OtfpyTB[EZn0YSvX] = '$';
            else if (ooCGtwMdWc == ')')
                y4OtfpyTB[EZn0YSvX] = '?';
            else
                y4OtfpyTB[EZn0YSvX] = ' ';
            EZn0YSvX = EZn0YSvX +1;
            cin.get (ooCGtwMdWc);
            cout << ooCGtwMdWc;
        }
        PTnefXS4MYo = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (PTnefXS4MYo < EZn0YSvX) {
            while ((y4OtfpyTB[PTnefXS4MYo] != '$') && (PTnefXS4MYo < EZn0YSvX))
                PTnefXS4MYo = PTnefXS4MYo +1;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            PTnefXS4MYo = search (PTnefXS4MYo) + 1;
        }
        {
            PTnefXS4MYo = 0;
            while (PTnefXS4MYo < EZn0YSvX) {
                cout << y4OtfpyTB[PTnefXS4MYo];
                PTnefXS4MYo = PTnefXS4MYo +1;
            };
        }
        cout << endl;
    }
    return 0;
}

