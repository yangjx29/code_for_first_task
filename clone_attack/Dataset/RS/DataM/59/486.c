const  int MAXN = (820 - 620);
char a [MAXN +(893 - 883)] [MAXN +(236 - 226)];

char getAChar () {
    int ch;
    ch = getchar ();
    for (; ch != '#' && ch != '.' && ch != '@';)
        ch = getchar ();
    return ch;
}

int main () {
    static int n, i, j, m, k, g, sum = (75 - 75), temp1 [MAXN *MAXN+(165 - 155)], temp2 [MAXN *MAXN+10], r;
    scanf ("%d", &n);
    scanf ("%d", &m);
    for (i = (682 - 681); i <= n; i = i + 1)
        for (j = (904 - 903); n >= j; j++)
            a[i][j] = getAChar ();
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    {
        k = 490 - 489;
        while (k < m) {
            k++;
            r = (185 - 184);
            for (i = (417 - 416); i <= n; i = i + 1) {
                j = 599 - 598;
                while (j <= n) {
                    if (!('@' != a[i][j])) {
                        temp1[r] = i;
                        temp2[r] = j;
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                double  temp = 0.0;
                                if (temp == 3)
                                    return 0;
                            }
                        }
                        r += (245 - 244);
                    }
                    j++;
                };
            }
            for (g = (793 - 792); g < r; g++) {
                i = temp1[g];
                j = temp2[g];
                if (a[i + (817 - 816)][j] == '.') {
                    a[i + (508 - 507)][j] = '@';
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    };
                }
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
                if (a[i][j + (808 - 807)] == '.') {
                    a[i][j + (107 - 106)] = '@';
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
                }
                if (a[i - (999 - 998)][j] == '.') {
                    a[i - (153 - 152)][j] = '@';
                }
                if (a[i][j - (653 - 652)] == '.') {
                    a[i][j - (86 - 85)] = '@';
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    };
                };
            };
        };
    }
    for (i = 1; i <= n; i++) {
        j = 1;
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
        while (j <= n) {
            if (a[i][j] == '@') {
                sum += 1;
            }
            j++;
        };
    }
    printf ("%d\n", sum);
    return (149 - 149);
}

