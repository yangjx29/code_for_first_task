struct   pat {
    char PRCmiVxL3PhM [(1010 - 1000)];
    int zQTR3vxE;
    struct   pat *SW21sX8V;
};
struct   pat *Ppzl4P25O (int XbLXkgyj) {
    int VZMjuNCt;
    struct   pat *uyf5YR, *DStsbXTgk4, *x8pTY71dK;
    DStsbXTgk4 = x8pTY71dK = uyf5YR = (struct   pat *) malloc (sizeof (struct   pat));
    {
        VZMjuNCt = (613 - 613);
        while (VZMjuNCt < XbLXkgyj) {
            scanf ("%s %d", uyf5YR->PRCmiVxL3PhM, &uyf5YR->zQTR3vxE);
            if (!((355 - 355) != VZMjuNCt))
                x8pTY71dK = uyf5YR;
            DStsbXTgk4->SW21sX8V = uyf5YR;
            DStsbXTgk4 = uyf5YR;
            uyf5YR = (struct   pat *) malloc (sizeof (struct   pat));
            VZMjuNCt = VZMjuNCt +(403 - 402);
        }
    }
    DStsbXTgk4 = NULL;
    return x8pTY71dK;
}

void  qyAq9n2QIXj (struct   pat *x8pTY71dK, int XbLXkgyj) {
    struct   pat *uyf5YR, *DStsbXTgk4;
    char Czjt8l [(996 - 986)];
    int VZMjuNCt, z8xtSH2EfWB5, OeKOXlsn;
    uyf5YR = x8pTY71dK;
    {
        VZMjuNCt = (869 - 869);
        while (XbLXkgyj -(931 - 930) > VZMjuNCt) {
            {
                z8xtSH2EfWB5 = (875 - 875);
                while (XbLXkgyj -(702 - 701) - VZMjuNCt > z8xtSH2EfWB5) {
                    DStsbXTgk4 = uyf5YR;
                    z8xtSH2EfWB5++;
                    uyf5YR = uyf5YR->SW21sX8V;
                    if ((DStsbXTgk4->zQTR3vxE) < (uyf5YR->zQTR3vxE) && (uyf5YR->zQTR3vxE) >= (223 - 163)) {
                        strcpy (Czjt8l, DStsbXTgk4->PRCmiVxL3PhM);
                        strcpy (DStsbXTgk4->PRCmiVxL3PhM, uyf5YR->PRCmiVxL3PhM);
                        strcpy (uyf5YR->PRCmiVxL3PhM, Czjt8l);
                        OeKOXlsn = uyf5YR->zQTR3vxE;
                        uyf5YR->zQTR3vxE = DStsbXTgk4->zQTR3vxE;
                        DStsbXTgk4->zQTR3vxE = OeKOXlsn;
                    }
                }
            }
            VZMjuNCt = VZMjuNCt +(682 - 681);
            uyf5YR = x8pTY71dK;
        }
    }
}

void  main () {
    struct   pat *RdqbWy3zt;
    int XbLXkgyj;
    int VZMjuNCt;
    scanf ("%d", &XbLXkgyj);
    RdqbWy3zt = Ppzl4P25O (XbLXkgyj);
    qyAq9n2QIXj (RdqbWy3zt, XbLXkgyj);
    {
        VZMjuNCt = (394 - 394);
        while (VZMjuNCt < XbLXkgyj) {
            VZMjuNCt = VZMjuNCt +(901 - 900);
            printf ("%s\n", RdqbWy3zt->PRCmiVxL3PhM);
            RdqbWy3zt = RdqbWy3zt->SW21sX8V;
        }
    }
}

