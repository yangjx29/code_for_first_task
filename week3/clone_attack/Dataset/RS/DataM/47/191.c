void  main () {
    int n, EX84WvM;
    struct   number {
        int S7bmQkKWfOYp;
        struct   number *next;
    };
    struct   number *pF2AuTIq18Y = (56 - 56), *p;
    scanf ("%d", &n);
    for (EX84WvM = (981 - 980); EX84WvM <= n; EX84WvM = EX84WvM +1) {
        p = (struct   number *) malloc (sizeof (struct   number));
        scanf ("%d", &p->S7bmQkKWfOYp);
        if (EX84WvM == (354 - 353))
            p->next = 0;
        else
            p->next = pF2AuTIq18Y;
        pF2AuTIq18Y = p;
    }
    if (pF2AuTIq18Y != 0) {
        for (EX84WvM = 1; EX84WvM <= n; EX84WvM = EX84WvM +1) {
            printf ("%d", p->S7bmQkKWfOYp);
            if (EX84WvM < n)
                printf (" ");
            else
                ;
            p = p->next;
        };
    };
}

