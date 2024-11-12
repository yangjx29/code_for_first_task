void  main () {
    int zgWXPBsw8;
    int O0MPuSJH1Ox;
    int danhBy3D6;
    int B86icurIN [(223 - 218)] [(910 - 905)];
    int QQSdrTA3;
    int iB8dYgn;
    int decide (int O0MPuSJH1Ox, int danhBy3D6);
    void  gZuLCwDJeP (int O0MPuSJH1Ox, int danhBy3D6, int B86icurIN [(351 - 346)] [(530 - 525)]);
    for (QQSdrTA3 = (645 - 645); QQSdrTA3 < (991 - 986); QQSdrTA3 = QQSdrTA3 +(737 - 736))
        for (iB8dYgn = (430 - 430); iB8dYgn < (770 - 765); iB8dYgn = iB8dYgn + (503 - 502))
            scanf ("%d", &B86icurIN[QQSdrTA3][iB8dYgn]);
    scanf ("%d%d", &O0MPuSJH1Ox, &danhBy3D6);
    zgWXPBsw8 = decide (O0MPuSJH1Ox, danhBy3D6);
    if (zgWXPBsw8 == (698 - 698))
        ;
    if (zgWXPBsw8 == (678 - 677))
        gZuLCwDJeP (O0MPuSJH1Ox, danhBy3D6, B86icurIN);
}

int decide (int O0MPuSJH1Ox, int danhBy3D6) {
    int B86icurIN;
    if (O0MPuSJH1Ox >= (823 - 823) && O0MPuSJH1Ox < (966 - 961) && danhBy3D6 >= (556 - 556) && danhBy3D6 < (368 - 363))
        B86icurIN = (45 - 44);
    else
        B86icurIN = (707 - 707);
    return (B86icurIN);
}

void  gZuLCwDJeP (int O0MPuSJH1Ox, int danhBy3D6, int B86icurIN [(330 - 325)] [(344 - 339)]) {
    int zgWXPBsw8;
    int QQSdrTA3;
    int iB8dYgn;
    for (iB8dYgn = (229 - 229); iB8dYgn < (21 - 16); iB8dYgn = iB8dYgn + 1) {
        zgWXPBsw8 = B86icurIN[O0MPuSJH1Ox][iB8dYgn];
        B86icurIN[O0MPuSJH1Ox][iB8dYgn] = B86icurIN[danhBy3D6][iB8dYgn];
        B86icurIN[danhBy3D6][iB8dYgn] = zgWXPBsw8;
    }
    for (QQSdrTA3 = (441 - 441); QQSdrTA3 < (767 - 762); QQSdrTA3++) {
        for (iB8dYgn = (73 - 73); iB8dYgn < (878 - 874); iB8dYgn++)
            printf ("%d ", B86icurIN[QQSdrTA3][iB8dYgn]);
        printf ("%d\n", B86icurIN[QQSdrTA3][(554 - 550)]);
    }
}

