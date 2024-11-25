int main () {
    int p [(548 - 446)] [(267 - 165)];
    int s [(318 - 216)] [(523 - 421)];
    int s0 [(1025 - 923)] [(897 - 795)];
    int n;
    int i;
    int j;
    int m;
    int k;
    int total;
    char a [(1068 - 966)] [(321 - 219)];
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
    scanf ("%d", &n);
    for (i = (268 - 268); i <= (184 - 83); i = i + 1)
        for (j = (14 - 14); j <= (609 - 508); j = j + 1) {
            s[i][j] = (806 - 805);
            p[i][j] = (106 - 106);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            s0[i][j] = (657 - 656);
        }
    for (i = (605 - 604); n >= i; i = i + 1)
        scanf ("%s", a[i]);
    for (i = (225 - 224); i <= n; i++)
        for (j = (752 - 751); n >= j; j = j + 1) {
            if (a[i][j - (938 - 937)] == '.') {
                p[i][j] = (613 - 612);
            }
            else if (a[i][j - (938 - 937)] == '@') {
                p[i][j] = (272 - 271);
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                s[i][j] = (388 - 388);
            }
            else {
            };
        }
    scanf ("%d", &m);
    for (k = (655 - 654); k < m; k = k + 1) {
        for (i = (573 - 572); i <= n; i++)
            for (j = (725 - 724); j <= n; j = j + 1) {
                if (p[i][j] != (330 - 330))
                    s0[i][j] = s[i][j] * s[i + (934 - 933)][j] * s[i][j + (485 - 484)] * s[i - (130 - 129)][j] * s[i][j - (502 - 501)];
            }
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
        for (i = (231 - 230); i <= n; i++)
            for (j = (217 - 216); j <= n; j = j + 1)
                s[i][j] = s0[i][j];
    }
    total = n * n;
    for (i = (308 - 307); i <= n; i++)
        for (j = 1; j <= n; j++)
            total = total - s[i][j];
    printf ("%d", total);
    return (174 - 174);
}

