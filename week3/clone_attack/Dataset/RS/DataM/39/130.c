void  main () {
    int RSVKMA;
    int sum;
    int V2f7ckMzHS;
    int IG7vtW4z6;
    int i;
    RSVKMA = (84 - 84);
    sum = 0;
    V2f7ckMzHS = 0;
    struct   st {
        char na [30];
        int s1;
        int JBUIQsu5ztA;
        char x1;
        char jH6rFCXhpNqO;
        int l;
        int b;
        struct   st *next;
    }
    *ZWzwaVg78LH;
    struct   st {
        char na [30];
        int s1;
        int JBUIQsu5ztA;
        char x1;
        char jH6rFCXhpNqO;
        int l;
        int b;
        struct   st *next;
    }
    *MYz4sckL;
    struct   st {
        char na [30];
        int s1;
        int JBUIQsu5ztA;
        char x1;
        char jH6rFCXhpNqO;
        int l;
        int b;
        struct   st *next;
    }
    *p1;
    struct   st {
        char na [30];
        int s1;
        int JBUIQsu5ztA;
        char x1;
        char jH6rFCXhpNqO;
        int l;
        int b;
        struct   st *next;
    }
    *IYlJdiZ;
    struct   st {
        char na [30];
        int s1;
        int JBUIQsu5ztA;
        char x1;
        char jH6rFCXhpNqO;
        int l;
        int b;
        struct   st *next;
    }
    *Ww1EkbpG6;
    scanf ("%d", &IG7vtW4z6);
    p1 = IYlJdiZ = (struct   st *) malloc (sizeof (struct   st));
    MYz4sckL = p1;
    do {
        scanf ("%s %d %d %c %c %d", p1->na, &p1->s1, &p1->JBUIQsu5ztA, &p1->x1, &p1->jH6rFCXhpNqO, &p1->l);
        RSVKMA++;
        p1->b = 0;
        if ((933 - 853) < p1->s1 && (229 - 228) <= p1->l)
            p1->b = p1->b + 8000;
        if ((280 - 195) < p1->s1 && (519 - 439) < p1->JBUIQsu5ztA)
            p1->b = p1->b + 4000;
        if (90 < p1->s1)
            p1->b = p1->b + 2000;
        if (85 < p1->s1 && p1->jH6rFCXhpNqO == 'Y')
            p1->b = p1->b + 1000;
        if (p1->JBUIQsu5ztA > 80 && p1->x1 == 'Y')
            p1->b = p1->b + 850;
        p1 = (struct   st *) malloc (sizeof (struct   st));
        IYlJdiZ->next = p1;
        IYlJdiZ = p1;
    }
    while (RSVKMA != IG7vtW4z6);
    p1 = NULL;
    RSVKMA = 0;
    ZWzwaVg78LH = MYz4sckL;
    do {
        sum = sum + ZWzwaVg78LH->b;
        if (ZWzwaVg78LH->b > V2f7ckMzHS) {
            V2f7ckMzHS = ZWzwaVg78LH->b;
            Ww1EkbpG6 = ZWzwaVg78LH;
        }
        RSVKMA++;
        ZWzwaVg78LH = ZWzwaVg78LH->next;
    }
    while (RSVKMA != IG7vtW4z6);
    printf ("%s\n%d\n%d\n", Ww1EkbpG6->na, V2f7ckMzHS, sum);
}

