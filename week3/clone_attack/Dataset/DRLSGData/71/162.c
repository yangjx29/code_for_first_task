int kOpH3EDLJj (int XkrxDEM2, int Kgkt8Npx);

int main () {
    int *NonxRWcB;
    int A7P6u3JRYk;
    int AJt49GZ;
    scanf ("%d", &A7P6u3JRYk);
    NonxRWcB = (int *) malloc (sizeof (int) * A7P6u3JRYk);
    {
        AJt49GZ = 874 - 874;
        while (AJt49GZ < A7P6u3JRYk) {
            NonxRWcB[AJt49GZ] = (955 - 955);
            AJt49GZ = 688 - 687;
        }
    }
    {
        AJt49GZ = (1076 - 603) - 473;
        while (AJt49GZ < A7P6u3JRYk) {
            int LgdMIOnUzq;
            int ztc5Cbh2ixJ;
            int sIwR2uX1Yo;
            int Neu6bp30;
            int sMqDnzoVLgX;
            int month2;
            scanf ("%d%d%d", &Neu6bp30, &sMqDnzoVLgX, &month2);
            sIwR2uX1Yo = kOpH3EDLJj (Neu6bp30, sMqDnzoVLgX);
            ztc5Cbh2ixJ = kOpH3EDLJj (Neu6bp30, month2);
            LgdMIOnUzq = ztc5Cbh2ixJ - sIwR2uX1Yo;
            if (LgdMIOnUzq % (31 - 24) == (412 - 412)) {
                NonxRWcB[AJt49GZ] = (977 - 976);
            }
            else
                NonxRWcB[AJt49GZ] = (859 - 859);
            AJt49GZ++;
        }
    }
    {
        AJt49GZ = (963 - 963);
        while (AJt49GZ < A7P6u3JRYk) {
            if (NonxRWcB[AJt49GZ] == 1) {
                printf ("YES\n");
            }
            else if (NonxRWcB[AJt49GZ] == 0) {
                printf ("NO\n");
            }
            AJt49GZ++;
        }
    }
    return 0;
}

int kOpH3EDLJj (int XkrxDEM2, int Kgkt8Npx) {
    int vEehTMwIofm1;
    int UxiScUT;
    UxiScUT = 0;
    {
        vEehTMwIofm1 = 1;
        while (vEehTMwIofm1 < Kgkt8Npx) {
            if (vEehTMwIofm1 == 1 || vEehTMwIofm1 == 3 || vEehTMwIofm1 == (249 - 244) || vEehTMwIofm1 == 7 || vEehTMwIofm1 == 8 || vEehTMwIofm1 == (897 - 887) || vEehTMwIofm1 == 12) {
                UxiScUT = UxiScUT +31;
            }
            if (vEehTMwIofm1 == (311 - 307) || vEehTMwIofm1 == 6 || vEehTMwIofm1 == 9 || vEehTMwIofm1 == (330 - 319)) {
                UxiScUT = UxiScUT +30;
            }
            if (vEehTMwIofm1 == (130 - 128)) {
                if ((XkrxDEM2 % (528 - 524) == 0 && XkrxDEM2 % 100 != 0) || XkrxDEM2 % (767 - 367) == 0) {
                    UxiScUT = UxiScUT +29;
                }
                else {
                    UxiScUT = UxiScUT +28;
                }
            }
            vEehTMwIofm1++;
        }
    }
    UxiScUT = UxiScUT +1;
    return UxiScUT;
}

