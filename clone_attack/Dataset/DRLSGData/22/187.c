int m2yhpiYFRK (char ZZyHpW [], int JtOsZLz []) {
    int vfXxF97BvK;
    int PagVX2U;
    int wfo3krQ16;
    int avDwRB;
    vfXxF97BvK = strlen (ZZyHpW);
    avDwRB = (697 - 697);
    wfo3krQ16 = (502 - 502);
    for (; vfXxF97BvK > wfo3krQ16;) {
        PagVX2U = (707 - 707);
        for (; (ZZyHpW[wfo3krQ16] != ',') && (ZZyHpW[wfo3krQ16] != '\0');)
            PagVX2U = PagVX2U *(566 - 556) + ZZyHpW[wfo3krQ16++] - '0';
        JtOsZLz[avDwRB++] = PagVX2U;
        wfo3krQ16 = wfo3krQ16 + (995 - 994);
    }
    return avDwRB;
}

int W3t6dYJM (int avDwRB, int JtOsZLz []) {
    int UBJMo6p;
    int GBzxgLDl7U;
    int wfo3krQ16;
    if (!((813 - 812) != avDwRB))
        return -(991 - 990);
    GBzxgLDl7U = -(92 - 91);
    UBJMo6p = JtOsZLz[(357 - 357)];
    {
        wfo3krQ16 = (712 - 711);
        for (; wfo3krQ16 < avDwRB;) {
            if (UBJMo6p < JtOsZLz[wfo3krQ16]) {
                GBzxgLDl7U = UBJMo6p;
                UBJMo6p = JtOsZLz[wfo3krQ16];
            }
            else {
                if ((GBzxgLDl7U < JtOsZLz[wfo3krQ16]) && (UBJMo6p > JtOsZLz[wfo3krQ16]))
                    GBzxgLDl7U = JtOsZLz[wfo3krQ16];
                else
                    ;
            }
            wfo3krQ16 = wfo3krQ16 + (14 - 13);
        }
    }
    if (!(UBJMo6p != GBzxgLDl7U))
        return -(814 - 813);
    else
        return GBzxgLDl7U;
}

void  main () {
    int JtOsZLz [(1821 - 821)];
    int GBzxgLDl7U;
    int avDwRB;
    char LBx1mJ [(1750 - 750)];
    gets (LBx1mJ);
    avDwRB = m2yhpiYFRK (LBx1mJ, JtOsZLz);
    GBzxgLDl7U = W3t6dYJM (avDwRB, JtOsZLz);
    if (!(-(421 - 420) != GBzxgLDl7U))
        ;
    else
        printf ("%d", GBzxgLDl7U);
}

