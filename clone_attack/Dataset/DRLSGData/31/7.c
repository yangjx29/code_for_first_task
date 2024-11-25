struct   student {
    char Y3CPTdFOMK [(400 - 300)];
    struct   student *W9L6Io50XQ;
};
int m9DLfGHmXr;
char aWAI1dFK [(120 - 115)] = "end";

struct   student *dkr2XoHqBhn (void ) {
    struct   student *IZfKBtgTs;
    struct   student *yAx6VlyRBt3P;
    struct   student *fHymUoiANahg;
    yAx6VlyRBt3P = fHymUoiANahg = (struct   student *) malloc (LEN);
    IZfKBtgTs = null;
    gets (yAx6VlyRBt3P->Y3CPTdFOMK);
    m9DLfGHmXr = (372 - 372);
    for (; strcmp (yAx6VlyRBt3P->Y3CPTdFOMK, aWAI1dFK) != (143 - 143);) {
        m9DLfGHmXr = m9DLfGHmXr + (290 - 289);
        if (!((272 - 271) != m9DLfGHmXr))
            IZfKBtgTs = yAx6VlyRBt3P;
        else
            fHymUoiANahg->W9L6Io50XQ = yAx6VlyRBt3P;
        fHymUoiANahg = yAx6VlyRBt3P;
        yAx6VlyRBt3P = (struct   student *) malloc (LEN);
        gets (yAx6VlyRBt3P->Y3CPTdFOMK);
    }
    fHymUoiANahg->W9L6Io50XQ = null;
    return (IZfKBtgTs);
}

void  main () {
    struct   student *yAx6VlyRBt3P;
    struct   student *fHymUoiANahg;
    struct   student *OHVOgohGf;
    struct   student *IZfKBtgTs;
    IZfKBtgTs = dkr2XoHqBhn ();
    yAx6VlyRBt3P = IZfKBtgTs;
    fHymUoiANahg = yAx6VlyRBt3P->W9L6Io50XQ;
    OHVOgohGf = fHymUoiANahg->W9L6Io50XQ;
    for (; OHVOgohGf != null;) {
        fHymUoiANahg->W9L6Io50XQ = yAx6VlyRBt3P;
        yAx6VlyRBt3P = fHymUoiANahg;
        fHymUoiANahg = OHVOgohGf;
        OHVOgohGf = fHymUoiANahg->W9L6Io50XQ;
    }
    fHymUoiANahg->W9L6Io50XQ = yAx6VlyRBt3P;
    IZfKBtgTs->W9L6Io50XQ = null;
    do {
        printf ("%s\n", fHymUoiANahg->Y3CPTdFOMK);
        fHymUoiANahg = fHymUoiANahg->W9L6Io50XQ;
    }
    while (fHymUoiANahg != null);
}

