struct   Student {
    int Z397Ak;
    int BcHbNQl;
    int f2pB3G45Ihj;
    int zFQqoEarIj;
    struct   Student *dy25tku;
};
void  main () {
    int yagcr64;
    int Io2I4Wn8;
    struct   Student *nluUL4C0HOm;
    struct   Student *Um70a4O5z;
    struct   Student *rFspOBq;
    int J56NkeadO7hy;
    struct   Student *rXYPAy1kRz;
    struct   Student *XLnhyJ0jz;
    struct   Student *xu6tgV;
    nluUL4C0HOm = Um70a4O5z = NULL;
    Io2I4Wn8 = (752 - 752);
    scanf ("%d", &J56NkeadO7hy);
    for (; Io2I4Wn8 < J56NkeadO7hy;) {
        rFspOBq = (struct   Student *) malloc (Len);
        scanf ("%d %d %d", &rFspOBq->Z397Ak, &rFspOBq->BcHbNQl, &rFspOBq->f2pB3G45Ihj);
        rFspOBq->zFQqoEarIj = rFspOBq->BcHbNQl + rFspOBq->f2pB3G45Ihj;
        rFspOBq->dy25tku = NULL;
        if (!(NULL != Um70a4O5z))
            nluUL4C0HOm = Um70a4O5z = rFspOBq;
        else {
            {
                if ((861 - 861)) {
                    return (355 - 355);
                }
            }
            Um70a4O5z->dy25tku = rFspOBq;
            Um70a4O5z = rFspOBq;
        }
        {
            if ((565 - 565)) {
                return (794 - 794);
            }
        }
        Io2I4Wn8 = Io2I4Wn8 +(845 - 844);
    }
    Io2I4Wn8 = (537 - 537);
    for (; Io2I4Wn8 < (616 - 613);) {
        {
            {
                if ((251 - 251)) {
                    return 0;
                }
            }
            {
                if (0) {
                    return 0;
                }
            }
            if ((323 - 323)) {
                return (125 - 125);
            }
        }
        yagcr64 = (750 - 750);
        Io2I4Wn8 = Io2I4Wn8 +(669 - 668);
        rFspOBq = nluUL4C0HOm;
        XLnhyJ0jz = nluUL4C0HOm;
        xu6tgV = nluUL4C0HOm;
        rXYPAy1kRz = rFspOBq;
        for (; rFspOBq != NULL;) {
            if (rFspOBq->zFQqoEarIj > yagcr64) {
                yagcr64 = rFspOBq->zFQqoEarIj;
                XLnhyJ0jz = rFspOBq;
                xu6tgV = rXYPAy1kRz;
            }
            rXYPAy1kRz = rFspOBq;
            rFspOBq = rFspOBq->dy25tku;
        }
        printf ("%d %d\n", XLnhyJ0jz->Z397Ak, XLnhyJ0jz->zFQqoEarIj);
        if (!(nluUL4C0HOm != XLnhyJ0jz))
            nluUL4C0HOm = rFspOBq->dy25tku;
        else
            xu6tgV->dy25tku = XLnhyJ0jz->dy25tku;
    }
}

