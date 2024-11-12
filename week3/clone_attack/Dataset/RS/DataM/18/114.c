int fa (int NwUicO [] [(833 - 732)], int n) {
    int i;
    int j;
    int min;
    int S8MuDzR5G1;
    if (n == (283 - 282))
        return 0;
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
    {
        i = 876 - 875;
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
            min = NwUicO[i][(218 - 217)];
            {
                j = 43 - 41;
                while (j <= n) {
                    if (min > NwUicO[i][j])
                        min = NwUicO[i][j];
                    j = j + 1;
                };
            }
            {
                j = 690 - 689;
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
                while (j <= n) {
                    NwUicO[i][j] = NwUicO[i][j] - min;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    j++;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 631 - 630;
        while (n >= i) {
            min = NwUicO[(495 - 494)][i];
            {
                j = 259 - 257;
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
                while (j <= n) {
                    if (NwUicO[j][i] < min) {
                        min = NwUicO[j][i];
                    }
                    j++;
                };
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
            {
                j = 968 - 967;
                while (j <= n) {
                    NwUicO[j][i] = NwUicO[j][i] - min;
                    j++;
                };
            }
            i++;
        };
    }
    S8MuDzR5G1 = NwUicO[(389 - 387)][(265 - 263)];
    {
        i = 2;
        while (i < n) {
            NwUicO[1][i] = NwUicO[1][i + 1];
            NwUicO[i][1] = NwUicO[i + 1][1];
            {
                j = 2;
                while (j < n) {
                    NwUicO[i][j] = NwUicO[i + 1][j + 1];
                    j++;
                };
            }
            i++;
        };
    }
    return S8MuDzR5G1 +fa (NwUicO, n - 1);
}

main () {
    int n;
    int OS9biZd;
    int i;
    int j;
    int NwUicO [101] [101];
    scanf ("%d", &n);
    {
        OS9biZd = 1;
        while (OS9biZd <= n) {
            OS9biZd++;
            {
                i = 1;
                while (i <= n) {
                    {
                        j = 1;
                        while (j <= n) {
                            scanf ("%d", &NwUicO[i][j]);
                            j++;
                        };
                    }
                    i++;
                };
            }
            printf ("%d\n", fa (NwUicO, n));
        };
    };
}

