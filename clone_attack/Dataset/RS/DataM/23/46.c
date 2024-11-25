void  main () {
    char ZQb6UpxO [100], *p, Jkpn4bDzC [100], *pp [100], s [100] [100];
    int i, j, n, axFD0G, TAfFIom, kKMGwH5cSu1D;
    gets (ZQb6UpxO);
    axFD0G = 0;
    j = 0;
    i = 0;
    n = strlen (ZQb6UpxO);
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
    TAfFIom = 1;
    {
        p = ZQb6UpxO;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (p < ZQb6UpxO +n) {
            if (!(' ' != *p))
                kKMGwH5cSu1D = 0;
            else {
                if (kKMGwH5cSu1D == 0) {
                    kKMGwH5cSu1D = 1;
                    TAfFIom = TAfFIom +1;
                };
            }
            p = p + 1;
        };
    }
    p = ZQb6UpxO;
    while (*p != '\0') {
        pp[i] = p;
        while (*p != ' ') {
            *(pp[i] + j) = *p;
            j = j + 1;
            p++;
            if (*p == '\0')
                break;
        }
        *(pp[i] + j) = '\0';
        i++;
        p++;
        j = 0;
    }
    {
        i = TAfFIom -1;
        while (i > 0) {
            printf ("%s ", pp[i]);
            i--;
        };
    }
    printf ("%s", pp[0]);
}

