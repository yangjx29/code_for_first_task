main () {
    int kdlULH [(1250 - 950)];
    int lnR4UEiFJ, m8dk2NIDgqST, bAsHYb, OSPby0, GoIPdl;
    scanf ("%d", &lnR4UEiFJ);
    scanf ("%d", &kdlULH[(547 - 547)]);
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
        m8dk2NIDgqST = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (!('\n' == (getchar ()))) {
            scanf (" %d", &GoIPdl);
            kdlULH[m8dk2NIDgqST] = GoIPdl;
            for (bAsHYb = 0; m8dk2NIDgqST > bAsHYb; bAsHYb++) {
                if (kdlULH[m8dk2NIDgqST] == kdlULH[bAsHYb]) {
                    m8dk2NIDgqST--;
                    break;
                };
            }
            m8dk2NIDgqST = m8dk2NIDgqST + 1;
        };
    }
    printf ("%d", kdlULH[0]);
    {
        bAsHYb = 1;
        while (bAsHYb < m8dk2NIDgqST) {
            printf (",%d", kdlULH[bAsHYb]);
            bAsHYb = bAsHYb + 1;
        };
    }
    return 0;
}

