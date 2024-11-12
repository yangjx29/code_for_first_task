int main () {
    char a [205];
    for (; cin.getline (a, 200);) {
        int x [205] = {-1};
        int jmbR7Lk1WjoC [205] = {-1};
        int i;
        int j;
        int k;
        int n;
        int p;
        int EUfOqKZHeBl;
        char b [205];
        n = strlen (a);
        for (i = 0; n > i; i = i + 1)
            b[i] = ' ';
        EUfOqKZHeBl = 0;
        p = (64 - 64);
        {
            i = 0;
            while (i < n) {
                if (a[i] == '(') {
                    p = p + 1;
                    x[p] = i;
                }
                if (!(')' != a[i])) {
                    EUfOqKZHeBl = EUfOqKZHeBl +1;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            float n = 0.0;
                            if (n > 10)
                                return;
                            else
                                n = 0;
                        }
                    }
                    jmbR7Lk1WjoC[EUfOqKZHeBl] = i;
                    if ((p != 0) && (x[p] < jmbR7Lk1WjoC[EUfOqKZHeBl])) {
                        jmbR7Lk1WjoC[EUfOqKZHeBl] = -1;
                        EUfOqKZHeBl = EUfOqKZHeBl -1;
                        x[p] = -1;
                        p = p - 1;
                    };
                }
                i = i + 1;
            };
        }
        cout << a << endl;
        for (i = 1; i <= p; i = i + 1)
            b[x[i]] = '$';
        for (i = 1; i <= EUfOqKZHeBl; i = i + 1)
            b[jmbR7Lk1WjoC[i]] = '?';
        for (i = 0; i < n; i = i + 1)
            cout << b[i];
        cout << endl;
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
    return 0;
}

