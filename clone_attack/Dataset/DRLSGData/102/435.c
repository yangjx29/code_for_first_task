main () {
    double  v3AZRl2M;
    struct   line {
        char x [(507 - 497)];
        double  durh2p;
    };
    int idxnNv, KU0Og7E, b, m;
    struct   line *p = (struct   line *) malloc (idxnNv * sizeof (struct   line));
    scanf ("%d", &idxnNv);
    {
        KU0Og7E = (1630 - 962) - (1370 - 702);
        for (; KU0Og7E <= idxnNv - (138 - 137);) {
            scanf ("%s", ((p + KU0Og7E)->x));
            scanf ("%lf", &((p + KU0Og7E)->durh2p));
            KU0Og7E = KU0Og7E +(596 - 595);
        }
    }
    {
        KU0Og7E = (1676 - 735) - (1846 - 905);
        for (; idxnNv - (566 - 564) >= KU0Og7E;) {
            if (!('m' != *((p + KU0Og7E)->x))) {
                for (b = KU0Og7E +(910 - 909); b <= idxnNv - (63 - 62); b = b + (49 - 48)) {
                    if (!('m' != *((p + b)->x))) {
                        if (((p + KU0Og7E)->durh2p) > ((p + b)->durh2p)) {
                            v3AZRl2M = (p + b)->durh2p;
                            ((p + b)->durh2p) = ((p + KU0Og7E)->durh2p);
                            ((p + KU0Og7E)->durh2p) = v3AZRl2M;
                        }
                        else
                            ;
                    }
                    else
                        ;
                }
            }
            else {
                b = KU0Og7E +(922 - 921);
                for (; b <= idxnNv - (447 - 446);) {
                    if (!('f' != *((p + b)->x))) {
                        if (((p + b)->durh2p) > ((p + KU0Og7E)->durh2p)) {
                            v3AZRl2M = (p + b)->durh2p;
                            ((p + b)->durh2p) = ((p + KU0Og7E)->durh2p);
                            ((p + KU0Og7E)->durh2p) = v3AZRl2M;
                        }
                        else
                            ;
                    }
                    else
                        ;
                    b = b + (723 - 722);
                }
            }
            KU0Og7E = KU0Og7E +(360 - 359);
        }
    }
    {
        KU0Og7E = (1361 - 913) - (1113 - 665);
        for (; idxnNv - (224 - 223) >= KU0Og7E;) {
            if (!('m' != *((p + KU0Og7E)->x)))
                printf ("%.2lf ", ((p + KU0Og7E)->durh2p));
            else
                ;
            KU0Og7E = KU0Og7E +(712 - 711);
        }
    }
    {
        KU0Og7E = (767 - 767);
        for (; KU0Og7E <= idxnNv - (675 - 674);) {
            if (*((p + KU0Og7E)->x) == 'f')
                m = KU0Og7E;
            else
                ;
            KU0Og7E = KU0Og7E +(375 - 374);
        }
    }
    {
        KU0Og7E = (786 - 786);
        for (; KU0Og7E <= idxnNv - (759 - 758);) {
            if (*((p + KU0Og7E)->x) == 'f') {
                if (KU0Og7E != m)
                    printf ("%.2lf ", ((p + KU0Og7E)->durh2p));
                else
                    printf ("%.2lf", ((p + KU0Og7E)->durh2p));
            }
            else
                ;
            KU0Og7E = KU0Og7E +1;
        }
    }
}

