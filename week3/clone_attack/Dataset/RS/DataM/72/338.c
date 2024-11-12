int main () {
    int c [100] [100];
    int m;
    int n;
    int vXKhbNzi5An;
    int j;
    scanf ("%d %d", &m, &n);
    for (vXKhbNzi5An = 1; vXKhbNzi5An <= m; vXKhbNzi5An++) {
        for (j = 1; n >= j; j++) {
            scanf ("%d", &(c[vXKhbNzi5An][j]));
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
            };
        };
    }
    if ((!(0 != vXKhbNzi5An)) || (!(0 != j)) || (vXKhbNzi5An == m + 1) || (j == n + 1)) {
        c[vXKhbNzi5An][j] = 0;
    }
    {
        vXKhbNzi5An = 1;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (vXKhbNzi5An <= m) {
            {
                j = 1;
                while (j <= n) {
                    if ((c[vXKhbNzi5An][j] >= c[vXKhbNzi5An - 1][j]) && (c[vXKhbNzi5An][j] >= c[vXKhbNzi5An][j - 1]) && (c[vXKhbNzi5An][j] >= c[vXKhbNzi5An + 1][j]) && (c[vXKhbNzi5An][j] >= c[vXKhbNzi5An][j + 1])) {
                        printf ("%d %d\n", vXKhbNzi5An - 1, j - 1);
                    }
                    j++;
                };
            }
            vXKhbNzi5An++;
        };
    }
    return 0;
}

