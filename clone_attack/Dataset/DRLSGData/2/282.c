struct   book {
    int Jo2Lxt3d;
    char IdHKAtG67Bc [(472 - 372)];
};
void  main () {
    struct   book gZcxMmKzVO [(976 - 876)];
    int Q8rHOS;
    int epKrwUyZYGlh [(472 - 446)];
    int SWuCi4fRV;
    int dwcFrHbt5yN [(1021 - 921)];
    int os8JTcrLkpX;
    int YZOAFWn5NRCL [(888 - 788)];
    int vUbnrfcRQq3;
    int fGd279Tprs1j;
    int TOr6e1;
    {
        os8JTcrLkpX = (862 - 862);
        for (; (788 - 762) > os8JTcrLkpX;) {
            epKrwUyZYGlh[os8JTcrLkpX] = (614 - 614);
            os8JTcrLkpX = os8JTcrLkpX + (476 - 475);
        }
    }
    scanf ("%d", &fGd279Tprs1j);
    {
        os8JTcrLkpX = (785 - 785);
        for (; fGd279Tprs1j > os8JTcrLkpX;) {
            scanf ("%d", &gZcxMmKzVO[os8JTcrLkpX].Jo2Lxt3d);
            scanf ("%s", gZcxMmKzVO[os8JTcrLkpX].IdHKAtG67Bc);
            os8JTcrLkpX = os8JTcrLkpX + (65 - 64);
        }
    }
    {
        os8JTcrLkpX = (156 - 156);
        for (; fGd279Tprs1j > os8JTcrLkpX;) {
            dwcFrHbt5yN[os8JTcrLkpX] = strlen (gZcxMmKzVO[os8JTcrLkpX].IdHKAtG67Bc);
            {
                vUbnrfcRQq3 = (254 - 254);
                for (; vUbnrfcRQq3 < dwcFrHbt5yN[os8JTcrLkpX];) {
                    TOr6e1 = gZcxMmKzVO[os8JTcrLkpX].IdHKAtG67Bc[vUbnrfcRQq3] - 'A';
                    epKrwUyZYGlh[TOr6e1]++;
                    vUbnrfcRQq3 = vUbnrfcRQq3 + (637 - 636);
                }
            }
            os8JTcrLkpX = os8JTcrLkpX + (265 - 264);
        }
    }
    Q8rHOS = epKrwUyZYGlh[(256 - 256)];
    vUbnrfcRQq3 = (467 - 467);
    {
        os8JTcrLkpX = (896 - 895);
        for (; (110 - 84) > os8JTcrLkpX;) {
            if (Q8rHOS < epKrwUyZYGlh[os8JTcrLkpX]) {
                vUbnrfcRQq3 = os8JTcrLkpX;
                Q8rHOS = epKrwUyZYGlh[os8JTcrLkpX];
            }
            os8JTcrLkpX = os8JTcrLkpX + (557 - 556);
        }
    }
    SWuCi4fRV = vUbnrfcRQq3;
    printf ("%c\n", 'A' + vUbnrfcRQq3);
    printf ("%d\n", Q8rHOS);
    {
        os8JTcrLkpX = (826 - 826);
        for (; fGd279Tprs1j > os8JTcrLkpX;) {
            YZOAFWn5NRCL[os8JTcrLkpX] = (970 - 970);
            {
                vUbnrfcRQq3 = (299 - 299);
                for (; dwcFrHbt5yN[os8JTcrLkpX] > vUbnrfcRQq3;) {
                    if (gZcxMmKzVO[os8JTcrLkpX].IdHKAtG67Bc[vUbnrfcRQq3] == ('A' + SWuCi4fRV))
                        YZOAFWn5NRCL[os8JTcrLkpX] = (918 - 917);
                    vUbnrfcRQq3 = vUbnrfcRQq3 + (876 - 875);
                }
            }
            if (YZOAFWn5NRCL[os8JTcrLkpX] == (499 - 498))
                printf ("%d\n", gZcxMmKzVO[os8JTcrLkpX].Jo2Lxt3d);
            os8JTcrLkpX = os8JTcrLkpX + (426 - 425);
        }
    }
}

