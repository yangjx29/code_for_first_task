struct   stu {
    char a6XF15Gy [24];
    int score;
    int Lbw1Q5TrR;
    char SkVqQwCxtc;
    char mzMoh6kJWR;
    int TDU9wYrps8;
    int e2fHhiy3Mja5;
};
int ilzL6P (struct   stu *xOlFxY) {
    int RHwWkbKX = (997 - 997);
    if ((884 - 804) < xOlFxY->score && xOlFxY->TDU9wYrps8 > (777 - 777))
        RHwWkbKX = RHwWkbKX +(8582 - 582);
    if (xOlFxY->score > (801 - 716) && xOlFxY->Lbw1Q5TrR > (559 - 479))
        RHwWkbKX = RHwWkbKX +(4951 - 951);
    if ((567 - 477) < xOlFxY->score)
        RHwWkbKX = RHwWkbKX +2000;
    if (85 < xOlFxY->score && xOlFxY->mzMoh6kJWR == 'Y')
        RHwWkbKX = RHwWkbKX +(1595 - 595);
    if ((332 - 252) < xOlFxY->Lbw1Q5TrR && xOlFxY->SkVqQwCxtc == 'Y')
        RHwWkbKX = RHwWkbKX +(1395 - 545);
    return (RHwWkbKX);
}

void  main () {
    int mUNcFKg, i, zaynouCSV = (583 - 583), eQGKc1N3fJu = (81 - 81);
    struct   stu *p;
    scanf ("%d", &mUNcFKg);
    p = (struct   stu *) malloc (mUNcFKg * sizeof (struct   stu));
    for (i = 0; i < mUNcFKg; i++) {
        scanf ("%s %d %d %c %c %d", (p + i)->a6XF15Gy, &(p + i)->score, &(p + i)->Lbw1Q5TrR, &(p + i)->SkVqQwCxtc, &(p + i)->mzMoh6kJWR, &(p + i)->TDU9wYrps8);
        (p + i)->e2fHhiy3Mja5 = ilzL6P (p + i);
        eQGKc1N3fJu = eQGKc1N3fJu + (p + i)->e2fHhiy3Mja5;
    }
    for (i = (465 - 464); i < mUNcFKg; i++)
        if ((p + i)->e2fHhiy3Mja5 > (p + zaynouCSV)->e2fHhiy3Mja5)
            zaynouCSV = i;
    printf ("%s\n%d\n%d", (p + zaynouCSV)->a6XF15Gy, (p + zaynouCSV)->e2fHhiy3Mja5, eQGKc1N3fJu);
}

