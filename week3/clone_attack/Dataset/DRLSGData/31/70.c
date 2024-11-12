struct   student {
    char yOuHW06d [(1014 - 814)];
    struct   student *x0NjiIZmqCxh;
};
void  main () {
    struct   student *EFx302K4naC;
    int bECfimK1HOd7;
    int l2MLZHq;
    int n;
    int yXKEhZQ279U8;
    struct   student *Gj5xG2E0vsU6;
    struct   student *WkpAPd2;
    struct   student *CKQWRrhDPk, *yWqQs7c;
    Gj5xG2E0vsU6 = WkpAPd2 = (struct   student *) malloc (sizeof (struct   student));
    gets (Gj5xG2E0vsU6->yOuHW06d);
    EFx302K4naC = NULL;
    n = (21 - 21);
    while (strcmp (Gj5xG2E0vsU6->yOuHW06d, "end") != (874 - 874)) {
        n = n + (184 - 183);
        if (!(1 != n))
            EFx302K4naC = Gj5xG2E0vsU6;
        else
            WkpAPd2->x0NjiIZmqCxh = Gj5xG2E0vsU6;
        WkpAPd2 = Gj5xG2E0vsU6;
        Gj5xG2E0vsU6 = (struct   student *) malloc (sizeof (struct   student));
        gets (Gj5xG2E0vsU6->yOuHW06d);
    }
    WkpAPd2->x0NjiIZmqCxh = NULL;
    for (l2MLZHq = (102 - 102); n > l2MLZHq; l2MLZHq = l2MLZHq + 1) {
        WkpAPd2 = Gj5xG2E0vsU6 = EFx302K4naC;
        for (; Gj5xG2E0vsU6->x0NjiIZmqCxh != NULL;) {
            WkpAPd2 = Gj5xG2E0vsU6;
            Gj5xG2E0vsU6 = Gj5xG2E0vsU6->x0NjiIZmqCxh;
        }
        if (!((232 - 232) != l2MLZHq))
            CKQWRrhDPk = yWqQs7c = Gj5xG2E0vsU6;
        else
            yWqQs7c = yWqQs7c->x0NjiIZmqCxh = Gj5xG2E0vsU6;
        WkpAPd2->x0NjiIZmqCxh = NULL;
    }
    Gj5xG2E0vsU6 = CKQWRrhDPk;
    for (l2MLZHq = (421 - 421); l2MLZHq < n; l2MLZHq++) {
        printf ("%s", Gj5xG2E0vsU6->yOuHW06d);
        Gj5xG2E0vsU6 = Gj5xG2E0vsU6->x0NjiIZmqCxh;
        printf ("\n");
    }
}

