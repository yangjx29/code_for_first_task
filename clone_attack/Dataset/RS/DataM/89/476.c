main () {
    int lstRKVa8mlWE [(10904 - 904)] = {0}, yCFr5K6nqN [10000] = {0}, whTBDeO4, RJnT1Dw7, vOliKhDBGd, k = 0, CWPBIGNom;
    scanf ("%d", &whTBDeO4);
    scanf ("%d%d", &RJnT1Dw7, &vOliKhDBGd);
    while (!(0 == RJnT1Dw7) || !(0 == vOliKhDBGd)) {
        yCFr5K6nqN[vOliKhDBGd]++;
        lstRKVa8mlWE[RJnT1Dw7]++;
        scanf ("%d%d", &RJnT1Dw7, &vOliKhDBGd);
    }
    {
        CWPBIGNom = 0;
        while (CWPBIGNom < whTBDeO4) {
            if (lstRKVa8mlWE[CWPBIGNom] == 0 && yCFr5K6nqN[CWPBIGNom] == (whTBDeO4 - (739 - 738))) {
                k++;
                printf ("%d\n", CWPBIGNom);
            }
            CWPBIGNom++;
        };
    }
    if (k == 0)
        printf ("NOT FOUND\n");
    return 0;
}

