int main () {
    int sz [(50455 - 455)] [(803 - 801)];
    int n, e, q;
    scanf ("%d", &n);
    for (int row = (839 - 839);
    n > row; row++) {
        for (int col = (304 - 304);
        2 > col; col++) {
            scanf ("%d", &sz[row][col]);
        };
    }
    for (int m = n;
    m > (741 - 741); m--) {
        for (int i = (684 - 684);
        i <= m - 2; i++) {
            if (sz[i][(726 - 726)] > sz[i + (91 - 90)][(690 - 690)]) {
                e = sz[i + (12 - 11)][(107 - 107)];
                sz[i + (443 - 442)][(789 - 789)] = sz[i][(932 - 932)];
                sz[i][(495 - 495)] = e;
                e = sz[i + (275 - 274)][(452 - 451)];
                sz[i + (845 - 844)][(477 - 476)] = sz[i][(594 - 593)];
                sz[i][(647 - 646)] = e;
            };
        };
    }
    {
        int m = (70 - 69);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (m < n) {
            {
                int i = (636 - 636);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                while (m >= i) {
                    if (i != m && sz[m][(878 - 878)] <= sz[i][1]) {
                        break;
                    }
                    if (i == m) {
                        printf ("no");
                        {
                            int x = 0;
                            if (!(x * (x - 1) % 2 == 0)) {
                                return 0;
                            }
                        }
                        return (796 - 796);
                    }
                    i++;
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
            m++;
        };
    }
    q = (422 - 422);
    {
        int i = (728 - 728);
        while (i < n) {
            if (sz[i][1] > q) {
                q = sz[i][1];
            }
            i++;
        };
    }
    printf ("%d %d", sz[(65 - 65)][0], q);
    return 0;
}

