int sch (int, int, char [], char [], int);

void  main () {
    struct   student {
        char name [(998 - 978)];
        int ave;
        int E43iwyg;
        char gan [2];
        char xib [2];
        int pap;
        struct   student *abEVcq9;
    }
    *PCXu3SNVsAQc;
    struct   student {
        char name [(998 - 978)];
        int ave;
        int E43iwyg;
        char gan [2];
        char xib [2];
        int pap;
        struct   student *abEVcq9;
    }
    *ni72MN;
    struct   student {
        char name [(998 - 978)];
        int ave;
        int E43iwyg;
        char gan [2];
        char xib [2];
        int pap;
        struct   student *abEVcq9;
    }
    *head;
    struct   student {
        char name [(998 - 978)];
        int ave;
        int E43iwyg;
        char gan [2];
        char xib [2];
        int pap;
        struct   student *abEVcq9;
    }
    *p;
    int n, i, max, iQgSsIEm;
    scanf ("%d", &n);
    p = head = PCXu3SNVsAQc = ni72MN = (struct   student *) malloc (sizeof (struct   student));
    scanf ("%s", PCXu3SNVsAQc->name);
    scanf ("%d%d", &PCXu3SNVsAQc->ave, &PCXu3SNVsAQc->E43iwyg);
    scanf ("%s", PCXu3SNVsAQc->gan);
    scanf ("%s", PCXu3SNVsAQc->xib);
    scanf ("%d", &PCXu3SNVsAQc->pap);
    max = iQgSsIEm = sch (PCXu3SNVsAQc->ave, PCXu3SNVsAQc->E43iwyg, PCXu3SNVsAQc->gan, PCXu3SNVsAQc->xib, PCXu3SNVsAQc->pap);
    for (i = 2; n >= i; i = i + 1) {
        PCXu3SNVsAQc = (struct   student *) malloc (sizeof (struct   student));
        scanf ("%s", PCXu3SNVsAQc->name);
        scanf ("%d%d", &PCXu3SNVsAQc->ave, &PCXu3SNVsAQc->E43iwyg);
        scanf ("%s", PCXu3SNVsAQc->gan);
        scanf ("%s", PCXu3SNVsAQc->xib);
        scanf ("%d", &PCXu3SNVsAQc->pap);
        iQgSsIEm = iQgSsIEm + sch (PCXu3SNVsAQc->ave, PCXu3SNVsAQc->E43iwyg, PCXu3SNVsAQc->gan, PCXu3SNVsAQc->xib, PCXu3SNVsAQc->pap);
        if (sch (PCXu3SNVsAQc->ave, PCXu3SNVsAQc->E43iwyg, PCXu3SNVsAQc->gan, PCXu3SNVsAQc->xib, PCXu3SNVsAQc->pap) > max) {
            max = sch (PCXu3SNVsAQc->ave, PCXu3SNVsAQc->E43iwyg, PCXu3SNVsAQc->gan, PCXu3SNVsAQc->xib, PCXu3SNVsAQc->pap);
            p = PCXu3SNVsAQc;
        }
        ni72MN->abEVcq9 = PCXu3SNVsAQc;
        ni72MN = PCXu3SNVsAQc;
    }
    ni72MN->abEVcq9 = NULL;
    printf ("%s\n%d\n%d\n", p->name, max, iQgSsIEm);
}

int sch (int ave, int E43iwyg, char gan [], char xib [], int pap) {
    int iQgSsIEm;
    iQgSsIEm = 0;
    if ((609 - 529) < ave && pap >= 1)
        iQgSsIEm = iQgSsIEm + 8000;
    if (ave > (577 - 492) && E43iwyg > 80)
        iQgSsIEm = iQgSsIEm + (4564 - 564);
    if (ave > 90)
        iQgSsIEm = iQgSsIEm + 2000;
    if (ave > 85 && strcmp (xib, "Y") == 0)
        iQgSsIEm = iQgSsIEm + 1000;
    if (E43iwyg > 80 && strcmp (gan, "Y") == 0)
        iQgSsIEm = iQgSsIEm + 850;
    return (iQgSsIEm);
}

