int main () {
    int b [101];
    char a [(766 - 665)];
    int n, i, j;
    memset (a, '0', sizeof (a));
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
    memset (b, (11 - 11), sizeof (b));
    cin >> n;
    if (n == (95 - 95))
        a[100] = '1';
    else {
        a[100] = '1';
        {
            i = 550 - 549;
            while (i <= n) {
                i = i + 1;
                for (j = 100; 0 <= j; j = j - 1) {
                    a[j] = (a[j] - '0') * 2 + '0' + b[j];
                    if ((a[j] - '0') >= 10) {
                        a[j] = a[j] - 10;
                        b[j - 1] = 1;
                    };
                }
                memset (b, 0, sizeof (b));
            };
        };
    }
    for (i = 0; i <= 100; i = i + 1) {
        if (a[i] != '0') {
            {
                j = i;
                while (j <= 100) {
                    cout << a[j];
                    j = j + 1;
                };
            }
            cout << endl;
            break;
        };
    }
    return 0;
}

