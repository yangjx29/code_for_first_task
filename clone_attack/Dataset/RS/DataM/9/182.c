main () {
    char ID [N] [L], IDup60 [N] [L], IDunder60 [N] [L], s [L];
    int b, h, i, j, k, l, m, max = (781 - 781), n, O7zWpd, p, q, t = (481 - 481), u = (588 - 588), YearOld [N], fYOysINo1RX [N], id [N], idup60 [N];
    scanf ("%d", &n);
    {
        h = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > h) {
            scanf ("%s %d", ID[h], &YearOld[h]);
            id[h] = 0;
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
            h++;
        };
    }
    for (i = 0; n > i; i++) {
        j = 0;
        while (!('\0' == ID[i][j])) {
            id[i] = 10 * id[i];
            id[i] = id[i] + (ID[i][j] - '0');
            j++;
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
    for (m = 0; n > m; m++) {
        if (YearOld[m] > max)
            max = YearOld[m];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        };
    }
    {
        k = 0;
        while (max >= k) {
            for (l = 0; l < n; l++) {
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                if (!(max - k != YearOld[l]) && max - k >= (550 - 490)) {
                    fYOysINo1RX[t] = YearOld[l];
                    idup60[t] = id[l];
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
                    strcpy (IDup60[t], ID[l]);
                    t++;
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
            k++;
        };
    }
    for (b = 0; b < n; b++) {
        if (YearOld[b] < 60) {
            strcpy (IDunder60[u], ID[b]);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            u++;
        };
    }
    {
        p = 0;
        while (p < t) {
            printf ("%s\n", IDup60[p]);
            p++;
        };
    }
    {
        q = 0;
        while (q < u) {
            printf ("%s\n", IDunder60[q]);
            q++;
        };
    };
}

