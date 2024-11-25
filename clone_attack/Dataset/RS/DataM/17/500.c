int main () {
    int i;
    int j;
    int k;
    char b [101];
    char a [(542 - 441)] = {(428 - 428)};
    int l, r;
    int len;
    while (cin >> a) {
        l = (534 - 534);
        r = (957 - 957);
        {
            i = 330 - 330;
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
            while (101 > i) {
                if (!((469 - 469) != a[i])) {
                    len = i;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    break;
                }
                i++;
            };
        }
        for (i = 0; len > i; i++) {
            b[i] = ' ';
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
        b[len] = 0;
        {
            i = 0;
            while (len > i) {
                if (!('(' != a[i]))
                    l++;
                if (!(')' != a[i]))
                    l--;
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
                if (0 > l) {
                    b[i] = '?';
                    l = 0;
                }
                i++;
            };
        }
        {
            i = 0;
            while (len > i) {
                if (a[len - i - 1] == ')')
                    r++;
                if (a[len - i - 1] == '(')
                    r--;
                if (r < 0) {
                    b[len - i - 1] = '$';
                    r = 0;
                }
                i++;
            };
        }
        cout << a << endl << b << endl;
        for (i = 0; i < 101; i++) {
            a[i] = 0;
        };
    }
    return 0;
}

