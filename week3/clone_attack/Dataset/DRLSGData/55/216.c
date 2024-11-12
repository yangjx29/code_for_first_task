const  long  w4LNXTRVZ = 300;
long  fieoOUXwVn86, jgMRucEey3;
char L5cemARDIz [w4LNXTRVZ + (689 - 679)];
long  EXzMbU2 [w4LNXTRVZ + 10], Ci7rkVIhODlb [w4LNXTRVZ + 10];
long  vXfJSD4 [w4LNXTRVZ + 10];

main () {
    long  GVzE7YFLJWTD, Tm6LR4O, ILazmZU2, zg92nLM, slq1YOIbg;
    scanf ("%ld%s%ld", &fieoOUXwVn86, L5cemARDIz, &jgMRucEey3);
    zg92nLM = strlen (L5cemARDIz);
    slq1YOIbg = (195 - 195);
    {
        GVzE7YFLJWTD = '0';
        for (; GVzE7YFLJWTD <= '9';) {
            EXzMbU2[GVzE7YFLJWTD] = GVzE7YFLJWTD -'0';
            Ci7rkVIhODlb[GVzE7YFLJWTD -'0'] = GVzE7YFLJWTD;
            GVzE7YFLJWTD++;
        }
    }
    {
        GVzE7YFLJWTD = 'a';
        while (GVzE7YFLJWTD <= 'z') {
            EXzMbU2[GVzE7YFLJWTD] = GVzE7YFLJWTD -'a' + 10;
            GVzE7YFLJWTD = GVzE7YFLJWTD +1;
        }
    }
    {
        GVzE7YFLJWTD = 'A';
        while (GVzE7YFLJWTD <= 'Z') {
            EXzMbU2[GVzE7YFLJWTD] = GVzE7YFLJWTD -'A' + 10;
            Ci7rkVIhODlb[GVzE7YFLJWTD -'A' + 10] = GVzE7YFLJWTD;
            GVzE7YFLJWTD = GVzE7YFLJWTD +1;
        }
    }
    {
        GVzE7YFLJWTD = 0;
        while (GVzE7YFLJWTD < zg92nLM) {
            slq1YOIbg *= fieoOUXwVn86;
            slq1YOIbg += EXzMbU2[L5cemARDIz[GVzE7YFLJWTD]];
            GVzE7YFLJWTD++;
        }
    }
    zg92nLM = 0;
    for (; slq1YOIbg;) {
        vXfJSD4[++zg92nLM] = slq1YOIbg % jgMRucEey3;
        slq1YOIbg /= jgMRucEey3;
    }
    if (zg92nLM == 0)
        vXfJSD4[++zg92nLM] = 0;
    {
        GVzE7YFLJWTD = zg92nLM;
        while (GVzE7YFLJWTD >= 1) {
            printf ("%c", Ci7rkVIhODlb[vXfJSD4[GVzE7YFLJWTD]]);
            GVzE7YFLJWTD = GVzE7YFLJWTD -1;
        }
    }
    return 0;
}

