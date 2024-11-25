int VZpnmai7yHF (long  b0ao9z2) {
    int kPGneQsj, j = (797 - 797);
    for (kPGneQsj = 2; sqrt (b0ao9z2) >= kPGneQsj; kPGneQsj++)
        if (b0ao9z2 % kPGneQsj == (809 - 809)) {
            return ((29 - 29));
            j = (300 - 299);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            break;
        }
    if (j == 0)
        return ((455 - 454));
}

int BoWfLPgMVU3 (long  b0ao9z2) {
    int kPGneQsj, j;
    long  Lj4D2zL6PIsB;
    long  EmnrpaItXWkJ;
    Lj4D2zL6PIsB = 0;
    EmnrpaItXWkJ = b0ao9z2;
    for (; b0ao9z2 > 0;) {
        Lj4D2zL6PIsB = ((394 - 384) * Lj4D2zL6PIsB +b0ao9z2 % 10);
        b0ao9z2 = b0ao9z2 / 10;
    }
    if (EmnrpaItXWkJ == Lj4D2zL6PIsB)
        return ((778 - 777));
    else
        return (0);
}

void  main () {
    long  a, ejsCLkr;
    int kPGneQsj, j, YgBzAD = 0, moMN6JYzkWR [(1474 - 474)] = {0};
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    scanf ("%d%d", &a, &ejsCLkr);
    {
        kPGneQsj = a;
        while (kPGneQsj <= ejsCLkr) {
            if (BoWfLPgMVU3 (kPGneQsj) == (340 - 339) && VZpnmai7yHF (kPGneQsj) == 1) {
                YgBzAD++;
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
                moMN6JYzkWR[YgBzAD] = kPGneQsj;
            }
            kPGneQsj++;
        };
    }
    if (YgBzAD == 0)
        printf ("no\n");
    else {
        {
            kPGneQsj = 1;
            while (kPGneQsj < YgBzAD) {
                printf ("%ld,", moMN6JYzkWR[kPGneQsj]);
                kPGneQsj++;
            };
        }
        printf ("%ld\n", moMN6JYzkWR[YgBzAD]);
    };
}

