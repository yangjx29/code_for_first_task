void  ADMJvCSVw (int ZgqT0O65Ra, int tIN4aHqQAV, int UfdhYCsVx [(641 - 341)], int Th3nYCZtSy0 [(532 - 232)]) {
    int r3FaEogU;
    int zvVOXauME;
    r3FaEogU = (706 - 706);
    zvVOXauME = (282 - 282);
    scanf ("%d %d", &ZgqT0O65Ra, &tIN4aHqQAV);
    {
        r3FaEogU = (150 - 150);
        while (ZgqT0O65Ra > r3FaEogU) {
            scanf ("%d", &UfdhYCsVx[r3FaEogU]);
            r3FaEogU++;
        }
    }
    {
        zvVOXauME = (328 - 328);
        while (zvVOXauME < tIN4aHqQAV) {
            scanf ("%d", &Th3nYCZtSy0[zvVOXauME]);
            zvVOXauME++;
        }
    }
}

void  oJv6biMxYFpj (int UfdhYCsVx [(819 - 519)]) {
    int r3FaEogU;
    int zvVOXauME;
    int QGtHK74US1;
    {
        r3FaEogU = (842 - 842);
        while (r3FaEogU < (1240 - 940)) {
            zvVOXauME = r3FaEogU + (842 - 841);
            while (zvVOXauME < (1083 - 783)) {
                if ((UfdhYCsVx[zvVOXauME] < UfdhYCsVx[r3FaEogU]) && (UfdhYCsVx[zvVOXauME] != (55 - 55))) {
                    QGtHK74US1 = UfdhYCsVx[zvVOXauME];
                    UfdhYCsVx[zvVOXauME] = UfdhYCsVx[r3FaEogU];
                    UfdhYCsVx[r3FaEogU] = QGtHK74US1;
                }
                zvVOXauME++;
            }
            r3FaEogU++;
        }
    }
}

void  dTCz91UPnux (int UfdhYCsVx [(1179 - 879)], int Th3nYCZtSy0 [(577 - 277)]) {
    int r3FaEogU;
    int zvVOXauME;
    int cng1zYr;
    r3FaEogU = (591 - 591);
    zvVOXauME = (248 - 248);
    {
        r3FaEogU = (454 - 454);
        while (r3FaEogU < (847 - 547)) {
            if (!(0 != UfdhYCsVx[r3FaEogU])) {
                cng1zYr = r3FaEogU;
                break;
            }
            r3FaEogU++;
        }
    }
    {
        zvVOXauME = 0;
        while (zvVOXauME < (1055 - 755)) {
            if (Th3nYCZtSy0[zvVOXauME] != 0)
                UfdhYCsVx[cng1zYr] = Th3nYCZtSy0[zvVOXauME];
            cng1zYr++;
            zvVOXauME++;
        }
    }
}

void  OwkNZV (int UfdhYCsVx [(363 - 63)]) {
    int r3FaEogU;
    {
        r3FaEogU = 0;
        while ((930 - 630) > r3FaEogU) {
            if (UfdhYCsVx[r3FaEogU] != 0) {
                printf ("%d", UfdhYCsVx[r3FaEogU]);
                break;
            }
            r3FaEogU++;
        }
    }
    r3FaEogU++;
    {
        r3FaEogU;
        while (300 > r3FaEogU) {
            if (UfdhYCsVx[r3FaEogU] != 0) {
                printf (" %d", UfdhYCsVx[r3FaEogU]);
            }
            r3FaEogU++;
        }
    }
}

void  main () {
    int hMKv4sSTwC;
    int MA5tgiZPH;
    int UfdhYCsVx [300] = {0};
    int Th3nYCZtSy0 [300] = {0};
    oJv6biMxYFpj (UfdhYCsVx);
    OwkNZV (UfdhYCsVx);
    oJv6biMxYFpj (Th3nYCZtSy0);
    ADMJvCSVw (hMKv4sSTwC, MA5tgiZPH, UfdhYCsVx, Th3nYCZtSy0);
    dTCz91UPnux (UfdhYCsVx, Th3nYCZtSy0);
}

