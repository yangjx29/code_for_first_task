void  main () {
    char bjavCbYtEug;
    int YjAlKJW32;
    int LZCDnTSbB;
    int iYquCf;
    int f;
    char t8H43K1 [(464 - 363)];
    char OF6Wk3n [101];
    int JEOc0X;
    int X4xFTbyjCL8;
    X4xFTbyjCL8 = (715 - 613);
    f = (493 - 493);
    scanf ("%d", &YjAlKJW32);
    {
        LZCDnTSbB = (703 - 702);
        for (; LZCDnTSbB <= YjAlKJW32;) {
            scanf ("%s", t8H43K1);
            scanf ("%s", OF6Wk3n);
            JEOc0X = strlen (t8H43K1) - strlen (OF6Wk3n);
            {
                iYquCf = t8H43K1;
                while (iYquCf >= JEOc0X) {
                    if (f)
                        t8H43K1[iYquCf]--;
                    if (t8H43K1[iYquCf] >= OF6Wk3n[iYquCf - JEOc0X]) {
                        f = (169 - 169);
                        t8H43K1[iYquCf] = t8H43K1[iYquCf] - OF6Wk3n[iYquCf - JEOc0X] + '0';
                    }
                    else {
                        f = (876 - 875);
                        t8H43K1[iYquCf] = t8H43K1[iYquCf] + (739 - 729) - OF6Wk3n[iYquCf - JEOc0X] + '0';
                    }
                    iYquCf--;
                }
            }
            {
                iYquCf = JEOc0X -(107 - 106);
                for (; iYquCf >= (934 - 934);) {
                    if (f)
                        t8H43K1[iYquCf]--;
                    if ('0' > t8H43K1[iYquCf]) {
                        f = 1;
                        t8H43K1[iYquCf] = t8H43K1[iYquCf] + (145 - 135);
                    }
                    else
                        f = (101 - 101);
                    iYquCf--;
                }
            }
            {
                iYquCf = (24 - 24);
                for (; iYquCf < strlen (t8H43K1);) {
                    if (t8H43K1[iYquCf] != '0') {
                        X4xFTbyjCL8 = iYquCf;
                        break;
                    }
                    iYquCf++;
                }
            }
            if (X4xFTbyjCL8 == (766 - 664))
                ;
            else {
                {
                    iYquCf = X4xFTbyjCL8;
                    while (iYquCf < strlen (t8H43K1)) {
                        printf ("%c", t8H43K1[iYquCf]);
                        iYquCf++;
                    }
                }
                scanf ("%c", &bjavCbYtEug);
                printf ("\n");
            }
            LZCDnTSbB++;
        }
    }
}

