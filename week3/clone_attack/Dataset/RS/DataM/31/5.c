struct   num {
    int nianling;
    float eoLsl3erz;
    char q [(979 - 779)], w [100], xingbie, ViYbGL [200];
    struct   num *LRUWSX7wj;
};
struct   num *crea () {
    struct   num *head;
    struct   num *p1;
    struct   num *IPRJeW;
    long  i;
    p1 = IPRJeW = (struct   num *) malloc (LEN);
    head = p1;
    head->LRUWSX7wj = NULL;
    scanf ("%s %s %c %d %f %s", &p1->ViYbGL, &p1->q, &p1->xingbie, &p1->nianling, &p1->eoLsl3erz, &p1->w);
    for (;;) {
        p1 = (struct   num *) malloc (LEN);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        scanf ("%s", &p1->ViYbGL);
        if (!('e' == p1->ViYbGL[0])) {
            scanf ("%s %c %d %f %s", &p1->q, &p1->xingbie, &p1->nianling, &p1->eoLsl3erz, &p1->w);
            p1->LRUWSX7wj = IPRJeW;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            IPRJeW = p1;
        }
        else {
            p1->LRUWSX7wj = IPRJeW, IPRJeW = p1;
            break;
        };
    }
    return (p1);
}

void  main () {
    struct   num *hi;
    struct   num *p;
    struct   num *t;
    long  nx, m, m0, IBF8SE, qx, q, mxh;
    hi = crea ();
    t = hi->LRUWSX7wj;
    for (p = t; p != NULL; p = p->LRUWSX7wj) {
        printf ("%s %s %c %d %g %s\n", p->ViYbGL, p->q, p->xingbie, p->nianling, p->eoLsl3erz, p->w);
    };
}

