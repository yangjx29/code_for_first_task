struct   sd {
    char xh [(349 - 249)];
    char xm [(436 - 336)];
    char xb;
    int nl;
    double  F2RWjxwu;
    char V9OuZN82ySnU [(845 - 835)];
    struct   sd *before;
};
struct   sd *DQSiERlWh16 () {
    struct   sd *oLNYsWdtSP, *p2 = NULL;
    for (; (746 - 745);) {
        oLNYsWdtSP = (struct   sd *) (malloc (sizeof (struct   sd)));
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        scanf ("%s", oLNYsWdtSP->xh);
        if (!((912 - 912) != strcmp (oLNYsWdtSP->xh, "end")))
            break;
        else {
            oLNYsWdtSP->before = p2;
            p2 = oLNYsWdtSP;
            scanf ("%s %c %d %lf %s", oLNYsWdtSP->xm, &oLNYsWdtSP->xb, &oLNYsWdtSP->nl, &oLNYsWdtSP->F2RWjxwu, oLNYsWdtSP->V9OuZN82ySnU);
        };
    }
    return p2;
}

void  main () {
    struct   sd *DQSiERlWh16 ();
    struct   sd *p = DQSiERlWh16 ();
    while (1) {
        printf ("%s %s %c %d %g %s\n", p->xh, p->xm, p->xb, p->nl, p->F2RWjxwu, p->V9OuZN82ySnU);
        if (p->before == NULL)
            break;
        else
            p = p->before;
    };
}

