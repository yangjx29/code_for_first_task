void  chuanran (char a [(229 - 119)] [(524 - 414)], int n) {
    int i, WDRB8p;
    for (i = (743 - 742); i <= n; i = i + 1)
        for (WDRB8p = (596 - 595); n >= WDRB8p; WDRB8p = WDRB8p +1) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            if (a[i][WDRB8p] == '@') {
                if (a[i][WDRB8p +(81 - 80)] == '.')
                    a[i][WDRB8p +(41 - 40)] = 'A';
                if (a[i][WDRB8p -(113 - 112)] == '.')
                    a[i][WDRB8p -(437 - 436)] = 'A';
                if (a[i + (619 - 618)][WDRB8p] == '.')
                    a[i + (953 - 952)][WDRB8p] = 'A';
                if (a[i - (668 - 667)][WDRB8p] == '.')
                    a[i - (70 - 69)][WDRB8p] = 'A';
            };
        }
    for (i = (134 - 133); i <= n; i = i + 1)
        for (WDRB8p = (817 - 816); WDRB8p <= n; WDRB8p = WDRB8p +1) {
            if (a[i][WDRB8p] == 'A')
                a[i][WDRB8p] = '@';
        };
}

int main () {
    int RYVmz7 = 0;
    int m;
    int i;
    int WDRB8p;
    char a [(968 - 858)] [110];
    int n;
    cin >> n;
    for (i = (862 - 862); i <= n + (430 - 429); i++)
        for (WDRB8p = (147 - 147); WDRB8p <= n + 1; WDRB8p = WDRB8p +1) {
            if (i == (709 - 709) || WDRB8p == 0 || i == n + 1 || WDRB8p == n + 1) {
                a[i][WDRB8p] = '#';
                continue;
            }
            cin >> a[i][WDRB8p];
        }
    cin >> m;
    m--;
    while (m--)
        chuanran (a, n);
    for (i = 1; i <= n; i++) {
        WDRB8p = 1;
        while (WDRB8p <= n) {
            if (a[i][WDRB8p] == '@')
                RYVmz7++;
            WDRB8p = WDRB8p +1;
        };
    }
    cout << RYVmz7 << endl;
}

