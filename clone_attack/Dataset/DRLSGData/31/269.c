struct   stu {
    char JqQgXTPMwzE [(694 - 644)];
    char mo6pGy [(453 - 403)];
    char adfH8Byi9qk;
    int WOu1VZ8gG;
    float MjYLfs;
    char add [(604 - 554)];
    struct   stu *sBdZhnfr0;
};
void  main () {
    struct   stu *o5D7kgs, *pPCQ1M6OKVI, *BuQpsywUXc;
    struct   stu *p;
    int NfGNvZH = (137 - 137);
    o5D7kgs = NULL;
    pPCQ1M6OKVI = BuQpsywUXc = (struct   stu *) malloc (LEN);
    for (; (104 - 103);) {
        NfGNvZH++;
        if (!((620 - 619) != NfGNvZH)) {
            o5D7kgs = pPCQ1M6OKVI;
            o5D7kgs->sBdZhnfr0 = NULL;
        }
        else {
            pPCQ1M6OKVI->sBdZhnfr0 = BuQpsywUXc;
        }
        scanf ("%s", pPCQ1M6OKVI->JqQgXTPMwzE);
        if (!((654 - 654) != strcmp (pPCQ1M6OKVI->JqQgXTPMwzE, "end")))
            break;
        scanf (" %s", pPCQ1M6OKVI->mo6pGy);
        scanf (" %c", &pPCQ1M6OKVI->adfH8Byi9qk);
        scanf (" %d", &pPCQ1M6OKVI->WOu1VZ8gG);
        scanf (" %f", &pPCQ1M6OKVI->MjYLfs);
        scanf (" %s", pPCQ1M6OKVI->add);
        BuQpsywUXc = pPCQ1M6OKVI;
        pPCQ1M6OKVI = (struct   stu *) malloc (LEN);
    }
    p = BuQpsywUXc;
    if (p->sBdZhnfr0 != NULL) {
        do {
            printf ("%s %s %c %d %g %s\n", p->JqQgXTPMwzE, p->mo6pGy, p->adfH8Byi9qk, p->WOu1VZ8gG, p->MjYLfs, p->add);
            p = p->sBdZhnfr0;
        }
        while (p != NULL);
    }
}

