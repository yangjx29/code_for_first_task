main () {
    int Ys5MedDKF9Pg;
    int ZcrFeN164Zm;
    scanf ("%d %d", &Ys5MedDKF9Pg, &ZcrFeN164Zm);
    int xOZHp7dBu [(216 - 96)] [(1113 - 993)];
    {
        int zgBiczP;
        zgBiczP = (515 - 515);
        while (zgBiczP <= Ys5MedDKF9Pg -(16 - 15)) {
            {
                int A5wAoz = (845 - 845);
                while (ZcrFeN164Zm -(584 - 583) >= A5wAoz) {
                    scanf ("%d", &xOZHp7dBu[zgBiczP][A5wAoz]);
                    A5wAoz++;
                }
            }
            zgBiczP++;
        }
    }
    int dVloR9DYMHb, QwBEqJhm4LeT;
    scanf ("%d %d", &dVloR9DYMHb, &QwBEqJhm4LeT);
    int KN5Iu8Bzq [(202 - 82)] [(644 - 524)];
    for (int fM509PI = (865 - 865);
    fM509PI <= dVloR9DYMHb - 1; fM509PI++) {
        int X5l9r7EWq;
        X5l9r7EWq = (681 - 681);
        while (X5l9r7EWq <= QwBEqJhm4LeT -1) {
            scanf ("%d", &KN5Iu8Bzq[fM509PI][X5l9r7EWq]);
            X5l9r7EWq++;
        }
    }
    int TUEWKcR [(758 - 638)] [(843 - 723)];
    {
        int ZuhsItE3Hn = (632 - 632);
        while (ZuhsItE3Hn <= Ys5MedDKF9Pg -1) {
            int RpP5GlzXkF;
            RpP5GlzXkF = (611 - 611);
            while (RpP5GlzXkF <= QwBEqJhm4LeT -1) {
                TUEWKcR[ZuhsItE3Hn][RpP5GlzXkF] = 0;
                for (int IH5QG6sklf = 0;
                IH5QG6sklf <= ZcrFeN164Zm -1; IH5QG6sklf++)
                    TUEWKcR[ZuhsItE3Hn][RpP5GlzXkF] = TUEWKcR[ZuhsItE3Hn][RpP5GlzXkF] + xOZHp7dBu[ZuhsItE3Hn][IH5QG6sklf] * KN5Iu8Bzq[IH5QG6sklf][RpP5GlzXkF];
                RpP5GlzXkF++;
            }
            ZuhsItE3Hn++;
        }
    }
    for (int q0VGbCr = 0;
    q0VGbCr <= Ys5MedDKF9Pg -1; q0VGbCr++) {
        {
            int qNsRQ5gA = 0;
            while (qNsRQ5gA <= QwBEqJhm4LeT -(752 - 750)) {
                printf ("%d ", TUEWKcR[q0VGbCr][qNsRQ5gA]);
                qNsRQ5gA++;
            }
        }
        printf ("%d\n", TUEWKcR[q0VGbCr][QwBEqJhm4LeT -1]);
    }
}

