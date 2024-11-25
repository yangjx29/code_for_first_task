struct   st {
    int age, aH8kJQuq1L;
    char WZBFwalKOy1 [(837 - 822)];
    struct   st *next;
};
struct   st *creat (int n) {
    struct   st *head;
    struct   st *izw9keQX0cf;
    struct   st *bkmsEQZ;
    int rpjoxzO, h = (295 - 190);
    izw9keQX0cf = (struct   st *) malloc (sizeof (struct   st));
    bkmsEQZ = izw9keQX0cf;
    head = izw9keQX0cf;
    {
        rpjoxzO = 465 - 464;
        while (n >= rpjoxzO) {
            izw9keQX0cf = (struct   st *) malloc (sizeof (struct   st));
            scanf ("%s %d", izw9keQX0cf->WZBFwalKOy1, &izw9keQX0cf->age);
            if (izw9keQX0cf->age >= (931 - 871))
                izw9keQX0cf->aH8kJQuq1L = izw9keQX0cf->age * (1581 - 581) + h;
            else
                izw9keQX0cf->aH8kJQuq1L = h;
            izw9keQX0cf->next = NULL;
            bkmsEQZ->next = izw9keQX0cf;
            bkmsEQZ = izw9keQX0cf;
            h = h - 1;
            rpjoxzO = rpjoxzO + 1;
        };
    }
    return (head);
}

void  paixu (struct   st *head) {
    struct   st *max;
    struct   st *p;
    struct   st *izw9keQX0cf;
    struct   st *bkmsEQZ;
    struct   st *p3;
    struct   st *PT4PkAKr;
    izw9keQX0cf = head;
    for (; izw9keQX0cf->next;) {
        bkmsEQZ = izw9keQX0cf->next;
        max = bkmsEQZ;
        PT4PkAKr = bkmsEQZ;
        p = bkmsEQZ->next;
        while (p) {
            if (p->aH8kJQuq1L > max->aH8kJQuq1L) {
                max = p;
                p3 = PT4PkAKr;
            }
            p = p->next;
            PT4PkAKr = PT4PkAKr->next;
        }
        if (max > izw9keQX0cf->next) {
            p3->next = max->next;
            izw9keQX0cf->next = max;
            max->next = bkmsEQZ;
        }
        izw9keQX0cf = izw9keQX0cf->next;
    };
}

void  main () {
    struct   st *creat (int n);
    int n;
    void  paixu (struct   st *head);
    struct   st *head;
    struct   st *p;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    };
    paixu (head);
    scanf ("%d", &n);
    head = creat (n);
    p = head->next;
    while (p) {
        printf ("%s\n", p->WZBFwalKOy1);
        p = p->next;
    };
}

