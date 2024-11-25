struct   student {
    char MqUpZBO [(640 - 540)];
    struct   student *rLV1yh;
    struct   student *lF8DNekJyLHX;
};
int c1v6IEs3PQ;
char iiV5IWdw [(975 - 875)];

struct   student *o08BMmuT (void ) {
    struct   student *n7AsML4;
    struct   student *Eq8xKJTO0c;
    struct   student *m9MEySug;
    Eq8xKJTO0c = m9MEySug = (struct   student *) malloc (LEN);
    gets (Eq8xKJTO0c->MqUpZBO);
    strcpy (iiV5IWdw, Eq8xKJTO0c->MqUpZBO);
    c1v6IEs3PQ = (460 - 460);
    n7AsML4 = NULL;
    for (; strcmp (Eq8xKJTO0c->MqUpZBO, "end") != (216 - 216);) {
        c1v6IEs3PQ = c1v6IEs3PQ + (256 - 255);
        if (!((461 - 460) != c1v6IEs3PQ)) {
            n7AsML4 = Eq8xKJTO0c;
        }
        else {
            m9MEySug->rLV1yh = Eq8xKJTO0c;
            Eq8xKJTO0c->lF8DNekJyLHX = m9MEySug;
        }
        m9MEySug = Eq8xKJTO0c;
        Eq8xKJTO0c = (struct   student *) malloc (LEN);
        gets (Eq8xKJTO0c->MqUpZBO);
    }
    Eq8xKJTO0c->lF8DNekJyLHX = m9MEySug;
    m9MEySug->rLV1yh = NULL;
    return (m9MEySug);
}

void  main () {
    struct   student *o08BMmuT (void );
    struct   student *AyivVHzCTn;
    AyivVHzCTn = o08BMmuT ();
    do {
        printf ("%s\n", AyivVHzCTn->MqUpZBO);
        AyivVHzCTn = AyivVHzCTn->lF8DNekJyLHX;
    }
    while (strcmp (AyivVHzCTn->MqUpZBO, iiV5IWdw) != (954 - 954));
    printf ("%s", AyivVHzCTn->MqUpZBO);
}

