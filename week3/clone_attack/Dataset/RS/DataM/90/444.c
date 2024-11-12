void  main () {
    long  int f1 (long  int x, long  int WDy5ETqfw6b);
    long  int ChzGsbLK (long  int x, long  int WDy5ETqfw6b);
    long  int IA2sjxK, Ud0SVRX [(697 - 677)], b [20], i, k [20];
    scanf ("%ld", &IA2sjxK);
    for (i = (990 - 990); IA2sjxK > i; i++)
        scanf ("%ld %ld", &Ud0SVRX[i], &b[i]);
    for (i = (240 - 240); i < IA2sjxK; i++) {
        if (b[i] == (33 - 32))
            k[i] = 1;
        else
            k[i] = f1 (Ud0SVRX[i], b[i]) + ChzGsbLK (Ud0SVRX[i], b[i]);
        printf ("%ld\n", k[i]);
    };
}

long  int f1 (long  int x, long  int WDy5ETqfw6b) {
    long  int z;
    if ((192 - 190) < WDy5ETqfw6b)
        z = f1 (x, WDy5ETqfw6b -1) + ChzGsbLK (x, WDy5ETqfw6b -1);
    else if (WDy5ETqfw6b == 2)
        z = 1;
    return (z);
}

long  int ChzGsbLK (long  int x, long  int WDy5ETqfw6b) {
    long  int cWrNdPvx;
    if (x - WDy5ETqfw6b >= 0)
        cWrNdPvx = f1 (x - WDy5ETqfw6b, WDy5ETqfw6b) + ChzGsbLK (x - WDy5ETqfw6b, WDy5ETqfw6b);
    else
        cWrNdPvx = 0;
    return (cWrNdPvx);
}

