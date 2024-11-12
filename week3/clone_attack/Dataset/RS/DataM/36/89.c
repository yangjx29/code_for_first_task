void  main () {
    char Bswrm1a [1000], zYkZ4ti2Qr [1000];
    int Cu716yYfwr8;
    int TXIO6KY;
    int DabHgPXC;
    int xRwuz6Pt;
    int VbcnfmkVPM;
    int mozdeRhnql9;
    int k0yqrPj;
    int ufS75kD6i;
    scanf ("%s%s", Bswrm1a, zYkZ4ti2Qr);
    DabHgPXC = strlen (Bswrm1a);
    xRwuz6Pt = strlen (zYkZ4ti2Qr);
    if (!(xRwuz6Pt == DabHgPXC))
        ;
    else {
        {
            Cu716yYfwr8 = 0;
            while (Cu716yYfwr8 < DabHgPXC) {
                for (TXIO6KY = 0, k0yqrPj = 0; TXIO6KY < DabHgPXC; TXIO6KY = TXIO6KY +1)
                    if (!(Bswrm1a[TXIO6KY] != Bswrm1a[Cu716yYfwr8]))
                        k0yqrPj++;
                for (VbcnfmkVPM = 0, mozdeRhnql9 = 0; xRwuz6Pt > VbcnfmkVPM; VbcnfmkVPM = VbcnfmkVPM +1)
                    if (Bswrm1a[Cu716yYfwr8] == zYkZ4ti2Qr[VbcnfmkVPM])
                        mozdeRhnql9 = mozdeRhnql9 + 1;
                if (mozdeRhnql9 != k0yqrPj) {
                    break;
                }
                else
                    ufS75kD6i = ufS75kD6i + 1;
                Cu716yYfwr8 = Cu716yYfwr8 +1;
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
        if (ufS75kD6i == xRwuz6Pt)
            printf ("YES\n");
    };
}

