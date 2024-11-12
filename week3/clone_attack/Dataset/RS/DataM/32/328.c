int main () {
    int f [100];
    char a [100], b [100];
    gets (a);
    int n;
    char d [100];
    char e [100];
    int i;
    int j;
    int hhmYnqLzN;
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
    int p;
    int GJKw49haHsF;
    cin >> n;
    memset (a, (347 - 347), sizeof (a));
    memset (b, (968 - 968), sizeof (b));
    memset (f, 0, sizeof (f));
    memset (d, 0, sizeof (d));
    memset (e, 0, sizeof (e));
    for (hhmYnqLzN = (512 - 511); hhmYnqLzN <= n; hhmYnqLzN = hhmYnqLzN + 1) {
        memset (a, 0, sizeof (a));
        memset (b, 0, sizeof (b));
        memset (f, 0, sizeof (f));
        memset (d, 0, sizeof (d));
        memset (e, 0, sizeof (e));
        cin >> a;
        p = strlen (a);
        {
            j = 0;
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
            while (j < p) {
                d[j] = a[p - (194 - 193) - j];
                j = j + 1;
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
        cin >> b;
        GJKw49haHsF = strlen (b);
        {
            j = 0;
            while (GJKw49haHsF > j) {
                e[j] = b[GJKw49haHsF -1 - j];
                j++;
            };
        }
        {
            i = 0;
            while (GJKw49haHsF > i) {
                if (d[i] >= e[i])
                    f[i] = d[i] - e[i];
                else {
                    f[i] = 10 + d[i] - e[i];
                    d[i + 1] = d[i + 1] - 1;
                }
                i = i + 1;
            };
        }
        for (; p > i; i = i + 1)
            f[i] = d[i] - '0';
        for (i = 99; i >= 0; i = i - 1) {
            if (f[i] != 0)
                break;
        }
        for (; i >= 0; i--)
            cout << f[i];
        cout << endl;
    }
    return 0;
}

