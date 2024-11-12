void  main () {
    char orOQ9aWJkg [100];
    char HSNPgBLlw [100];
    char M7QCH8oD [100] = {(908 - 908)};
    int lxH7rJ, NKTaDSN16, ZZndFoptK, lTOKkH, pJ4ODW0, aLuz5axlU = 1;
    scanf ("%d", &pJ4ODW0);
    for (; pJ4ODW0 >= aLuz5axlU;) {
        scanf ("%s", HSNPgBLlw);
        lxH7rJ = strlen (HSNPgBLlw);
        scanf ("%s", orOQ9aWJkg);
        NKTaDSN16 = strlen (orOQ9aWJkg);
        for (ZZndFoptK = lxH7rJ - 1, lTOKkH = NKTaDSN16 -1; ZZndFoptK >= lxH7rJ - NKTaDSN16 &&NKTaDSN16 >= 0; ZZndFoptK = ZZndFoptK -1, lTOKkH = lTOKkH - 1) {
            if (HSNPgBLlw[ZZndFoptK] >= orOQ9aWJkg[lTOKkH])
                M7QCH8oD[ZZndFoptK] = HSNPgBLlw[ZZndFoptK] - orOQ9aWJkg[lTOKkH] + '0';
            else {
                M7QCH8oD[ZZndFoptK] = HSNPgBLlw[ZZndFoptK] - orOQ9aWJkg[lTOKkH] + 10 + '0';
                HSNPgBLlw[ZZndFoptK -1] = HSNPgBLlw[ZZndFoptK -1] - 1;
            }
        }
        for (ZZndFoptK = lxH7rJ - NKTaDSN16 -1; ZZndFoptK >= 0; ZZndFoptK--)
            M7QCH8oD[ZZndFoptK] = HSNPgBLlw[ZZndFoptK];
        for (ZZndFoptK = 0; ZZndFoptK < lxH7rJ; ZZndFoptK++) {
            if (M7QCH8oD[ZZndFoptK] != '0')
                break;
        }
        for (lTOKkH = ZZndFoptK; lTOKkH < lxH7rJ; lTOKkH++)
            printf ("%c", M7QCH8oD[lTOKkH]);
        aLuz5axlU++;
    }
}

