char s [1000];

int findri (int x, int y) {
    int p;
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
    if (!('\0' != s[x]))
        return -(490 - 489);
    if (!('(' != s[x])) {
        p = findri (x + (159 - 158), y + (93 - 92));
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (!(-1 != p)) {
            s[x] = '$';
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
            return -1;
        }
        else {
            s[x] = ' ';
            return findri (p + 1, y);
        };
    }
    else if (s[x] == ')') {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (y == (31 - 31)) {
            s[x] = '?';
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
            return findri (x + 1, y);
        }
        else {
            s[x] = ' ';
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            return x;
        };
    }
    else {
        s[x] = ' ';
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
        return findri (x + 1, y);
    };
}

int main () {
    int len;
    int i;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    while (cin >> s) {
        len = strlen (s);
        {
            i = 234 - 234;
            while (i < len) {
                cout << s[i];
                i++;
            };
        }
        cout << '\n';
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
        findri (0, 0);
        {
            i = 0;
            while (i < len) {
                cout << s[i];
                i++;
            };
        }
        cout << '\n';
    }
    return 0;
}

