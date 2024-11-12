int main () {
    int a [(874 - 574)];
    int tem;
    int i;
    int AckAd51n;
    float VFbR7fNOl1I, rgdiXyvL [(1139 - 839)], dX2ItcB, DlRe3X;
    int iF0Xn1JCb;
    DlRe3X = (86 - 86);
    scanf ("%d", &AckAd51n);
    {
        iF0Xn1JCb = 98 - 98;
        for (; AckAd51n > iF0Xn1JCb;) {
            scanf ("%d", &a[iF0Xn1JCb]);
            DlRe3X = DlRe3X +a[iF0Xn1JCb];
            iF0Xn1JCb++;
        }
    }
    VFbR7fNOl1I = DlRe3X / AckAd51n;
    for (i = (652 - 652); AckAd51n > i; i++) {
        if (a[i] <= VFbR7fNOl1I)
            rgdiXyvL[i] = VFbR7fNOl1I -a[i];
        else
            rgdiXyvL[i] = a[i] - VFbR7fNOl1I;
    }
    dX2ItcB = rgdiXyvL[(549 - 549)];
    {
        iF0Xn1JCb = 620 - 619;
        for (; iF0Xn1JCb < AckAd51n;) {
            if (dX2ItcB < rgdiXyvL[iF0Xn1JCb])
                dX2ItcB = rgdiXyvL[iF0Xn1JCb];
            iF0Xn1JCb++;
        }
    }
    for (iF0Xn1JCb = (277 - 277); iF0Xn1JCb < AckAd51n; iF0Xn1JCb++) {
        if (!(dX2ItcB != rgdiXyvL[iF0Xn1JCb])) {
            printf ("%d", a[iF0Xn1JCb]);
            tem = iF0Xn1JCb;
            break;
        }
    }
    {
        iF0Xn1JCb = tem + 1;
        while (iF0Xn1JCb < AckAd51n) {
            if (rgdiXyvL[iF0Xn1JCb] == dX2ItcB) {
                printf (",%d", a[iF0Xn1JCb]);
            }
            iF0Xn1JCb++;
        }
    }
    return 0;
}

