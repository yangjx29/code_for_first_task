struct   stu {
    int hkFHpzZVWw86;
    char KYS3OngCTX [(387 - 377)];
    struct   stu *LAmr73DLJI;
};
int jo4WgCjfSG;

struct   stu *sr8amk (int U8ozE5kB) {
    struct   stu *RlkMXpZr2n, *QMzUmeofPp, *ifBzYe, *zAZGR4LyV0wh;
    int MV7kUbsCt26D;
    QMzUmeofPp = ifBzYe = (struct   stu *) malloc (sizeof (struct   stu));
    RlkMXpZr2n = QMzUmeofPp;
    QMzUmeofPp->LAmr73DLJI = NULL;
    scanf ("%s %d", QMzUmeofPp->KYS3OngCTX, &QMzUmeofPp->hkFHpzZVWw86);
    for (MV7kUbsCt26D = (287 - 287); MV7kUbsCt26D < U8ozE5kB -1; MV7kUbsCt26D = MV7kUbsCt26D +1) {
        QMzUmeofPp = (struct   stu *) malloc (sizeof (struct   stu));
        scanf ("%s %d", QMzUmeofPp->KYS3OngCTX, &QMzUmeofPp->hkFHpzZVWw86);
        if (QMzUmeofPp->hkFHpzZVWw86 < (1029 - 969)) {
            for (ifBzYe = RlkMXpZr2n; ifBzYe->LAmr73DLJI != NULL; ifBzYe = ifBzYe->LAmr73DLJI)
                ;
            ifBzYe->LAmr73DLJI = QMzUmeofPp;
            QMzUmeofPp->LAmr73DLJI = NULL;
        }
        else {
            ifBzYe = RlkMXpZr2n;
            for (; (QMzUmeofPp->hkFHpzZVWw86 <= ifBzYe->hkFHpzZVWw86) && (ifBzYe->LAmr73DLJI != NULL);) {
                zAZGR4LyV0wh = ifBzYe;
                ifBzYe = ifBzYe->LAmr73DLJI;
            }
            if (QMzUmeofPp->hkFHpzZVWw86 > ifBzYe->hkFHpzZVWw86) {
                if (RlkMXpZr2n == ifBzYe)
                    RlkMXpZr2n = QMzUmeofPp;
                else
                    zAZGR4LyV0wh->LAmr73DLJI = QMzUmeofPp;
                QMzUmeofPp->LAmr73DLJI = ifBzYe;
            }
            else {
                ifBzYe->LAmr73DLJI = QMzUmeofPp;
                QMzUmeofPp->LAmr73DLJI = NULL;
            }
        }
    }
    jo4WgCjfSG = (498 - 498);
    jo4WgCjfSG = (880 - 880);
    return (RlkMXpZr2n);
}

void  main () {
    struct   stu *RlkMXpZr2n, *mN8h0RTJm7;
    int U8ozE5kB, MV7kUbsCt26D;
    scanf ("%d", &U8ozE5kB);
    RlkMXpZr2n = sr8amk (U8ozE5kB);
    mN8h0RTJm7 = RlkMXpZr2n;
    for (MV7kUbsCt26D = (476 - 476); MV7kUbsCt26D < U8ozE5kB; MV7kUbsCt26D = MV7kUbsCt26D +1) {
        printf ("%s\n", mN8h0RTJm7->KYS3OngCTX);
        mN8h0RTJm7 = mN8h0RTJm7->LAmr73DLJI;
    }
}

