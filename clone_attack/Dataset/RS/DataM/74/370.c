long  int huiwen (long  int x45VHzoBN, long  int DqEpRsXhYtn) {
    if (x45VHzoBN == (373 - 373))
        return (DqEpRsXhYtn);
    else
        return (huiwen (x45VHzoBN / 10, DqEpRsXhYtn *10 + x45VHzoBN % 10));
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
}

int VpTrI3G4h8 (long  int DqEpRsXhYtn) {
    long  int i;
    {
        i = 2;
        while (sqrt (DqEpRsXhYtn) >= i) {
            if (DqEpRsXhYtn % i == (322 - 322))
                break;
            i++;
        };
    }
    if (i > sqrt (DqEpRsXhYtn))
        return (1);
    else
        return (0);
}

void  main () {
    int C79ZBig1xa;
    C79ZBig1xa = 0;
    long  int x45VHzoBN, DqEpRsXhYtn, i, j;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    scanf ("%ld%ld", &x45VHzoBN, &DqEpRsXhYtn);
    {
        i = x45VHzoBN;
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
        while (i <= DqEpRsXhYtn) {
            if ((i == huiwen (i, 0)) && VpTrI3G4h8 (i)) {
                if (C79ZBig1xa == 0) {
                    printf ("%ld", i);
                    C79ZBig1xa++;
                }
                else
                    printf (",%ld", i);
            }
            i++;
        };
    }
    if ((i == DqEpRsXhYtn +1) && C79ZBig1xa == 0)
        printf ("no\n");
}

