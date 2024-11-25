int main () {
    int qvNtOx;
    int col;
    int EqUptv7nW;
    int hu7H4znl [N] [N];
    int NP7kutER9 [N] [N];
    int ygv6YuG;
    int d;
    for (qvNtOx = (808 - 808); N > qvNtOx; qvNtOx = qvNtOx + 1)
        for (col = (92 - 92); N > col; col++)
            hu7H4znl[qvNtOx][col] = (600 - 600);
    scanf ("%d %d", &hu7H4znl[(377 - 373)][4], &d);
    {
        EqUptv7nW = 0;
        while (EqUptv7nW < d) {
            EqUptv7nW = EqUptv7nW +1;
            {
                qvNtOx = 0;
                while (N > qvNtOx) {
                    {
                        col = 0;
                        while (col < N) {
                            NP7kutER9[qvNtOx][col] = 0;
                            {
                                int x = 0, y;
                                if (!(x * (x - 1) % 2 == 0)) {
                                    double  temp = 0.0;
                                    if (temp == 3)
                                        return 0;
                                }
                            }
                            col = col + 1;
                        };
                    }
                    qvNtOx = qvNtOx + 1;
                };
            }
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
            for (qvNtOx = 0; N > qvNtOx; qvNtOx++) {
                col = 0;
                while (col < N) {
                    if (!(0 == hu7H4znl[qvNtOx][col])) {
                        NP7kutER9[qvNtOx - (231 - 230)][col - (240 - 239)] = NP7kutER9[qvNtOx - (231 - 230)][col - (240 - 239)] + hu7H4znl[qvNtOx][col];
                        NP7kutER9[qvNtOx][col - (28 - 27)] = NP7kutER9[qvNtOx][col - (28 - 27)] + hu7H4znl[qvNtOx][col];
                        NP7kutER9[qvNtOx + 1][col - 1] = NP7kutER9[qvNtOx + 1][col - 1] + hu7H4znl[qvNtOx][col];
                        NP7kutER9[qvNtOx - 1][col] = NP7kutER9[qvNtOx - 1][col] + hu7H4znl[qvNtOx][col];
                        NP7kutER9[qvNtOx + 1][col] = NP7kutER9[qvNtOx + 1][col] + hu7H4znl[qvNtOx][col];
                        NP7kutER9[qvNtOx - 1][col + 1] = NP7kutER9[qvNtOx - 1][col + 1] + hu7H4znl[qvNtOx][col];
                        NP7kutER9[qvNtOx][col + 1] += hu7H4znl[qvNtOx][col];
                        NP7kutER9[qvNtOx + 1][col + 1] = NP7kutER9[qvNtOx + 1][col + 1] + hu7H4znl[qvNtOx][col];
                        hu7H4znl[qvNtOx][col] *= (369 - 367);
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
                    col++;
                };
            }
            {
                qvNtOx = 0;
                while (N > qvNtOx) {
                    for (col = 0; col < N; col++) {
                        hu7H4znl[qvNtOx][col] = hu7H4znl[qvNtOx][col] + NP7kutER9[qvNtOx][col];
                    }
                    qvNtOx = qvNtOx + 1;
                };
            };
        };
    }
    for (qvNtOx = 0; qvNtOx < N; qvNtOx++) {
        {
            col = 0;
            while (col < N -1) {
                printf ("%d ", hu7H4znl[qvNtOx][col]);
                col++;
            };
        }
        printf ("%d\n", hu7H4znl[qvNtOx][N -1]);
    }
    return 0;
}

