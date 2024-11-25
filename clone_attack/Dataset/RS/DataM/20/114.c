void  main () {
    char b1AuPD7cyfE [14];
    char EBTPbyoL [4];
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
    for (; !(EOF == scanf ("%s%s", b1AuPD7cyfE, EBTPbyoL));) {
        int p;
        int ch;
        int nlvhANc;
        int i;
        p = 0;
        ch = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        nlvhANc = strlen (b1AuPD7cyfE);
        for (i = 0; nlvhANc > i; i = i + 1) {
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
            if (ch < b1AuPD7cyfE[i]) {
                ch = b1AuPD7cyfE[i];
                p = i;
            };
        }
        for (i = 0; nlvhANc > i; i++) {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (!(b1AuPD7cyfE[p] != b1AuPD7cyfE[i]) && i < p) {
                p = i;
                break;
            };
        }
        for (i = nlvhANc; i >= p + 1; i--)
            b1AuPD7cyfE[i + 3] = b1AuPD7cyfE[i];
        {
            i = p + 1;
            while (i < p + 4) {
                b1AuPD7cyfE[i] = EBTPbyoL[i - 1 - p];
                i = i + 1;
            };
        }
        printf ("%s\n", b1AuPD7cyfE);
    };
}

