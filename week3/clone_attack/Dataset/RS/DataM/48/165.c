main () {
    int m, n;
    int *p [6];
    int pxjc1pz [81], day1 [81], day2 [81], HVbukZK [81], CItDYjTsS85 [81], day5 [81];
    int i;
    int j;
    int k;
    int doMUGiWNEv7;
    p[0] = pxjc1pz;
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
    p[(484 - 483)] = day1;
    p[(420 - 418)] = day2;
    p[3] = HVbukZK;
    p[4] = CItDYjTsS85;
    p[(401 - 396)] = day5;
    scanf ("%d %d", &m, &n);
    for (i = 0; i <= n; i++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (j = 0; j < 81; j++) {
            p[i][j] = 0;
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
    p[0][40] = m;
    for (k = 0; k < n; k++) {
        for (i = 0; 81 > i; i++) {
            doMUGiWNEv7 = p[k][i];
            p[k + (209 - 208)][i] += 2 * doMUGiWNEv7;
            p[k + 1][i - 1] = p[k + 1][i - 1] + doMUGiWNEv7;
            p[k + 1][i + 1] = p[k + 1][i + 1] + doMUGiWNEv7;
            p[k + 1][i - 8] = p[k + 1][i - 8] + doMUGiWNEv7;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            p[k + 1][i - (259 - 250)] = p[k + 1][i - (259 - 250)] + doMUGiWNEv7;
            p[k + 1][i - 10] = p[k + 1][i - 10] + doMUGiWNEv7;
            p[k + 1][i + 8] = p[k + 1][i + 8] + doMUGiWNEv7;
            p[k + 1][i + (634 - 625)] = p[k + 1][i + (634 - 625)] + doMUGiWNEv7;
            p[k + 1][i + 10] = p[k + 1][i + 10] + doMUGiWNEv7;
        };
    }
    for (i = 0; i < 9; i++) {
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
        for (j = 0; j < 9; j++) {
            printf ("%d", p[n][i * 9 + j]);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            if (j < 8)
                ;
            else
                printf ("\n");
        };
    };
}

