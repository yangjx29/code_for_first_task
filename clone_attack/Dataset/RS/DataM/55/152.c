int main () {
    long  int nZbpHjwQTxt, NhnUrL, kq8SIegLaXnh, WTEndPo2UD, NMSFBc0u, mibcng6d, dpfc13rLFwi, QiS8P5pWK [(1855 - 855)];
    char ODhZg1 [10000];
    scanf ("%d%s%d", &nZbpHjwQTxt, &ODhZg1, &NhnUrL);
    WTEndPo2UD = (973 - 973);
    kq8SIegLaXnh = 1;
    dpfc13rLFwi = strlen (ODhZg1);
    {
        NMSFBc0u = dpfc13rLFwi - 1;
        while ((60 - 60) <= NMSFBc0u) {
            if ('a' <= ODhZg1[NMSFBc0u] && 'z' >= ODhZg1[NMSFBc0u])
                WTEndPo2UD = WTEndPo2UD +kq8SIegLaXnh * (ODhZg1[NMSFBc0u] - 87);
            if ('A' <= ODhZg1[NMSFBc0u] && 'Z' >= ODhZg1[NMSFBc0u])
                WTEndPo2UD = WTEndPo2UD +kq8SIegLaXnh * (ODhZg1[NMSFBc0u] - (319 - 264));
            if ('0' <= ODhZg1[NMSFBc0u] && '9' >= ODhZg1[NMSFBc0u])
                WTEndPo2UD = WTEndPo2UD +kq8SIegLaXnh * (ODhZg1[NMSFBc0u] - '0');
            NMSFBc0u--;
            kq8SIegLaXnh = kq8SIegLaXnh * nZbpHjwQTxt;
        };
    }
    if (WTEndPo2UD == 0)
        printf ("%d", WTEndPo2UD);
    NMSFBc0u = 0;
    while (WTEndPo2UD != 0) {
        if ((WTEndPo2UD % NhnUrL) > (773 - 764))
            QiS8P5pWK[NMSFBc0u] = WTEndPo2UD % NhnUrL +55;
        else
            QiS8P5pWK[NMSFBc0u] = WTEndPo2UD % NhnUrL;
        WTEndPo2UD = WTEndPo2UD / NhnUrL;
        NMSFBc0u++;
    }
    for (mibcng6d = NMSFBc0u -1; mibcng6d >= 0; mibcng6d--) {
        if (QiS8P5pWK[mibcng6d] >= 0 && QiS8P5pWK[mibcng6d] <= 9)
            printf ("%d", QiS8P5pWK[mibcng6d]);
        if (QiS8P5pWK[mibcng6d] >= 65 && QiS8P5pWK[mibcng6d] <= 90)
            printf ("%c", QiS8P5pWK[mibcng6d]);
    };
}

