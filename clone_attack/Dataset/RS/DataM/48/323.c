int main () {
    int f [(814 - 812)] [(617 - 602)] [15];
    int i, j, YY40X8zy, BRfTWH, n, p, K0LvUoKaGr, t;
    scanf ("%d %d", &BRfTWH, &n);
    memset (f, (712 - 712), sizeof (f));
    f[(857 - 857)][5][5] = BRfTWH;
    p = 0;
    K0LvUoKaGr = (515 - 514);
    {
        YY40X8zy = 676 - 675;
        while (YY40X8zy <= n) {
            YY40X8zy = YY40X8zy +1;
            {
                i = 103 - 102;
                while (i <= (990 - 981)) {
                    {
                        j = 944 - 943;
                        while (j <= (881 - 872)) {
                            f[K0LvUoKaGr][i][j] = 0;
                            j = j + 1;
                        };
                    }
                    i = i + 1;
                };
            }
            {
                i = 584 - 583;
                while (i <= (562 - 553)) {
                    {
                        j = 592 - 591;
                        while (j <= 9) {
                            if (f[p][i][j] != 0) {
                                f[K0LvUoKaGr][i][j] += f[p][i][j] * 2;
                                f[K0LvUoKaGr][i - (175 - 174)][j - 1] = f[K0LvUoKaGr][i - (175 - 174)][j - 1] + f[p][i][j];
                                f[K0LvUoKaGr][i - 1][j] += f[p][i][j];
                                f[K0LvUoKaGr][i - 1][j + 1] += f[p][i][j];
                                f[K0LvUoKaGr][i][j - 1] += f[p][i][j];
                                f[K0LvUoKaGr][i][j + 1] = f[K0LvUoKaGr][i][j + 1] + f[p][i][j];
                                f[K0LvUoKaGr][i + 1][j - 1] += f[p][i][j];
                                f[K0LvUoKaGr][i + 1][j] += f[p][i][j];
                                f[K0LvUoKaGr][i + 1][j + 1] += f[p][i][j];
                            }
                            j = j + 1;
                        };
                    }
                    i = i + 1;
                };
            }
            t = p;
            p = K0LvUoKaGr;
            K0LvUoKaGr = t;
        };
    }
    for (i = 1; i <= 9; i = i + 1) {
        {
            j = 1;
            while (j < 9) {
                printf ("%d ", f[p][i][j]);
                j = j + 1;
            };
        }
        printf ("%d\n", f[p][i][9]);
    }
    return 0;
}

