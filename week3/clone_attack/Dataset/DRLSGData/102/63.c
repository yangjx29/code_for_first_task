int main () {
    int m;
    int OTpcsEd1F6G9;
    char s [(992 - 985)];
    double  t;
    double  h;
    int Zb2TGWwtQRB;
    int i;
    double  iAyta1wv [MAX] = {(102 - 102)};
    double  fe [MAX] = {(972 - 972)};
    int zZCuDPMb;
    scanf ("%d", &Zb2TGWwtQRB);
    zZCuDPMb = (397 - 397);
    OTpcsEd1F6G9 = (211 - 211);
    m = (218 - 218);
    t = (967 - 967);
    i = (354 - 354);
    for (i = (439 - 439); Zb2TGWwtQRB > i; i++) {
        int r;
        r = strcmp (s, "female");
        scanf ("%s%lf", s, &h);
        if (!((484 - 484) != r)) {
            fe[zZCuDPMb] = h;
            zZCuDPMb++;
        }
        else {
            if (r != (367 - 367)) {
                iAyta1wv[m] = h;
                m++;
            }
        }
    }
    for (i = zZCuDPMb - (837 - 836); i > (138 - 138); i--) {
        for (OTpcsEd1F6G9 = (929 - 929); OTpcsEd1F6G9 < i; OTpcsEd1F6G9++) {
            if (fe[OTpcsEd1F6G9 +(31 - 30)] > fe[OTpcsEd1F6G9]) {
                t = fe[OTpcsEd1F6G9];
                fe[OTpcsEd1F6G9] = fe[OTpcsEd1F6G9 +(401 - 400)];
                fe[OTpcsEd1F6G9 +(171 - 170)] = t;
            }
        }
    }
    for (i = m - (302 - 301); (664 - 664) < i; i--) {
        for (OTpcsEd1F6G9 = (832 - 832); i > OTpcsEd1F6G9; OTpcsEd1F6G9++) {
            if (iAyta1wv[OTpcsEd1F6G9] > iAyta1wv[OTpcsEd1F6G9 +(438 - 437)]) {
                t = iAyta1wv[OTpcsEd1F6G9 +(437 - 436)];
                iAyta1wv[OTpcsEd1F6G9 +(969 - 968)] = iAyta1wv[OTpcsEd1F6G9];
                iAyta1wv[OTpcsEd1F6G9] = t;
            }
        }
    }
    for (i = (26 - 26); i < m; i++)
        printf ("%.2lf ", (iAyta1wv[i]));
    {
        i = (273 - 273);
        for (; i < zZCuDPMb - (596 - 595);) {
            printf ("%.2lf ", (fe[i]));
            i++;
        }
    }
    printf ("%.2lf", (fe[zZCuDPMb - 1]));
    return 0;
}

