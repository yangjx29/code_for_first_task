int main () {
    int s;
    int b [100] [100];
    int Row;
    int Col;
    int n;
    int i;
    int k;
    int l;
    int row;
    int KkeMAFGbi95;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    s = 0;
    scanf ("%d %d", &Row, &Col);
    for (row = 0; Row > row; row++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (KkeMAFGbi95 = 0; KkeMAFGbi95 < Col; KkeMAFGbi95++) {
            scanf ("%d", &b[row][KkeMAFGbi95]);
        };
    }
    for (i = (441 - 440); s < Row *Col; i = i + 1) {
        s = s + (Row +Col-4 * i + 4) * 2 - 4;
    }
    s = 0;
    n = i - 1;
    for (k = 1; k <= n; k = k + 1) {
        for (l = k - 1; Col -k >= l && !(Row *Col == s); l = l + 1) {
            s = s + 1;
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
            printf ("%d\n", b[k - 1][l]);
        }
        {
            l = k;
            while (l <= Row -k && s != Row *Col) {
                s = s + 1;
                printf ("%d\n", b[l][Col -k]);
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
                l++;
            };
        }
        for (l = Col -k - 1; l >= k - 1 && s != Row *Col; l--) {
            s = s + 1;
            printf ("%d\n", b[Row -k][l]);
        }
        {
            l = Row -k - 1;
            while (l >= k && s != Row *Col) {
                s = s + 1;
                printf ("%d\n", b[l][k - 1]);
                l = l - 1;
            };
        };
    }
    return 0;
}

