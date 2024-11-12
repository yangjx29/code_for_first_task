int main () {
    int n, sz [100000], EbPJBiUd, EQ64Iniav5, j, Gs9NwCpy;
    scanf ("%d", &n);
    {
        EQ64Iniav5 = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > EQ64Iniav5) {
            scanf ("%d", &sz[EQ64Iniav5]);
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
            EQ64Iniav5++;
        };
    }
    Gs9NwCpy = 0;
    scanf ("%d", &EbPJBiUd);
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
        EQ64Iniav5 = 0;
        while (n > EQ64Iniav5) {
            if (!(EbPJBiUd != sz[EQ64Iniav5])) {
                {
                    j = EQ64Iniav5;
                    while (n - 1 > j) {
                        sz[j] = sz[j + 1];
                        j++;
                    };
                }
                n--;
                EQ64Iniav5--;
                Gs9NwCpy++;
            }
            EQ64Iniav5++;
        };
    }
    {
        EQ64Iniav5 = 0;
        while (EQ64Iniav5 < n - 1) {
            printf ("%d ", sz[EQ64Iniav5]);
            EQ64Iniav5++;
        };
    }
    printf ("%d", sz[n - 1]);
    return 0;
}

