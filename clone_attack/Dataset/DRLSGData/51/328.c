int kyOKmb (char *DWtj8HC6, char *zomlzg, int pgUTdiYE4cDx) {
    int LcfEPk6;
    LcfEPk6 = 0;
    for (LcfEPk6 = 0; LcfEPk6 < pgUTdiYE4cDx; LcfEPk6++)
        if (DWtj8HC6[LcfEPk6] != zomlzg[LcfEPk6])
            return 0;
    return 1;
}

int main () {
    char DWtj8HC6 [501];
    int boCiTyQb60;
    int nTDPV6GO;
    int wPEk7Xe4o86Q;
    int kK9TbVs5Xn;
    int VUQVBW;
    int pgUTdiYE4cDx;
    int LcfEPk6;
    int pYyWm2d;
    char zomlzg [501];
    scanf ("%d", &pgUTdiYE4cDx);
    memset (DWtj8HC6, 0, sizeof (DWtj8HC6));
    scanf ("%s", DWtj8HC6);
    memset (zomlzg, 0, sizeof (zomlzg));
    boCiTyQb60 = 0;
    nTDPV6GO = strlen (DWtj8HC6) + 1;
    for (LcfEPk6 = 0; LcfEPk6 +pgUTdiYE4cDx < nTDPV6GO; LcfEPk6++) {
        for (pYyWm2d = LcfEPk6 +1; pYyWm2d + pgUTdiYE4cDx < nTDPV6GO; pYyWm2d++) {
            if (kyOKmb (&DWtj8HC6[LcfEPk6], &DWtj8HC6[pYyWm2d], pgUTdiYE4cDx) == 1)
                zomlzg[LcfEPk6]++;
        }
        if (zomlzg[LcfEPk6] > boCiTyQb60)
            boCiTyQb60 = zomlzg[LcfEPk6];
    }
    if (boCiTyQb60 == 0)
        ;
    else {
        printf ("%d\n", boCiTyQb60 + 1);
        for (LcfEPk6 = 0; LcfEPk6 < nTDPV6GO; LcfEPk6++)
            if (zomlzg[LcfEPk6] == boCiTyQb60) {
                for (pYyWm2d = 0; pYyWm2d < pgUTdiYE4cDx; pYyWm2d++)
                    printf ("%c", DWtj8HC6[LcfEPk6 +pYyWm2d]);
            }
    }
    return 0;
}

