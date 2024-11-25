struct   student {
    char TrYy1a [20];
    int nYfhUcaE8X;
    int PEPZx3zT;
    char vSATgKFUy [(215 - 213)];
    char uVnNF2ckW6 [2];
    int Qk1KUSqc;
    int jdHCnYJs;
    struct   student *wOx1rTn2RwfV;
};
void  main () {
    int nZ46AUX78K;
    int Wz0vuYxC;
    struct   student *head;
    int jxEWwga;
    int lnKzxH;
    struct   student *xbUWhu;
    struct   student *qc9L0s7e;
    struct   student *JZM3KV8GS4;
    struct   student *DKksvySw58O;
    jxEWwga = 0;
    Wz0vuYxC = (612 - 612);
    scanf ("%d", &nZ46AUX78K);
    xbUWhu = qc9L0s7e = (struct   student *) malloc (LEN);
    scanf ("%s %d %d %s %s %d", xbUWhu->TrYy1a, &xbUWhu->nYfhUcaE8X, &xbUWhu->PEPZx3zT, xbUWhu->vSATgKFUy, xbUWhu->uVnNF2ckW6, &xbUWhu->Qk1KUSqc);
    head = NULL;
    for (; nZ46AUX78K - (210 - 209) > jxEWwga;) {
        jxEWwga = jxEWwga + 1;
        if (!(1 != jxEWwga))
            head = xbUWhu;
        else
            qc9L0s7e->wOx1rTn2RwfV = xbUWhu;
        qc9L0s7e = xbUWhu;
        xbUWhu = (struct   student *) malloc (LEN);
        scanf ("%s %d %d %s %s %d", xbUWhu->TrYy1a, &xbUWhu->nYfhUcaE8X, &xbUWhu->PEPZx3zT, xbUWhu->vSATgKFUy, xbUWhu->uVnNF2ckW6, &xbUWhu->Qk1KUSqc);
    }
    qc9L0s7e->wOx1rTn2RwfV = xbUWhu;
    qc9L0s7e = xbUWhu;
    qc9L0s7e->wOx1rTn2RwfV = NULL;
    JZM3KV8GS4 = head;
    do {
        JZM3KV8GS4->jdHCnYJs = 0;
        if (JZM3KV8GS4->nYfhUcaE8X > (394 - 314) && JZM3KV8GS4->Qk1KUSqc >= 1)
            JZM3KV8GS4->jdHCnYJs = JZM3KV8GS4->jdHCnYJs + (8423 - 423);
        if (JZM3KV8GS4->nYfhUcaE8X > (460 - 375) && JZM3KV8GS4->PEPZx3zT > (879 - 799))
            JZM3KV8GS4->jdHCnYJs = JZM3KV8GS4->jdHCnYJs + (4303 - 303);
        if (90 < JZM3KV8GS4->nYfhUcaE8X)
            JZM3KV8GS4->jdHCnYJs = JZM3KV8GS4->jdHCnYJs + (2209 - 209);
        if (85 < JZM3KV8GS4->nYfhUcaE8X && !(0 != strcmp (JZM3KV8GS4->uVnNF2ckW6, "Y")))
            JZM3KV8GS4->jdHCnYJs = JZM3KV8GS4->jdHCnYJs + (1873 - 873);
        if (JZM3KV8GS4->PEPZx3zT > 80 && strcmp (JZM3KV8GS4->vSATgKFUy, "Y") == 0)
            JZM3KV8GS4->jdHCnYJs = JZM3KV8GS4->jdHCnYJs + (1684 - 834);
        JZM3KV8GS4 = JZM3KV8GS4->wOx1rTn2RwfV;
    }
    while (JZM3KV8GS4 != NULL);
    JZM3KV8GS4 = DKksvySw58O = head;
    do {
        Wz0vuYxC = Wz0vuYxC +DKksvySw58O->jdHCnYJs;
        if (JZM3KV8GS4->jdHCnYJs < DKksvySw58O->jdHCnYJs)
            JZM3KV8GS4 = DKksvySw58O;
        DKksvySw58O = DKksvySw58O->wOx1rTn2RwfV;
    }
    while (DKksvySw58O != NULL);
    printf ("%s\n%d\n%d\n", JZM3KV8GS4->TrYy1a, JZM3KV8GS4->jdHCnYJs, Wz0vuYxC);
}

