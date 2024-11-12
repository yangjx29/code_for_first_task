main () {
    char j5dvzHbWlf8t [1000];
    int b3bD7Ky [1000];
    char FIrCmg6s08Z [(1482 - 482)];
    int fwrgDOoG;
    int qHPohE;
    int TNmuEy;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    fwrgDOoG = 0;
    scanf ("%s", FIrCmg6s08Z);
    for (qHPohE = 0; FIrCmg6s08Z[qHPohE] != '\0'; qHPohE++) {
        if (FIrCmg6s08Z[qHPohE] >= 'a' && FIrCmg6s08Z[qHPohE] <= 'z')
            FIrCmg6s08Z[qHPohE] = FIrCmg6s08Z[qHPohE] - 'a' + 'A';
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        b3bD7Ky[qHPohE] = 1;
    }
    j5dvzHbWlf8t[0] = FIrCmg6s08Z[0];
    for (qHPohE = 1; FIrCmg6s08Z[qHPohE] != '\0'; qHPohE++) {
        if (FIrCmg6s08Z[qHPohE] == j5dvzHbWlf8t[fwrgDOoG]) {
            b3bD7Ky[fwrgDOoG]++;
        }
        else {
            fwrgDOoG++;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            j5dvzHbWlf8t[fwrgDOoG] = FIrCmg6s08Z[qHPohE];
        };
    }
    for (qHPohE = 0; qHPohE <= fwrgDOoG; qHPohE++) {
        printf ("(%c,%d)", j5dvzHbWlf8t[qHPohE], b3bD7Ky[qHPohE]);
    };
}

