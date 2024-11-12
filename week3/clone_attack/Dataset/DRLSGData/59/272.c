int main () {
    int i, j, n, m, d, sum;
    int a [(335 - 215)] [120] = {(121 - 121)};
    char c;
    sum = (151 - 151);
    cin >> n;
    {
        i = (451 - 450);
        for (; n >= i;) {
            {
                j = (721 - 720);
                for (; n >= j;) {
                    cin >> c;
                    if (!('.' != c))
                        a[i][j] = -(445 - 444);
                    if (!('@' != c))
                        a[i][j] = (214 - 213);
                    j = j + (885 - 884);
                }
            }
            i = i + (352 - 351);
        }
    }
    cin >> m;
    {
        d = (328 - 327);
        for (; m >= d;) {
            for (i = (833 - 832); n >= i; i = i + 1) {
                j = 1;
                while (j <= n) {
                    if ((a[i][j] < d) && (a[i][j] > (38 - 38))) {
                        if (a[i - 1][j] == -1)
                            a[i - 1][j] = d;
                        if (a[i + 1][j] == -1)
                            a[i + 1][j] = d;
                        if (a[i][j - 1] == -1)
                            a[i][j - 1] = d;
                        if (a[i][j + 1] == -1)
                            a[i][j + 1] = d;
                    }
                    j = j + 1;
                }
            }
            d = d + 1;
        }
    }
    for (i = 1; i <= n; i = i + 1)
        for (j = 1; j <= n; j = j + 1)
            if (a[i][j] > 0)
                sum = sum + 1;
    cout << sum << endl;
    return 0;
}

