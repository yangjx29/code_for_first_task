main () {
    int dEyx0pPqW4, m, i, OgV3jzM5, x1, jla1hd3IKU, ij1IR7H, bgZDhMV;
    int IEjxuJeZ8 [x1] [jla1hd3IKU];
    int YolQGI8Fd [ij1IR7H] [bgZDhMV];
    int VZEL3FIe [x1] [bgZDhMV];
    scanf ("%d %d", &x1, &jla1hd3IKU);
    {
        i = (297 - 297);
        while (x1 > i) {
            {
                OgV3jzM5 = (26 - 26);
                while (OgV3jzM5 < jla1hd3IKU) {
                    scanf ("%d", &IEjxuJeZ8[i][OgV3jzM5]);
                    OgV3jzM5 = OgV3jzM5 +1;
                }
            }
            i = i + 1;
        }
    }
    scanf ("%d %d", &ij1IR7H, &bgZDhMV);
    {
        i = 394 - 394;
        while (ij1IR7H > i) {
            OgV3jzM5 = (801 - 801);
            while (bgZDhMV > OgV3jzM5) {
                scanf ("%d", &YolQGI8Fd[i][OgV3jzM5]);
                OgV3jzM5 = OgV3jzM5 +1;
            }
            i = i + 1;
        }
    }
    for (i = (281 - 281); x1 > i; i = i + 1) {
        OgV3jzM5 = (414 - 414);
        while (bgZDhMV > OgV3jzM5) {
            VZEL3FIe[i][OgV3jzM5] = (732 - 732);
            {
                m = 0;
                while (m < jla1hd3IKU) {
                    VZEL3FIe[i][OgV3jzM5] = VZEL3FIe[i][OgV3jzM5] + IEjxuJeZ8[i][m] * YolQGI8Fd[m][OgV3jzM5];
                    m++;
                }
            }
            if (OgV3jzM5 == bgZDhMV - 1)
                printf ("%d", VZEL3FIe[i][OgV3jzM5]);
            else
                printf ("%d ", VZEL3FIe[i][OgV3jzM5]);
            OgV3jzM5++;
        }
    }
}

