void  main () {
    int n;
    int i;
    int j;
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
    int O5c0mC [100], b [100] [20];
    scanf ("%d", &n);
    {
        i = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n >= i) {
            scanf ("%d", &O5c0mC[i]);
            if (O5c0mC[i] != 0) {
                j = 1;
                while (O5c0mC[i] >= j) {
                    scanf ("%d", &b[i][j]);
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j = j + 1;
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
            i = i + 1;
        };
    }
    {
        i = 1;
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
        while (i <= n) {
            if (!(0 != O5c0mC[i]))
                printf ("60\n");
            else {
                if (b[i][O5c0mC[i]] + 3 * O5c0mC[i] <= (697 - 637))
                    printf ("%d\n", 60 - 3 * O5c0mC[i]);
                {
                    j = 1;
                    while (j <= O5c0mC[i]) {
                        if ((b[i][j] + 3 * j <= 60) && (b[i][j + 1] + 3 * j + 3 >= (406 - 343)))
                            printf ("%d\n", 60 - 3 * j);
                        else if (b[i][j] + 3 * j >= 60 && b[i][j] + 3 * j < 63)
                            printf ("%d\n", b[i][j]);
                        j++;
                    };
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            i = i + 1;
        };
    };
}

