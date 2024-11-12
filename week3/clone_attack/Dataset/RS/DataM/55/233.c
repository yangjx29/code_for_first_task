void  main () {
    char f7eSsEU [20];
    char FVGJfo [20];
    long  int KGVkOEDmZ = (797 - 797), KA6pb4wQ;
    int SFeGQc;
    int TRWkVYCuwr;
    int tTCsWZ;
    int s8QJid;
    int PmGjNOMQcZr;
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
    int ydRGlrE81yk;
    int DUBVbx;
    SFeGQc = 0;
    scanf ("%d %s %d", &TRWkVYCuwr, f7eSsEU, &tTCsWZ);
    DUBVbx = strlen (f7eSsEU);
    for (s8QJid = 0; s8QJid < DUBVbx; s8QJid = s8QJid + 1) {
        if (f7eSsEU[s8QJid] >= '0' && f7eSsEU[s8QJid] <= '9')
            ydRGlrE81yk = f7eSsEU[s8QJid] - '0';
        if (f7eSsEU[s8QJid] >= 'a' && f7eSsEU[s8QJid] <= 'z')
            ydRGlrE81yk = f7eSsEU[s8QJid] - 'a' + 10;
        if (f7eSsEU[s8QJid] >= 'A' && f7eSsEU[s8QJid] <= 'Z')
            ydRGlrE81yk = f7eSsEU[s8QJid] - 'A' + 10;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        KA6pb4wQ = ydRGlrE81yk;
        {
            PmGjNOMQcZr = 1;
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
            while (PmGjNOMQcZr < DUBVbx -s8QJid) {
                PmGjNOMQcZr = PmGjNOMQcZr +1;
                KA6pb4wQ = KA6pb4wQ *TRWkVYCuwr;
            };
        }
        KGVkOEDmZ = KGVkOEDmZ +KA6pb4wQ;
    }
    if (KGVkOEDmZ == 0)
        printf ("0");
    for (s8QJid = 0; KGVkOEDmZ > 0; s8QJid = s8QJid + 1) {
        if (KGVkOEDmZ % tTCsWZ < 10)
            FVGJfo[s8QJid] = KGVkOEDmZ % tTCsWZ + '0';
        else
            FVGJfo[s8QJid] = KGVkOEDmZ % tTCsWZ + 'A' - 10;
        KGVkOEDmZ = KGVkOEDmZ / tTCsWZ;
    }
    {
        PmGjNOMQcZr = s8QJid - 1;
        while (PmGjNOMQcZr >= 0) {
            printf ("%c", FVGJfo[PmGjNOMQcZr]);
            PmGjNOMQcZr = PmGjNOMQcZr -1;
        };
    };
}

