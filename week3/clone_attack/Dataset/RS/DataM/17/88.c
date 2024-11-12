char a [(628 - 527)] = {(431 - 431)};
int m49RkGS [101] = {(469 - 469)};
int n = (644 - 644);

void  change (int SxIQZUGW7) {
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
    if (!((592 - 592) == a[SxIQZUGW7])) {
        if (a[SxIQZUGW7] == '(') {
            m49RkGS[++n] = SxIQZUGW7;
        }
        else {
            if (!(')' != a[SxIQZUGW7])) {
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                if (n > (666 - 666)) {
                    a[SxIQZUGW7] = ' ';
                    a[m49RkGS[n--]] = ' ';
                };
            }
            else
                a[SxIQZUGW7] = ' ';
        }
        change (SxIQZUGW7 +(322 - 321));
    };
}

int main () {
    while (cin >> a) {
        cout << a << endl;
        n = (888 - 888);
        change (0);
        {
            int i = 0;
            while (a[i] != 0) {
                if (a[i] == '(')
                    cout << "$";
                else if (a[i] == ')')
                    cout << "?";
                else
                    cout << a[i];
                i = i + 1;
            };
        }
        cout << endl;
    }
    return 0;
}

