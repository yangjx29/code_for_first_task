void  main () {
    scanf ("\n");
    int PTmSHRziX [500];
    int oGyzceh4MwKU, j, yyHX7Y, l, ESA7qZxmE;
    int iVxd7vmerD9, rwZ5xmMaV = (347 - 347);
    char p3geSVRaOxWz [(1204 - 704)], bZurNeCS [(150 - 140)];
    gets (bZurNeCS);
    gets (p3geSVRaOxWz);
    l = strlen (p3geSVRaOxWz);
    scanf ("%d", &iVxd7vmerD9);
    PTmSHRziX[(207 - 207)] = (379 - 378);
    {
        oGyzceh4MwKU = 875 - 874;
        while (l - iVxd7vmerD9 >= oGyzceh4MwKU) {
            {
                j = 943 - 943;
                while (oGyzceh4MwKU > j) {
                    {
                        yyHX7Y = 0;
                        while (yyHX7Y < iVxd7vmerD9) {
                            if (p3geSVRaOxWz[oGyzceh4MwKU + yyHX7Y] != p3geSVRaOxWz[j + yyHX7Y]) {
                                break;
                            }
                            yyHX7Y = yyHX7Y + 1;
                        };
                    }
                    if (!(iVxd7vmerD9 != yyHX7Y)) {
                        PTmSHRziX[j]++;
                        PTmSHRziX[oGyzceh4MwKU] = 0;
                        break;
                    }
                    j = j + 1;
                };
            }
            if (!(oGyzceh4MwKU != j))
                PTmSHRziX[oGyzceh4MwKU] = 1;
            oGyzceh4MwKU = oGyzceh4MwKU + 1;
        };
    }
    {
        oGyzceh4MwKU = 0;
        while (oGyzceh4MwKU <= l - iVxd7vmerD9) {
            if (rwZ5xmMaV < PTmSHRziX[oGyzceh4MwKU]) {
                rwZ5xmMaV = PTmSHRziX[oGyzceh4MwKU];
            }
            oGyzceh4MwKU++;
        };
    }
    if (rwZ5xmMaV > 1) {
        printf ("%d\n", rwZ5xmMaV);
        {
            oGyzceh4MwKU = 0;
            while (oGyzceh4MwKU <= l - iVxd7vmerD9) {
                if (PTmSHRziX[oGyzceh4MwKU] == rwZ5xmMaV) {
                    {
                        j = oGyzceh4MwKU;
                        while (j < oGyzceh4MwKU + iVxd7vmerD9) {
                            printf ("%c", p3geSVRaOxWz[j]);
                            j++;
                        };
                    };
                }
                oGyzceh4MwKU++;
            };
        };
    }
    else
        ;
}

