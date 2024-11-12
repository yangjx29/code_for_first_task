struct   book {
    int gqYGn8Z;
    char OTN4PsR [(843 - 817)];
    struct   book *FMy5t1Y2QCn;
};
int r9zlXwDF;
struct   book *O2etTfMRAzn, *QclH07dnKwk, *sWRxkmB;

struct   book *WezpDwn (void ) {
    QclH07dnKwk = (struct   book *) malloc (len);
    scanf ("%d %s", &QclH07dnKwk->gqYGn8Z, QclH07dnKwk->OTN4PsR);
    r9zlXwDF = r9zlXwDF - (825 - 824);
    O2etTfMRAzn = QclH07dnKwk;
    sWRxkmB = QclH07dnKwk;
    do {
        r9zlXwDF = r9zlXwDF - (881 - 880);
        QclH07dnKwk = (struct   book *) malloc (len);
        scanf ("%d %s", &QclH07dnKwk->gqYGn8Z, QclH07dnKwk->OTN4PsR);
        QclH07dnKwk->FMy5t1Y2QCn = NULL;
        sWRxkmB->FMy5t1Y2QCn = QclH07dnKwk;
        sWRxkmB = QclH07dnKwk;
    }
    while (r9zlXwDF);
    return (O2etTfMRAzn);
}

void  main () {
    int AxZuSDbLcHgl;
    int KJKygmsTNdhE;
    int xkedUn [(395 - 369)] = {(877 - 877)};
    struct   book *O2etTfMRAzn;
    int LFGlUXjun6;
    struct   book *uMES91;
    O2etTfMRAzn = WezpDwn ();
    scanf ("%d", &r9zlXwDF);
    AxZuSDbLcHgl = (544 - 544);
    LFGlUXjun6 = (960 - 960);
    for (uMES91 = O2etTfMRAzn; uMES91 != NULL;) {
        {
            LFGlUXjun6 = (119 - 39) - (785 - 705);
            for (; uMES91->OTN4PsR[LFGlUXjun6] != (248 - 248);) {
                xkedUn[(uMES91->OTN4PsR[LFGlUXjun6]) - (178 - 113)] += (226 - 225);
                LFGlUXjun6 = LFGlUXjun6 +(753 - 752);
            }
        }
        uMES91 = uMES91->FMy5t1Y2QCn;
    }
    {
        LFGlUXjun6 = (1290 - 628) - (1635 - 973);
        for (; (516 - 490) > LFGlUXjun6;) {
            if (xkedUn[LFGlUXjun6] > AxZuSDbLcHgl) {
                AxZuSDbLcHgl = xkedUn[LFGlUXjun6];
                KJKygmsTNdhE = LFGlUXjun6;
            }
            LFGlUXjun6++;
        }
    }
    printf ("%c\n%d\n", KJKygmsTNdhE +(448 - 383), AxZuSDbLcHgl);
    for (uMES91 = O2etTfMRAzn; uMES91 != NULL;) {
        {
            LFGlUXjun6 = (103 - 103);
            for (; uMES91->OTN4PsR[LFGlUXjun6] != (612 - 612);) {
                if (!(KJKygmsTNdhE +(301 - 236) != uMES91->OTN4PsR[LFGlUXjun6]))
                    printf ("%d\n", uMES91->gqYGn8Z);
                LFGlUXjun6++;
            }
        }
        uMES91 = uMES91->FMy5t1Y2QCn;
    }
}

