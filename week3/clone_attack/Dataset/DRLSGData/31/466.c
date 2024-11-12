struct   student {
    char nSYpqd84JWe9 [(113 - 104)];
    char q6EiXNvV [(593 - 573)];
    char BM8UqcyzWZkd [(554 - 553)];
    int B7JLOkHBcv4G;
    float IyreEL;
    char NIw20zUhEoc [20];
    struct   student *xsI0xV;
};
int KFztMciLB38w;

void  main () {
    int dBtVWRjsHyJ;
    struct   student *p1;
    struct   student *bOEqkQhrd;
    struct   student *muRfP73mVOA;
    muRfP73mVOA = NULL;
    p1 = bOEqkQhrd = (struct   student *) malloc (LEN);
    KFztMciLB38w = (248 - 248);
    for (KFztMciLB38w = (277 - 277);;) {
        p1 = (struct   student *) malloc (LEN);
        KFztMciLB38w = KFztMciLB38w +1;
        if (KFztMciLB38w == 1) {
            bOEqkQhrd->xsI0xV = NULL;
        }
        {
            scanf ("%s", p1->nSYpqd84JWe9);
            if (p1->nSYpqd84JWe9[(260 - 260)] != 'e') {
                scanf ("%s%s%d%f%s", p1->q6EiXNvV, p1->BM8UqcyzWZkd, &p1->B7JLOkHBcv4G, &p1->IyreEL, p1->NIw20zUhEoc);
                p1->xsI0xV = bOEqkQhrd;
                bOEqkQhrd = p1;
            }
            else {
                muRfP73mVOA = bOEqkQhrd;
                break;
            }
        }
    }
    p1 = muRfP73mVOA;
    for (dBtVWRjsHyJ = 0; p1->xsI0xV != NULL; dBtVWRjsHyJ = dBtVWRjsHyJ + 1) {
        printf ("%s %s %s %d %g %s\n", p1->nSYpqd84JWe9, p1->q6EiXNvV, p1->BM8UqcyzWZkd, p1->B7JLOkHBcv4G, p1->IyreEL, p1->NIw20zUhEoc);
        p1 = p1->xsI0xV;
    }
}

