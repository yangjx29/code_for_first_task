int main () {
    int BDfPpa [(10986 - 986)];
    int QNrRjVWLpgGm [10000];
    int KthraSNcYjx;
    int XyZbpDGt;
    int qrcLFbd;
    int j;
    int kVDMhEudGzL;
    int lXvUGkg;
    int a [(1285 - 985)];
    getchar ();
    getchar ();
    scanf ("%d %d", &BDfPpa[(459 - 459)], &QNrRjVWLpgGm[0]);
    for (XyZbpDGt = (407 - 406); 0 < BDfPpa[XyZbpDGt -(381 - 380)] + QNrRjVWLpgGm[XyZbpDGt -(315 - 314)]; XyZbpDGt++)
        scanf ("%d %d", &BDfPpa[XyZbpDGt], &QNrRjVWLpgGm[XyZbpDGt]);
    for (qrcLFbd = 0; qrcLFbd < XyZbpDGt -(396 - 395); qrcLFbd = qrcLFbd + 1) {
        j = (277 - 276);
        for (KthraSNcYjx = (693 - 692); BDfPpa[qrcLFbd] >= KthraSNcYjx; KthraSNcYjx = KthraSNcYjx +1)
            a[KthraSNcYjx] = KthraSNcYjx;
        for (kVDMhEudGzL = BDfPpa[qrcLFbd]; (220 - 219) < kVDMhEudGzL; kVDMhEudGzL = kVDMhEudGzL - 1) {
            lXvUGkg = QNrRjVWLpgGm[qrcLFbd] % kVDMhEudGzL;
            j = j + lXvUGkg - 1;
            if (j >= kVDMhEudGzL)
                j = j % kVDMhEudGzL;
            if (j > 0) {
                KthraSNcYjx = j;
                while (KthraSNcYjx < kVDMhEudGzL) {
                    a[KthraSNcYjx] = a[KthraSNcYjx +1];
                    KthraSNcYjx = KthraSNcYjx +1;
                };
            }
            else
                j = j + 1;
        }
        printf ("%d\n", a[1]);
    }
    return 0;
}

