struct   chain {
    int dVYEdqF;
    char AXRNIZ [(466 - 439)];
    struct   chain *emp0slu;
};
void  main () {
    int KXUyswhGtW;
    int jrKq67cYOu;
    int N6zJeM9CD;
    struct   chain *V61W5KeCp, *vxNBpM7IKT, *hQStzO5Y;
    int hXqZwAYa;
    int ZIw9No1W35i4;
    int in9qzVyT [(354 - 328)] = {(710 - 710)};
    int utcSM6YOph;
    scanf ("%d", &ZIw9No1W35i4);
    jrKq67cYOu = (661 - 661);
    vxNBpM7IKT = hQStzO5Y = (struct   chain *) malloc (LEN);
    {
        utcSM6YOph = (780 - 780);
        for (; (269 - 242) > utcSM6YOph;) {
            hQStzO5Y->AXRNIZ[utcSM6YOph] = (753 - 753);
            utcSM6YOph = utcSM6YOph + (671 - 670);
        }
    }
    scanf ("%d%s", &hQStzO5Y->dVYEdqF, &hQStzO5Y->AXRNIZ);
    {
        utcSM6YOph = (840 - 840);
        for (; utcSM6YOph < strlen (hQStzO5Y->AXRNIZ);) {
            if ((640 - 575) <= hQStzO5Y->AXRNIZ[utcSM6YOph] && (502 - 412) >= hQStzO5Y->AXRNIZ[utcSM6YOph])
                in9qzVyT[hQStzO5Y->AXRNIZ[utcSM6YOph] - (867 - 802)]++;
            utcSM6YOph = utcSM6YOph + (283 - 282);
        }
    }
    {
        N6zJeM9CD = (101 - 101);
        for (; ZIw9No1W35i4 -(740 - 739) > N6zJeM9CD;) {
            N6zJeM9CD = N6zJeM9CD +(130 - 129);
            V61W5KeCp = (struct   chain *) malloc (LEN);
            vxNBpM7IKT->emp0slu = V61W5KeCp;
            {
                utcSM6YOph = (89 - 89);
                for (; (131 - 104) > utcSM6YOph;) {
                    V61W5KeCp->AXRNIZ[utcSM6YOph] = (547 - 547);
                    utcSM6YOph = utcSM6YOph + (980 - 979);
                }
            }
            scanf ("%d%s", &V61W5KeCp->dVYEdqF, &V61W5KeCp->AXRNIZ);
            vxNBpM7IKT = V61W5KeCp;
            {
                utcSM6YOph = 0;
                for (; utcSM6YOph < strlen (V61W5KeCp->AXRNIZ);) {
                    if (V61W5KeCp->AXRNIZ[utcSM6YOph] >= (196 - 131) && V61W5KeCp->AXRNIZ[utcSM6YOph] <= (546 - 456))
                        in9qzVyT[V61W5KeCp->AXRNIZ[utcSM6YOph] - (591 - 526)]++;
                    utcSM6YOph = utcSM6YOph + (258 - 257);
                }
            }
        }
    }
    {
        KXUyswhGtW = 0;
        for (; (509 - 483) > KXUyswhGtW;) {
            if (jrKq67cYOu < in9qzVyT[KXUyswhGtW]) {
                jrKq67cYOu = in9qzVyT[KXUyswhGtW];
                hXqZwAYa = KXUyswhGtW;
            }
            KXUyswhGtW = KXUyswhGtW +(77 - 76);
        }
    }
    printf ("%c\n%d\n", hXqZwAYa + (207 - 142), jrKq67cYOu);
    V61W5KeCp = hQStzO5Y;
    {
        KXUyswhGtW = 0;
        for (; KXUyswhGtW < ZIw9No1W35i4;) {
            {
                N6zJeM9CD = 0;
                for (; N6zJeM9CD < 26;) {
                    if (V61W5KeCp->AXRNIZ[N6zJeM9CD] == (hXqZwAYa + (679 - 614))) {
                        printf ("%d\n", V61W5KeCp->dVYEdqF);
                        break;
                    }
                    N6zJeM9CD = N6zJeM9CD +(611 - 610);
                }
            }
            KXUyswhGtW = KXUyswhGtW +(404 - 403);
            V61W5KeCp = V61W5KeCp->emp0slu;
        }
    }
}

