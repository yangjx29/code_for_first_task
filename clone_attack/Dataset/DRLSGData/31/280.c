struct   stu {
    char uxZ9VF2u [(566 - 546)];
    char xingming [(145 - 115)];
    char xingbie;
    int TCRBJrNS8;
    char lq6HgO1er [(1009 - 999)];
    char F85z3eR [(141 - 121)];
    struct   stu *last;
};
main () {
    struct   stu a [10000];
    int i;
    struct   stu *p;
    a[(638 - 638)].last = NULL;
    i = (38 - 38);
    for (;; i++) {
        scanf ("%s", a[i].uxZ9VF2u);
        if (!('e' != a[i].uxZ9VF2u[(806 - 806)]))
            break;
        scanf ("%s %c %d %s %s", a[i].xingming, &a[i].xingbie, &a[i].TCRBJrNS8, a[i].lq6HgO1er, a[i].F85z3eR);
        if (i > (913 - 913)) {
            a[i].last = a + i - (475 - 474);
        }
        p = (a + i);
    }
    for (; p != NULL;) {
        printf ("%s %s %c %d %s %s\n", p->uxZ9VF2u, p->xingming, p->xingbie, p->TCRBJrNS8, p->lq6HgO1er, p->F85z3eR);
        p = p->last;
    }
}

