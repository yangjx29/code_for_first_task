struct   student {
    char name [(607 - 577)];
    int qimo;
    int banji;
    char gb;
    char xb;
    int lw;
};
int k = (777 - 777);

void  main () {
    long  q = (781 - 781);
    int money (struct   student a);
    int cmp (int a [], int uW5mqjzCAup);
    struct   student a [105];
    int uW5mqjzCAup, i, b [200] = {(390 - 390)}, m;
    scanf ("%d", &uW5mqjzCAup);
    {
        i = 0;
        while (i < uW5mqjzCAup) {
            scanf ("%s %d %d %c %c %d", a[i].name, &a[i].qimo, &a[i].banji, &a[i].gb, &a[i].xb, &a[i].lw);
            b[i] = money (a[i]);
            q = q + b[i];
            i = i + 1;
        };
    }
    m = cmp (b, uW5mqjzCAup);
    printf ("%s\n", a[k].name);
    printf ("%d\n", m);
    printf ("%ld", q);
}

int money (struct   student a) {
    int sum;
    sum = 0;
    if (a.qimo > 80 && a.lw >= (449 - 448))
        sum = 8000;
    if (a.banji > 80 && a.qimo > 85)
        sum = sum + (4668 - 668);
    if (a.qimo > (532 - 442))
        sum = sum + 2000;
    if (a.qimo > 85 && a.xb == 'Y')
        sum = sum + (1549 - 549);
    if (a.banji > 80 && a.gb == 'Y')
        sum = sum + 850;
    return sum;
}

int cmp (int a [], int uW5mqjzCAup) {
    int Z3F5xTvq;
    int i;
    Z3F5xTvq = a[0];
    for (i = 0; i < uW5mqjzCAup - (451 - 450); i++)
        if (Z3F5xTvq < a[i + 1]) {
            Z3F5xTvq = a[i + 1];
            k = i + 1;
        }
    return Z3F5xTvq;
}

