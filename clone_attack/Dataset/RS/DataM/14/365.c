int BwejIkazF = (663 - 663);
struct   student {
    char pkN1m9rlUf [20];
    int si0nKBRUZbg;
    int math;
    int AAW3uVb;
    int W5pPZH;
    struct   student *h0G3fk;
};
struct   student *h;
int fjUS4qlt21L, i;

struct   student *e8n3f25 () {
    struct   student *R9O8z4;
    struct   student *ETsOR0Lc;
    struct   student *p2;
    R9O8z4 = NULL;
    ETsOR0Lc = p2 = (struct   student *) malloc (LEN);
    scanf ("%s %d %d", ETsOR0Lc->pkN1m9rlUf, &ETsOR0Lc->si0nKBRUZbg, &ETsOR0Lc->math);
    ETsOR0Lc->AAW3uVb = ETsOR0Lc->si0nKBRUZbg + ETsOR0Lc->math;
    ETsOR0Lc->W5pPZH = (739 - 739);
    i = (860 - 860);
    while (i < fjUS4qlt21L) {
        i = i + (53 - 52);
        if (!((568 - 567) != i))
            R9O8z4 = ETsOR0Lc;
        else
            p2->h0G3fk = ETsOR0Lc;
        p2 = ETsOR0Lc;
        ETsOR0Lc = (struct   student *) malloc (LEN);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        scanf ("%s %d %d", ETsOR0Lc->pkN1m9rlUf, &ETsOR0Lc->si0nKBRUZbg, &ETsOR0Lc->math);
        ETsOR0Lc->AAW3uVb = ETsOR0Lc->si0nKBRUZbg + ETsOR0Lc->math;
        ETsOR0Lc->W5pPZH = 0;
    }
    p2->h0G3fk = NULL;
    return (R9O8z4);
}

struct   student *HOVofP4qu () {
    struct   student *ETsOR0Lc;
    struct   student *IFUzx7pgRW5;
    ETsOR0Lc = h;
    BwejIkazF = ETsOR0Lc->AAW3uVb;
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
    do {
        if (BwejIkazF &&(!(0 != ETsOR0Lc->W5pPZH)) < ETsOR0Lc->AAW3uVb)
            BwejIkazF = ETsOR0Lc->AAW3uVb;
        ETsOR0Lc = ETsOR0Lc->h0G3fk;
    }
    while (ETsOR0Lc->h0G3fk != NULL);
    ETsOR0Lc = h;
    do {
        if (ETsOR0Lc->AAW3uVb == BwejIkazF &&(ETsOR0Lc->W5pPZH == 0)) {
            IFUzx7pgRW5 = ETsOR0Lc;
            ETsOR0Lc->W5pPZH = 1;
            break;
        }
        ETsOR0Lc = ETsOR0Lc->h0G3fk;
    }
    while (ETsOR0Lc->h0G3fk != NULL);
    return (IFUzx7pgRW5);
}

void  main () {
    struct   student *p;
    int zdqA59c1;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    {
        zdqA59c1 = 1;
        while (zdqA59c1 <= 3) {
            zdqA59c1 = zdqA59c1 + 1;
            p = HOVofP4qu ();
            printf ("%s %d\n", p->pkN1m9rlUf, p->AAW3uVb);
        };
    }
    h = e8n3f25 ();
    scanf ("%d", &fjUS4qlt21L);
}

