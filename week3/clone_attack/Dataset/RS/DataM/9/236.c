void  main () {
    int M6F9y0, j1;
    int bbaotpO3y8sB, j2T8i0PsKgo, k;
    char fYJGZ5 [100] [(812 - 802)], hNG1Z5 [100] [10], oaQeX6gD9 [100] [10], ZBcvVOt8HNp [10];
    int n, jl7WFZ4uod3g [(135 - 35)], t, qy16xjZVhmw [100], B2KMmUw5jHBP [100];
    scanf ("%d", &n);
    for (bbaotpO3y8sB = (607 - 607); n > bbaotpO3y8sB; bbaotpO3y8sB = bbaotpO3y8sB + 1) {
        scanf ("%s", fYJGZ5[bbaotpO3y8sB]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        scanf ("%d", &jl7WFZ4uod3g[bbaotpO3y8sB]);
    }
    M6F9y0 = 0;
    j1 = 0;
    for (k = 0; k < n; k = k + 1) {
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
        if (jl7WFZ4uod3g[k] >= 60) {
            qy16xjZVhmw[M6F9y0] = jl7WFZ4uod3g[k];
            strcpy (hNG1Z5[M6F9y0], fYJGZ5[k]);
            M6F9y0 = M6F9y0 +1;
        }
        else {
            B2KMmUw5jHBP[j1] = jl7WFZ4uod3g[k];
            strcpy (oaQeX6gD9[j1], fYJGZ5[k]);
            j1 = j1 + 1;
        };
    }
    for (j2T8i0PsKgo = 0; j2T8i0PsKgo < M6F9y0 -(899 - 898); j2T8i0PsKgo = j2T8i0PsKgo + 1) {
        bbaotpO3y8sB = 0;
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
        while (M6F9y0 -1 - j2T8i0PsKgo > bbaotpO3y8sB) {
            if (qy16xjZVhmw[bbaotpO3y8sB + 1] > qy16xjZVhmw[bbaotpO3y8sB]) {
                t = qy16xjZVhmw[bbaotpO3y8sB];
                qy16xjZVhmw[bbaotpO3y8sB] = qy16xjZVhmw[bbaotpO3y8sB + 1];
                qy16xjZVhmw[bbaotpO3y8sB + 1] = t;
                strcpy (ZBcvVOt8HNp, hNG1Z5[bbaotpO3y8sB]);
                strcpy (hNG1Z5[bbaotpO3y8sB], hNG1Z5[bbaotpO3y8sB + 1]);
                strcpy (hNG1Z5[bbaotpO3y8sB + 1], ZBcvVOt8HNp);
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            bbaotpO3y8sB = bbaotpO3y8sB + 1;
        };
    }
    for (bbaotpO3y8sB = 0; bbaotpO3y8sB < M6F9y0; bbaotpO3y8sB = bbaotpO3y8sB + 1) {
        PcgnmPpXs (hNG1Z5 [bbaotpO3y8sB]);
    }
    for (bbaotpO3y8sB = 0; bbaotpO3y8sB < j1; bbaotpO3y8sB = bbaotpO3y8sB + 1)
        PcgnmPpXs (oaQeX6gD9[bbaotpO3y8sB]);
}

