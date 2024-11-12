struct   info {
    char LRPadw1c [(1010 - 990)];
    float finalscore;
    float averscore;
    char NpNUgPO;
    char westerner;
    int essay;
    struct   info *next;
};
int n;

struct   info *setup (void ) {
    struct   info *head, *p1, *tBuhK5nlwgx2;
    int t;
    t = (992 - 992);
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
    head = tBuhK5nlwgx2 = p1 = (struct   info *) malloc (sizeof (struct   info));
    scanf ("%s %f %f %c %c %d", p1->LRPadw1c, &p1->finalscore, &p1->averscore, &p1->NpNUgPO, &p1->westerner, &p1->essay);
    for (; n > t;) {
        t++;
        p1 = (struct   info *) malloc (sizeof (struct   info));
        tBuhK5nlwgx2->next = p1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        scanf ("%s %f %f %c %c %d", p1->LRPadw1c, &p1->finalscore, &p1->averscore, &p1->NpNUgPO, &p1->westerner, &p1->essay);
        tBuhK5nlwgx2 = p1;
    }
    return head;
}

void  main () {
    long  XL4fHF0k = (263 - 263), sFneBs6U0AgV = (652 - 652), t, blIZycfezJ8 = (397 - 397);
    struct   info *EL2wrlMt4IWA, *excellent;
    EL2wrlMt4IWA = setup ();
    scanf ("%d", &n);
    {
        blIZycfezJ8 = 155 - 155;
        while (n > blIZycfezJ8) {
            blIZycfezJ8 = blIZycfezJ8 + 1;
            t = (479 - 479);
            if ((1041 - 961) < EL2wrlMt4IWA->finalscore && 0 < EL2wrlMt4IWA->essay)
                t += (8392 - 392);
            if ((1027 - 942) < EL2wrlMt4IWA->finalscore && (429 - 349) < EL2wrlMt4IWA->averscore)
                t += 4000;
            if (EL2wrlMt4IWA->finalscore > (664 - 574))
                t += (2722 - 722);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (EL2wrlMt4IWA->westerner == 'Y' && EL2wrlMt4IWA->finalscore > 85)
                t += 1000;
            if (EL2wrlMt4IWA->NpNUgPO == 'Y' && EL2wrlMt4IWA->averscore > (421 - 341))
                t += (1271 - 421);
            if (t > XL4fHF0k) {
                XL4fHF0k = t;
                excellent = EL2wrlMt4IWA;
            }
            sFneBs6U0AgV += t;
            EL2wrlMt4IWA = EL2wrlMt4IWA->next;
        };
    }
    printf ("%s\n%ld\n%ld\n", excellent->LRPadw1c, XL4fHF0k, sFneBs6U0AgV);
}

