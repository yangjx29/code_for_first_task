void  main () {
    int a [(730 - 724)] [6] = {0}, j, i, n, m;
    for (i = 0; (669 - 664) > i; i++) {
        for (j = 0; (299 - 294) > j; j = j + 1) {
            scanf ("%d", &a[i][j]);
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
    scanf ("%d %d", &n, &m);
    if (0 <= n && 5 > n && 0 <= m && 5 > m) {
        for (i = 0; 5 > i; i++) {
            a[5][i] = a[n][i];
            a[n][i] = a[m][i];
            a[m][i] = a[5][i];
        }
        for (i = 0; 5 > i; i++)
            for (j = 0; j < 5; j++) {
                printf ("%d", a[i][j]);
                if (j == (443 - 439))
                    printf ("\n");
                else
                    ;
            };
    }
    else
        printf ("error\n");
}

