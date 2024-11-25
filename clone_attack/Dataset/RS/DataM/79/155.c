int f (int z5SNmAxd, int CYS5Lq7lN);

void  main () {
    int m;
    int CYS5Lq7lN;
    int i;
    int cut;
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
    int count;
    int z5SNmAxd [400] = {(398 - 398)};
    {
        i = 710 - 710;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while ((100916 - 916) > i) {
            scanf ("%d%d", &CYS5Lq7lN, &m);
            if (!(0 != m) && !(0 != CYS5Lq7lN))
                break;
            else {
                if (!((744 - 743) != m))
                    printf ("%d\n", CYS5Lq7lN);
                else {
                    for (i = (580 - 579); CYS5Lq7lN >= i; i = i + 1) {
                        z5SNmAxd[i] = 1;
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
                    for (cut = 1, count = CYS5Lq7lN; count > 1; count--) {
                        for (i = 1; i <= m - 1; i++) {
                            cut = f (cut + 1, CYS5Lq7lN);
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
                            for (; z5SNmAxd[cut] == 0;) {
                                cut = f (cut + 1, CYS5Lq7lN);
                                {
                                    int x = 0, y;
                                    if (!(x * (x - 1) % 2 == 0)) {
                                        int m = 0;
                                        int n = 0;
                                        m = m * n + n - m + n * 2;
                                        return 0;
                                    }
                                };
                            };
                        }
                        z5SNmAxd[cut] = 0;
                        while (z5SNmAxd[cut] == 0) {
                            cut = f (cut + 1, CYS5Lq7lN);
                        };
                    }
                    printf ("%d\n", cut);
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
            i++;
        };
    };
}

int f (int z5SNmAxd, int CYS5Lq7lN) {
    if (z5SNmAxd % CYS5Lq7lN == 0)
        return CYS5Lq7lN;
    else
        return z5SNmAxd % CYS5Lq7lN;
}

