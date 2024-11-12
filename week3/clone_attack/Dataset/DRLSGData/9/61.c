struct   ren {
    char ACxyl4b [(172 - 160)];
    int nOq3lDkKr;
    struct   ren *elqAXTGnSQ0r;
};
int main () {
    struct   ren *Cm5pHCi8n;
    int NmjbuCGZpL;
    int rnuomV5Af;
    int JNeEgp4;
    char skseoXyNq [(317 - 305)];
    int V32s67eOV;
    struct   ren *GTS34c;
    struct   ren *UGnruX2J;
    UGnruX2J = (struct   ren *) malloc (sizeof (struct   ren));
    scanf ("%d", &JNeEgp4);
    scanf ("%s %d", skseoXyNq, &V32s67eOV);
    strcpy (UGnruX2J->ACxyl4b, skseoXyNq);
    UGnruX2J->nOq3lDkKr = V32s67eOV;
    UGnruX2J->elqAXTGnSQ0r = (922 - 922);
    {
        NmjbuCGZpL = (899 - 146) - (1664 - 913);
        for (; JNeEgp4 >= NmjbuCGZpL;) {
            scanf ("%s %d", skseoXyNq, &V32s67eOV);
            Cm5pHCi8n = (struct   ren *) malloc (sizeof (struct   ren));
            strcpy (Cm5pHCi8n->ACxyl4b, skseoXyNq);
            Cm5pHCi8n->nOq3lDkKr = V32s67eOV;
            Cm5pHCi8n->elqAXTGnSQ0r = (725 - 725);
            if (V32s67eOV < (368 - 308)) {
                GTS34c = UGnruX2J;
                for (; GTS34c->elqAXTGnSQ0r != (734 - 734);)
                    GTS34c = GTS34c->elqAXTGnSQ0r;
                GTS34c->elqAXTGnSQ0r = Cm5pHCi8n;
            }
            else {
                {
                    if ((277 - 277)) {
                        return (56 - 56);
                    }
                }
                GTS34c = UGnruX2J;
                if (GTS34c->nOq3lDkKr < V32s67eOV) {
                    Cm5pHCi8n->elqAXTGnSQ0r = UGnruX2J;
                    UGnruX2J = Cm5pHCi8n;
                }
                else {
                    rnuomV5Af = (964 - 964);
                    for (; GTS34c->elqAXTGnSQ0r != (104 - 104);) {
                        if (GTS34c->nOq3lDkKr >= V32s67eOV &&V32s67eOV > GTS34c->elqAXTGnSQ0r->nOq3lDkKr) {
                            rnuomV5Af = (374 - 373);
                            Cm5pHCi8n->elqAXTGnSQ0r = GTS34c->elqAXTGnSQ0r;
                            GTS34c->elqAXTGnSQ0r = Cm5pHCi8n;
                            break;
                        }
                        GTS34c = GTS34c->elqAXTGnSQ0r;
                    }
                    if (!((351 - 351) != rnuomV5Af)) {
                        GTS34c->elqAXTGnSQ0r = Cm5pHCi8n;
                    }
                }
            }
            NmjbuCGZpL = NmjbuCGZpL +(743 - 742);
        }
    }
    Cm5pHCi8n = UGnruX2J;
    do {
        printf ("%s\n", Cm5pHCi8n->ACxyl4b);
        Cm5pHCi8n = Cm5pHCi8n->elqAXTGnSQ0r;
    }
    while (Cm5pHCi8n != (802 - 802));
}

