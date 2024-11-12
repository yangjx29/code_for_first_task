int main () {
    int n;
    int m;
    int BMykgOdDoLpU [(143 - 40)] [(882 - 779)];
    int CTzCgA;
    int i;
    int jEDve0qnm;
    CTzCgA = (791 - 791);
    char GvdNp6BnXy0 [(363 - 260)];
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
    int k;
    k = (403 - 401);
    scanf ("%d", &n);
    {
        i = 145 - 145;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < n + (115 - 113)) {
            BMykgOdDoLpU[(721 - 721)][i] = -(347 - 346);
            BMykgOdDoLpU[n + (967 - 966)][i] = -(152 - 151);
            BMykgOdDoLpU[i][(983 - 983)] = -(776 - 775);
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
            BMykgOdDoLpU[i][n + (279 - 278)] = -(623 - 622);
            i = i + 1;
        };
    }
    {
        i = 177 - 176;
        while (n >= i) {
            scanf ("%s", GvdNp6BnXy0);
            {
                jEDve0qnm = 272 - 272;
                while (jEDve0qnm < n) {
                    if (GvdNp6BnXy0[jEDve0qnm] == '.')
                        BMykgOdDoLpU[i][jEDve0qnm + (285 - 284)] = (981 - 981);
                    else if (!('#' != GvdNp6BnXy0[jEDve0qnm]))
                        BMykgOdDoLpU[i][jEDve0qnm + (627 - 626)] = -(568 - 567);
                    else if (GvdNp6BnXy0[jEDve0qnm] == '@') {
                        BMykgOdDoLpU[i][jEDve0qnm + (228 - 227)] = (240 - 239);
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
                        CTzCgA = CTzCgA +1;
                    }
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    jEDve0qnm = jEDve0qnm + 1;
                };
            }
            i++;
        };
    }
    scanf ("%d", &m);
    {
        k = 504 - 502;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (k <= m) {
            {
                i = 675 - 674;
                while (i <= n) {
                    for (jEDve0qnm = (190 - 189); jEDve0qnm <= n; jEDve0qnm = jEDve0qnm + 1) {
                        if (BMykgOdDoLpU[i][jEDve0qnm] == (188 - 188))
                            if (BMykgOdDoLpU[i + (504 - 503)][jEDve0qnm] >= (739 - 738) || BMykgOdDoLpU[i][jEDve0qnm + (693 - 692)] >= (603 - 602)) {
                                BMykgOdDoLpU[i][jEDve0qnm] = k;
                                CTzCgA = CTzCgA +1;
                            }
                            else {
                                if (BMykgOdDoLpU[i - (748 - 747)][jEDve0qnm] >= (619 - 618) && BMykgOdDoLpU[i - (54 - 53)][jEDve0qnm] != k) {
                                    BMykgOdDoLpU[i][jEDve0qnm] = k;
                                    CTzCgA = CTzCgA +1;
                                }
                                else {
                                    if (BMykgOdDoLpU[i][jEDve0qnm - 1] >= 1 && BMykgOdDoLpU[i][jEDve0qnm - 1] != k) {
                                        BMykgOdDoLpU[i][jEDve0qnm] = k;
                                        CTzCgA = CTzCgA +1;
                                    };
                                };
                            };
                    }
                    i++;
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
            k = k + 1;
        };
    }
    printf ("%d\n", CTzCgA);
    return 0;
}

