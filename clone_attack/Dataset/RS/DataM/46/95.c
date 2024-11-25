int o3Dxvkg9 (int x, int y) {
    int z;
    if (y > x)
        z = x;
    else
        z = y;
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
    return (z);
}

void  main () {
    int f [(958 - 858)] [100];
    int vKXUTx13, i, j, k, l, a, b, temp, flag1, EFfGoigO;
    scanf ("%d%d", &a, &b);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    {
        i = 40 - 40;
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
        while (a > i) {
            for (j = 0; j < b; j = j + 1) {
                scanf ("%d", &f[i][j]);
            }
            i = i + 1;
        };
    }
    temp = o3Dxvkg9 (a, b);
    for (i = 0; ((a - (637 - 635) * i) > 0 && 0 < (b - 2 * i)); i = i + 1) {
        flag1 = 0;
        if (!((254 - 253) != (a - 2 * i)))
            flag1 = (467 - 466);
        EFfGoigO = 0;
        if (!((778 - 777) != (b - 2 * i)))
            EFfGoigO = 1;
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
        {
            j = i;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            while (j < b - i) {
                printf ("%d\n", f[i][j]);
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
                j = j + 1;
            };
        }
        for (j = i + 1; a - i - 1 > j; j = j + 1) {
            printf ("%d\n", f[j][b - 1 - i]);
        }
        for (j = b - 1 - i; j > i - 1; j = j - 1) {
            if (flag1 == 1)
                break;
            printf ("%d\n", f[a - 1 - i][j]);
        }
        for (j = a - 2 - i; j > i; j = j - 1) {
            if (EFfGoigO == 1)
                break;
            printf ("%d\n", f[j][i]);
        };
    };
}

