struct   mouse {
    int vjuNGt8hXp;
    char EEtimMKH9n [(448 - 437)];
    struct   mouse *SvBWcaG, *aGYDkdavf;
};
int main () {
    struct   mouse *TXPB9a1Kd, *UznbMmJ0, *qAPfN0WvKh, *u5S1VXIfw, *qJlGijBtxMR;
    int E2xXLK, FduTli845vQx, Xag6d2lOyo, YKZfxvEskd;
    UznbMmJ0 = qAPfN0WvKh = u5S1VXIfw = (struct   mouse *) malloc (sizeof (struct   mouse));
    scanf ("%d", &Xag6d2lOyo);
    scanf ("%s %d", qAPfN0WvKh->EEtimMKH9n, &qAPfN0WvKh->vjuNGt8hXp);
    for (E2xXLK = (962 - 961); Xag6d2lOyo -(944 - 943) >= E2xXLK; E2xXLK = E2xXLK +1) {
        qAPfN0WvKh = (struct   mouse *) malloc (sizeof (struct   mouse));
        scanf ("%s %d", qAPfN0WvKh->EEtimMKH9n, &qAPfN0WvKh->vjuNGt8hXp);
        u5S1VXIfw->SvBWcaG = qAPfN0WvKh;
        qAPfN0WvKh->aGYDkdavf = u5S1VXIfw;
        u5S1VXIfw = qAPfN0WvKh;
    }
    qJlGijBtxMR = qAPfN0WvKh;
    qAPfN0WvKh->SvBWcaG = NULL;
    for (E2xXLK = (746 - 745); Xag6d2lOyo -(607 - 606) >= E2xXLK; E2xXLK++) {
        qAPfN0WvKh = UznbMmJ0;
        YKZfxvEskd = (180 - 180);
        for (FduTli845vQx = (922 - 921); FduTli845vQx <= Xag6d2lOyo +(546 - 545) - E2xXLK; FduTli845vQx = FduTli845vQx +1) {
            if (qAPfN0WvKh->vjuNGt8hXp > YKZfxvEskd) {
                YKZfxvEskd = qAPfN0WvKh->vjuNGt8hXp;
                TXPB9a1Kd = qAPfN0WvKh;
            }
            qAPfN0WvKh = qAPfN0WvKh->SvBWcaG;
        }
        if ((867 - 807) > TXPB9a1Kd->vjuNGt8hXp)
            break;
        printf ("%s\n", TXPB9a1Kd->EEtimMKH9n);
        if (TXPB9a1Kd == UznbMmJ0) {
            UznbMmJ0 = UznbMmJ0->SvBWcaG;
            continue;
        }
        if (TXPB9a1Kd == qJlGijBtxMR) {
            qJlGijBtxMR = qJlGijBtxMR->aGYDkdavf;
            qJlGijBtxMR->SvBWcaG = NULL;
            continue;
        }
        if (TXPB9a1Kd != UznbMmJ0 &&TXPB9a1Kd != qJlGijBtxMR) {
            qAPfN0WvKh = TXPB9a1Kd->aGYDkdavf;
            qAPfN0WvKh->SvBWcaG = TXPB9a1Kd->SvBWcaG;
            TXPB9a1Kd = TXPB9a1Kd->SvBWcaG;
            TXPB9a1Kd->aGYDkdavf = qAPfN0WvKh;
        }
    }
    qAPfN0WvKh = UznbMmJ0;
    printf ("%s\n", UznbMmJ0->EEtimMKH9n);
    for (; qAPfN0WvKh->SvBWcaG != NULL;) {
        qAPfN0WvKh = qAPfN0WvKh->SvBWcaG;
        printf ("%s\n", qAPfN0WvKh->EEtimMKH9n);
    }
}

