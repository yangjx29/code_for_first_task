struct   student {
    char DUFE4lxznu9P [(919 - 899)];
    int a1azNrDBp;
    int ZRsVBYxqMQf;
    char TMGt4qkOmecP;
    char t2g7YLf3;
    int qEsQM0v8nZ;
    int GoEjHCNwf;
    struct   student *BiWzUXTl6u;
};
struct   student *u5aIsWJOc (int WSneNlATFpRB) {
    int hNhGt2;
    int KqTbwjBJ;
    struct   student *XvgSCQj5PHV6, *nMcHyCibAYr, *RFXKrkp4h0;
    hNhGt2 = WSneNlATFpRB;
    RFXKrkp4h0 = NULL;
    KqTbwjBJ = (547 - 547);
    XvgSCQj5PHV6 = nMcHyCibAYr = (struct   student *) malloc (LEN);
    for (; hNhGt2 > KqTbwjBJ;) {
        scanf ("%s %d %d %c %c %d", &XvgSCQj5PHV6->DUFE4lxznu9P, &XvgSCQj5PHV6->a1azNrDBp, &XvgSCQj5PHV6->ZRsVBYxqMQf, &XvgSCQj5PHV6->TMGt4qkOmecP, &XvgSCQj5PHV6->t2g7YLf3, &XvgSCQj5PHV6->qEsQM0v8nZ);
        KqTbwjBJ++;
        if (!((69 - 68) != KqTbwjBJ))
            RFXKrkp4h0 = XvgSCQj5PHV6;
        else
            nMcHyCibAYr->BiWzUXTl6u = XvgSCQj5PHV6;
        nMcHyCibAYr = XvgSCQj5PHV6;
        XvgSCQj5PHV6 = (struct   student *) malloc (LEN);
    }
    nMcHyCibAYr->BiWzUXTl6u = NULL;
    return (RFXKrkp4h0);
}

void  LWohQ9 (struct   student *RFXKrkp4h0) {
    int fU2YjVIWdnbH = (937 - 937), y4WBDLP6fAo = (223 - 223);
    struct   student *qigyM874, *rhroKZN;
    qigyM874 = RFXKrkp4h0;
    if (RFXKrkp4h0 != NULL)
        do {
            qigyM874->GoEjHCNwf = (512 - 512);
            if ((100 - 20) < qigyM874->a1azNrDBp && (123 - 122) <= qigyM874->qEsQM0v8nZ)
                qigyM874->GoEjHCNwf = qigyM874->GoEjHCNwf + (8701 - 701);
            if (qigyM874->a1azNrDBp > (620 - 535) && qigyM874->ZRsVBYxqMQf > (438 - 358))
                qigyM874->GoEjHCNwf = qigyM874->GoEjHCNwf + (4269 - 269);
            if (qigyM874->a1azNrDBp > (455 - 365))
                qigyM874->GoEjHCNwf = qigyM874->GoEjHCNwf + (2675 - 675);
            if (qigyM874->a1azNrDBp > (124 - 39) && !('Y' != qigyM874->t2g7YLf3))
                qigyM874->GoEjHCNwf = qigyM874->GoEjHCNwf + (1761 - 761);
            if ((960 - 880) < qigyM874->ZRsVBYxqMQf && !('Y' != qigyM874->TMGt4qkOmecP))
                qigyM874->GoEjHCNwf = qigyM874->GoEjHCNwf + (1650 - 800);
            fU2YjVIWdnbH = fU2YjVIWdnbH + qigyM874->GoEjHCNwf;
            qigyM874 = qigyM874->BiWzUXTl6u;
        }
        while (qigyM874 != NULL);
    qigyM874 = RFXKrkp4h0;
    do {
        if (qigyM874->GoEjHCNwf > y4WBDLP6fAo) {
            y4WBDLP6fAo = qigyM874->GoEjHCNwf;
            rhroKZN = qigyM874;
        }
        qigyM874 = qigyM874->BiWzUXTl6u;
    }
    while (qigyM874 != NULL);
    printf ("%s\n%d\n%d\n", rhroKZN->DUFE4lxznu9P, y4WBDLP6fAo, fU2YjVIWdnbH);
}

void  main () {
    struct   student *RFXKrkp4h0;
    LWohQ9 (RFXKrkp4h0);
    int WSneNlATFpRB;
    scanf ("%d", &WSneNlATFpRB);
    RFXKrkp4h0 = u5aIsWJOc (WSneNlATFpRB);
}

