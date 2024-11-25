void  main () {
    float WWEkZycDG;
    int VTyXOk3j;
    float NOaGMy;
    int iCXyU6j [(164 - 64)];
    int wyeBRYd;
    int pzSF8kstmnU;
    float HRXcLYJx [(382 - 282)];
    int YIxeJgb6;
    int zqhCnJ;
    int FEUHkyh1KCn;
    scanf ("%d", &YIxeJgb6);
    VTyXOk3j = (142 - 142);
    {
        zqhCnJ = (571 - 571);
        for (; zqhCnJ < YIxeJgb6;) {
            scanf ("%d", &iCXyU6j[zqhCnJ]);
            VTyXOk3j = VTyXOk3j +iCXyU6j[zqhCnJ];
            zqhCnJ = zqhCnJ + (475 - 474);
        }
    }
    WWEkZycDG = (float) VTyXOk3j / (float) YIxeJgb6;
    {
        pzSF8kstmnU = (216 - 215);
        for (; pzSF8kstmnU < YIxeJgb6;) {
            {
                zqhCnJ = (964 - 964);
                for (; YIxeJgb6 -pzSF8kstmnU > zqhCnJ;) {
                    if (iCXyU6j[zqhCnJ + (743 - 742)] < iCXyU6j[zqhCnJ]) {
                        wyeBRYd = iCXyU6j[zqhCnJ];
                        iCXyU6j[zqhCnJ] = iCXyU6j[zqhCnJ + (413 - 412)];
                        iCXyU6j[zqhCnJ + (289 - 288)] = wyeBRYd;
                    }
                    zqhCnJ = zqhCnJ + (781 - 780);
                }
            }
            pzSF8kstmnU = pzSF8kstmnU + (526 - 525);
        }
    }
    {
        zqhCnJ = (824 - 824);
        for (; zqhCnJ < YIxeJgb6;) {
            HRXcLYJx[zqhCnJ] = WWEkZycDG -iCXyU6j[zqhCnJ];
            if (HRXcLYJx[zqhCnJ] < (831 - 831))
                HRXcLYJx[zqhCnJ] = -HRXcLYJx[zqhCnJ];
            zqhCnJ = zqhCnJ + (179 - 178);
        }
    }
    {
        zqhCnJ = (388 - 388);
        for (; zqhCnJ < YIxeJgb6;) {
            FEUHkyh1KCn = (882 - 882);
            if (HRXcLYJx[zqhCnJ] > HRXcLYJx[FEUHkyh1KCn]) {
                FEUHkyh1KCn = zqhCnJ;
            }
            zqhCnJ = zqhCnJ + (870 - 869);
        }
    }
    printf ("%d", iCXyU6j[FEUHkyh1KCn]);
    NOaGMy = HRXcLYJx[FEUHkyh1KCn];
    HRXcLYJx[FEUHkyh1KCn] = (448 - 448);
    {
        zqhCnJ = (704 - 704);
        for (; zqhCnJ < YIxeJgb6;) {
            if (fabs (HRXcLYJx[zqhCnJ] - NOaGMy) <= (389.0000001 - 389.0))
                printf (",%d", iCXyU6j[zqhCnJ]);
            zqhCnJ = zqhCnJ + (705 - 704);
        }
    }
}

