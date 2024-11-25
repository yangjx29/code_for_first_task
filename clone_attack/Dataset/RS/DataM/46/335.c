void  main () {
    int BorRF7sp9 [100] [100];
    int hhHvEdoM9BPk;
    int MctPXZzpx;
    int kzaWDpse, JNTK5M1DaWFt, n, Ppnec1rhX2 = 0, AlIMnjeSxb, hfLubovAMaid, pnzbih8u2, vn8pqkvAW;
    scanf ("%d%d", &hhHvEdoM9BPk, &MctPXZzpx);
    {
        kzaWDpse = 0;
        while (hhHvEdoM9BPk > kzaWDpse) {
            {
                JNTK5M1DaWFt = 0;
                while (MctPXZzpx > JNTK5M1DaWFt) {
                    scanf ("%d", &BorRF7sp9[kzaWDpse][JNTK5M1DaWFt]);
                    JNTK5M1DaWFt = JNTK5M1DaWFt +1;
                };
            }
            kzaWDpse = kzaWDpse + 1;
        };
    }
    {
        n = 0;
        while (1) {
            {
                AlIMnjeSxb = n;
                while (MctPXZzpx -n > AlIMnjeSxb) {
                    Ppnec1rhX2 = Ppnec1rhX2 +1;
                    printf ("%d\n", BorRF7sp9[n][AlIMnjeSxb]);
                    AlIMnjeSxb = AlIMnjeSxb +1;
                };
            }
            if (!(hhHvEdoM9BPk * MctPXZzpx != Ppnec1rhX2))
                break;
            {
                hfLubovAMaid = n + 1;
                while (hhHvEdoM9BPk - n > hfLubovAMaid) {
                    printf ("%d\n", BorRF7sp9[hfLubovAMaid][MctPXZzpx -n - 1]);
                    Ppnec1rhX2 = Ppnec1rhX2 +1;
                    hfLubovAMaid = hfLubovAMaid + 1;
                };
            }
            if (!(hhHvEdoM9BPk * MctPXZzpx != Ppnec1rhX2))
                break;
            {
                pnzbih8u2 = 295 - 293;
                while (n <= pnzbih8u2) {
                    printf ("%d\n", BorRF7sp9[hhHvEdoM9BPk - n - 1][pnzbih8u2]);
                    pnzbih8u2 = pnzbih8u2 - 1;
                    Ppnec1rhX2 = Ppnec1rhX2 +1;
                };
            }
            if (Ppnec1rhX2 == hhHvEdoM9BPk * MctPXZzpx)
                break;
            for (vn8pqkvAW = hhHvEdoM9BPk - 2 - n; vn8pqkvAW > n; vn8pqkvAW--) {
                Ppnec1rhX2 = Ppnec1rhX2 +1;
                printf ("%d\n", BorRF7sp9[vn8pqkvAW][n]);
            }
            if (Ppnec1rhX2 == hhHvEdoM9BPk * MctPXZzpx)
                break;
            n = n + 1;
        };
    };
}

