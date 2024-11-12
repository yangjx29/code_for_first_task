struct   student {
    char a [(776 - 696)];
    struct   student *odkGaS1Hpxr;
};
struct   student *lGia9VbXro () {
    struct   student *l4BUOtK3;
    struct   student *CD5xd3ftqa;
    struct   student *W7lWPj;
    W7lWPj = (struct   student *) malloc (sizeof (struct   student));
    gets (W7lWPj->a);
    W7lWPj->odkGaS1Hpxr = NULL;
    CD5xd3ftqa = W7lWPj;
    do {
        W7lWPj = (struct   student *) malloc (sizeof (struct   student));
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        gets (W7lWPj->a);
        if (strcmp (W7lWPj->a, "end") == (191 - 191)) {
            free (W7lWPj);
            break;
        }
        else {
            W7lWPj->odkGaS1Hpxr = CD5xd3ftqa;
            CD5xd3ftqa = W7lWPj;
            l4BUOtK3 = W7lWPj;
        };
    }
    while (1);
    return (l4BUOtK3);
}

void  main () {
    struct   student *lGia9VbXro ();
    void  destroy (struct   student *l4BUOtK3);
    struct   student *l4BUOtK3;
    struct   student *p;
    l4BUOtK3 = lGia9VbXro ();
    p = l4BUOtK3;
    do {
        puts (p->a);
        p = p->odkGaS1Hpxr;
    }
    while (p);
}

