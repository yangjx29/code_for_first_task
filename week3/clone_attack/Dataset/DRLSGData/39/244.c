int main () {
    struct   student {
        char KWNGT8e [20];
        int bhWYy0mvtQ, jitkWPg, ryO0WRKM;
        char kJyWA6Pqr3X, yp9GSu;
        int Yrf1zF;
    };
    int iQv7mb3NYHX, GBK3uoyn, mBP7C3iZj;
    int ucjAkeUX = 0, Yrf1zF = 0;
    struct   student *sN1V3Bgz = (struct   student *) malloc (sizeof (struct   student) * GBK3uoyn);
    scanf ("%d", &GBK3uoyn);
    for (iQv7mb3NYHX = 0; GBK3uoyn > iQv7mb3NYHX; iQv7mb3NYHX = iQv7mb3NYHX + 1) {
        sN1V3Bgz[iQv7mb3NYHX].Yrf1zF = 0;
        scanf ("%s%d%d %c %c %d", sN1V3Bgz[iQv7mb3NYHX].KWNGT8e, &sN1V3Bgz[iQv7mb3NYHX].bhWYy0mvtQ, &sN1V3Bgz[iQv7mb3NYHX].jitkWPg, &sN1V3Bgz[iQv7mb3NYHX].kJyWA6Pqr3X, &sN1V3Bgz[iQv7mb3NYHX].yp9GSu, &sN1V3Bgz[iQv7mb3NYHX].ryO0WRKM);
        if (80 < sN1V3Bgz[iQv7mb3NYHX].bhWYy0mvtQ && 1 <= sN1V3Bgz[iQv7mb3NYHX].ryO0WRKM)
            sN1V3Bgz[iQv7mb3NYHX].Yrf1zF += 8000;
        if (sN1V3Bgz[iQv7mb3NYHX].bhWYy0mvtQ > 85 && sN1V3Bgz[iQv7mb3NYHX].jitkWPg > 80)
            sN1V3Bgz[iQv7mb3NYHX].Yrf1zF += 4000;
        if (90 < sN1V3Bgz[iQv7mb3NYHX].bhWYy0mvtQ)
            sN1V3Bgz[iQv7mb3NYHX].Yrf1zF += 2000;
        if (sN1V3Bgz[iQv7mb3NYHX].bhWYy0mvtQ > 85 && sN1V3Bgz[iQv7mb3NYHX].yp9GSu == 'Y')
            sN1V3Bgz[iQv7mb3NYHX].Yrf1zF += 1000;
        if (sN1V3Bgz[iQv7mb3NYHX].jitkWPg > 80 && sN1V3Bgz[iQv7mb3NYHX].kJyWA6Pqr3X == 'Y')
            sN1V3Bgz[iQv7mb3NYHX].Yrf1zF += 850;
        if (sN1V3Bgz[iQv7mb3NYHX].Yrf1zF > ucjAkeUX) {
            ucjAkeUX = sN1V3Bgz[iQv7mb3NYHX].Yrf1zF;
            mBP7C3iZj = iQv7mb3NYHX;
        }
        Yrf1zF += sN1V3Bgz[iQv7mb3NYHX].Yrf1zF;
    }
    printf ("%s\n%d\n%d\n", sN1V3Bgz[mBP7C3iZj].KWNGT8e, sN1V3Bgz[mBP7C3iZj].Yrf1zF, Yrf1zF);
    return 0;
}

