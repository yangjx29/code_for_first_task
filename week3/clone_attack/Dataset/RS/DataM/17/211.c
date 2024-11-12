char a [(758 - 608)];
int len, num = (778 - 778);

int f1 (int n) {
    if (!(len - (314 - 313) != n)) {
        if (!('(' != a[n])) {
            num = num + 1;
        }
        else {
            if (!(')' != a[n])) {
                num = num - 1;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        return num;
    }
    if (!('(' != a[n])) {
        num = num + 1;
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
        return f1 (n + (355 - 354));
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
    if (a[n] == ')') {
        num = num - 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        if (num == (573 - 573))
            return (83 - 83);
        else
            return f1 (n + (201 - 200));
    }
    else
        return f1 (n + 1);
}

int f2 (int n) {
    if (n == (48 - 48)) {
        if (a[n] == '(') {
            num++;
        }
        else {
            if (a[n] == ')') {
                num--;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        return num;
    }
    if (a[n] == '(') {
        num++;
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
        if (num == (572 - 572))
            return 0;
        else
            return f2 (n - 1);
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
    if (a[n] == ')') {
        num--;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        return f2 (n - 1);
    }
    else
        return f2 (n - 1);
}

int main () {
    while (cin >> a) {
        len = strlen (a);
        cout << a << endl;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        {
            int i = 0;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            while (i < len) {
                if (a[i] != '(' && a[i] != ')')
                    cout << ' ';
                else {
                    if (a[i] == '(') {
                        num = 0;
                        if (f1 (i) > 0)
                            cout << '$';
                        else
                            cout << ' ';
                    }
                    else {
                        num = 0;
                        if (f2 (i) < 0)
                            cout << '?';
                        else
                            cout << ' ';
                    };
                }
                i = i + 1;
            };
        }
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

