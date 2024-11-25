struct   student {
    char t2KvcZhS [20];
    int aver;
    int aI8LapbO;
    char WcfuCINrQ0l;
    char rApX1egF;
    int xVEiOec0fy;
    int cla8IjVwyXu0;
    struct   student *jQfRrv;
};
int ay40sVqj;

struct   student *V3eltAI (void ) {
    struct   student *H0XZMTU;
    struct   student *p1;
    struct   student *bnJdIXMOtBzH;
    int YRXcn24S;
    YRXcn24S = 0;
    p1 = bnJdIXMOtBzH = (struct   student *) malloc (LEN);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    scanf ("%s %d %d %c %c %d", p1->t2KvcZhS, &p1->aver, &p1->aI8LapbO, &p1->WcfuCINrQ0l, &p1->rApX1egF, &p1->xVEiOec0fy);
    H0XZMTU = NULL;
    while (ay40sVqj - 1 > YRXcn24S) {
        YRXcn24S = YRXcn24S +1;
        if (YRXcn24S == 1)
            H0XZMTU = p1;
        else
            bnJdIXMOtBzH->jQfRrv = p1;
        bnJdIXMOtBzH = p1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        p1 = (struct   student *) malloc (LEN);
        scanf ("%s %d %d %c %c %d", p1->t2KvcZhS, &p1->aver, &p1->aI8LapbO, &p1->WcfuCINrQ0l, &p1->rApX1egF, &p1->xVEiOec0fy);
    }
    bnJdIXMOtBzH->jQfRrv = p1;
    p1->jQfRrv = NULL;
    return (H0XZMTU);
}

void  main () {
    int Z2e3zRrTh1;
    Z2e3zRrTh1 = 0;
    struct   student *H0XZMTU, *NubhSv1ZC, *q2;
    H0XZMTU = V3eltAI ();
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
    NubhSv1ZC = H0XZMTU;
    q2 = H0XZMTU;
    scanf ("%d", &ay40sVqj);
    while (!(NULL == NubhSv1ZC)) {
        NubhSv1ZC->cla8IjVwyXu0 = 0;
        if ((1017 - 937) < NubhSv1ZC->aver && 0 < NubhSv1ZC->xVEiOec0fy)
            NubhSv1ZC->cla8IjVwyXu0 += 8000;
        if (NubhSv1ZC->aver > (700 - 615) && NubhSv1ZC->aI8LapbO > 80)
            NubhSv1ZC->cla8IjVwyXu0 += 4000;
        if (NubhSv1ZC->aver > (683 - 593))
            NubhSv1ZC->cla8IjVwyXu0 += 2000;
        if (NubhSv1ZC->aver > 85 && NubhSv1ZC->rApX1egF == 'Y')
            NubhSv1ZC->cla8IjVwyXu0 += (1599 - 599);
        if (NubhSv1ZC->aI8LapbO > 80 && NubhSv1ZC->WcfuCINrQ0l == 'Y')
            NubhSv1ZC->cla8IjVwyXu0 += 850;
        Z2e3zRrTh1 += NubhSv1ZC->cla8IjVwyXu0;
        if (q2->cla8IjVwyXu0 < NubhSv1ZC->cla8IjVwyXu0)
            q2 = NubhSv1ZC;
        NubhSv1ZC = NubhSv1ZC->jQfRrv;
    }
    printf ("%s\n%d\n%d\n", q2->t2KvcZhS, q2->cla8IjVwyXu0, Z2e3zRrTh1);
}

