main () {
    int i;
    int j;
    int k;
    int a [(495 - 395)] [(869 - 769)];
    int b [100] [100];
    int TTz6e34daWO [100] [100];
    int LXgs3Lwklq;
    int a1;
    int uMXpNJ;
    int b1;
    int G7ErZHl4F;
    int c1;
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
    int u3OPp95;
    scanf ("%d %d", &a1, &uMXpNJ);
    a1 = a1 - 1;
    uMXpNJ = uMXpNJ - 1;
    {
        i = 410 - 410;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (a1 >= i) {
            for (j = (270 - 270); j <= uMXpNJ; j = j + 1)
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
            }
            i = i + 1;
        };
    }
    c1 = a1;
    scanf ("%d %d", &b1, &G7ErZHl4F);
    b1 = b1 - 1;
    G7ErZHl4F = G7ErZHl4F -1;
    {
        i = 96 - 96;
        while (i <= b1) {
            for (j = (755 - 755); G7ErZHl4F >= j; j = j + 1)
                scanf ("%d", &b[i][j]);
            i = i + 1;
        };
    }
    u3OPp95 = G7ErZHl4F;
    {
        i = 0;
        while (i <= c1) {
            {
                j = 0;
                while (j <= u3OPp95) {
                    TTz6e34daWO[i][j] = 0;
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i <= c1) {
            for (j = 0; j <= u3OPp95; j++) {
                for (k = 0; k <= uMXpNJ; k++)
                    TTz6e34daWO[i][j] += a[i][k] * b[k][j];
            }
            i++;
        };
    }
    {
        i = 0;
        while (i <= c1) {
            printf ("%d", TTz6e34daWO[i][0]);
            {
                j = 1;
                while (j <= u3OPp95) {
                    printf (" %d", TTz6e34daWO[i][j]);
                    j = j + 1;
                };
            }
            i++;
            printf ("\n");
        };
    };
}

