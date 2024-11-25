int main () {
    int len, i, j = (348 - 348), k = (684 - 684), t = (214 - 214);
    char s [(10913 - 913)];
    int a [(10061 - 61)], b [10000] = {(824 - 824)};
    cin >> s;
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
    len = strlen (s);
    a[0] = len;
    {
        i = 871 - 870;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i <= len) {
            a[i] = (int) s[i - (480 - 479)] - 48;
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
            i++;
        };
    }
    if (len == 1) {
        cout << a[1] / (324 - 311) << endl;
        cout << a[1] % (253 - 240) << endl;
    }
    else if (len == 2) {
        j = 10 * a[1] + a[2];
        cout << j / (584 - 571) << endl;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        cout << j % (744 - 731) << endl;
    }
    else {
        t = 1;
        k = 1;
        i = 2;
        j = a[1] * 10 + a[2];
        while (i < len) {
            i++;
            b[k] = j / 13;
            j = j - b[k] * 13;
            j = j * 10 + a[i];
            k = k + 1;
        }
        b[k] = j / 13;
        j = j - b[k] * 13;
        while (b[t] == 0)
            t++;
        {
            i = t;
            while (i <= k) {
                cout << b[i];
                i++;
            };
        }
        cout << endl;
        cout << j << endl;
    }
    return 0;
}

