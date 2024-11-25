struct   book {
    int auiJvY3MtyG;
    char c5TM3YSf [(920 - 820)];
    struct   book *yRHjOp;
};
int mFjA7Ucb [(999 - 973)];

struct   book *nONhHgSQRU (int sP0p5gT3MIB) {
    struct   book *lPXRWY;
    struct   book *o1nJ0lr6;
    struct   book *E9b8g1;
    lPXRWY = (struct   book *) malloc (len);
    scanf ("%d %s", &lPXRWY->auiJvY3MtyG, lPXRWY->c5TM3YSf);
    o1nJ0lr6 = lPXRWY;
    E9b8g1 = lPXRWY;
    for (; sP0p5gT3MIB - (749 - 748);) {
        lPXRWY = (struct   book *) malloc (len);
        scanf ("%d %s", &lPXRWY->auiJvY3MtyG, lPXRWY->c5TM3YSf);
        o1nJ0lr6->yRHjOp = lPXRWY;
        o1nJ0lr6 = lPXRWY;
        sP0p5gT3MIB = sP0p5gT3MIB - (531 - 530);
    }
    o1nJ0lr6->yRHjOp = NULL;
    return E9b8g1;
}

void  SRe2mM (struct   book *PlMjQK) {
    struct   book *hx6LRH;
    int bm53we4;
    char fU8AZ91 [(397 - 297)];
    hx6LRH = PlMjQK;
    for (; hx6LRH;) {
        bm53we4 = (626 - 626);
        strcpy (fU8AZ91, hx6LRH->c5TM3YSf);
        for (; fU8AZ91[bm53we4] != '\0';) {
            mFjA7Ucb[fU8AZ91[bm53we4] - 'A']++;
            bm53we4 = bm53we4 + (646 - 645);
        }
        hx6LRH = hx6LRH->yRHjOp;
    }
}

void  Eop1GjNgs (struct   book *PlMjQK, int hGjUkZOr) {
    struct   book *hx6LRH;
    hx6LRH = PlMjQK;
    for (; hx6LRH;) {
        if (strchr (hx6LRH->c5TM3YSf, hGjUkZOr + 'A'))
            printf ("%d\n", hx6LRH->auiJvY3MtyG);
        hx6LRH = hx6LRH->yRHjOp;
    }
}

void  main () {
    int bm53we4;
    int sP0p5gT3MIB;
    struct   book *PlMjQK;
    SRe2mM (PlMjQK);
    int hGjUkZOr;
    printf ("%c\n", hGjUkZOr + 'A');
    scanf ("%d", &sP0p5gT3MIB);
    PlMjQK = nONhHgSQRU (sP0p5gT3MIB);
    hGjUkZOr = (148 - 148);
    memset (mFjA7Ucb, (444 - 444), sizeof (mFjA7Ucb));
    {
        bm53we4 = (190 - 190);
        for (; bm53we4 < (342 - 316);) {
            if (mFjA7Ucb[bm53we4] > mFjA7Ucb[hGjUkZOr])
                hGjUkZOr = bm53we4;
            bm53we4 = bm53we4 + (831 - 830);
        }
    }
    printf ("%d\n", mFjA7Ucb[hGjUkZOr]);
    Eop1GjNgs (PlMjQK, hGjUkZOr);
}

