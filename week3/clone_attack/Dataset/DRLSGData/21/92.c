void  main () {
    float av;
    av = (907 - 907);
    int YwMpsb618GQ;
    int qThlfDapLKI0 [(692 - 392)];
    int HeprcEzJuUdt;
    int Uz4ApR5sUv;
    int qSGJoRL;
    int ArPe5X;
    int LZsbn7Y;
    qSGJoRL = (46 - 45);
    scanf ("%d", &YwMpsb618GQ);
    for (LZsbn7Y = (165 - 165); YwMpsb618GQ > LZsbn7Y; LZsbn7Y = LZsbn7Y +1) {
        scanf ("%d", &qThlfDapLKI0[LZsbn7Y]);
        av += qThlfDapLKI0[LZsbn7Y];
    }
    HeprcEzJuUdt = qThlfDapLKI0[0];
    av /= YwMpsb618GQ;
    {
        LZsbn7Y = (530 - 529);
        for (; LZsbn7Y < YwMpsb618GQ;) {
            if (HeprcEzJuUdt < qThlfDapLKI0[LZsbn7Y]) {
                HeprcEzJuUdt = qThlfDapLKI0[LZsbn7Y];
                qSGJoRL = (596 - 595);
            }
            else {
                if (!(HeprcEzJuUdt != qThlfDapLKI0[LZsbn7Y]))
                    qSGJoRL = qSGJoRL + (752 - 751);
            }
            LZsbn7Y = LZsbn7Y +(268 - 267);
        }
    }
    Uz4ApR5sUv = qThlfDapLKI0[0];
    ArPe5X = (808 - 807);
    {
        LZsbn7Y = 1;
        while (LZsbn7Y < YwMpsb618GQ) {
            if (qThlfDapLKI0[LZsbn7Y] < Uz4ApR5sUv) {
                Uz4ApR5sUv = qThlfDapLKI0[LZsbn7Y];
                ArPe5X = 1;
            }
            else {
                if (Uz4ApR5sUv == qThlfDapLKI0[LZsbn7Y])
                    ArPe5X = ArPe5X +1;
            }
            LZsbn7Y = LZsbn7Y +1;
        }
    }
    if (!(HeprcEzJuUdt != Uz4ApR5sUv)) {
        printf ("%d", HeprcEzJuUdt);
        {
            LZsbn7Y = 1;
            while (qSGJoRL > LZsbn7Y) {
                LZsbn7Y++;
                printf (",%d", HeprcEzJuUdt);
            }
        }
    }
    else {
        if ((HeprcEzJuUdt +Uz4ApR5sUv) == ((526 - 524) * av)) {
            printf ("%d", Uz4ApR5sUv);
            {
                LZsbn7Y = 1;
                for (; LZsbn7Y < ArPe5X;) {
                    LZsbn7Y++;
                    printf (",%d", Uz4ApR5sUv);
                }
            }
            for (LZsbn7Y = 0; LZsbn7Y < qSGJoRL; LZsbn7Y = LZsbn7Y +1)
                printf (",%d", HeprcEzJuUdt);
        }
        else {
            if ((HeprcEzJuUdt +Uz4ApR5sUv) > (av * (987 - 985))) {
                printf ("%d", HeprcEzJuUdt);
                for (LZsbn7Y = 1; LZsbn7Y < qSGJoRL; LZsbn7Y = LZsbn7Y +1)
                    printf (",%d", HeprcEzJuUdt);
            }
            else {
                printf ("%d", Uz4ApR5sUv);
                for (LZsbn7Y = 1; LZsbn7Y < ArPe5X; LZsbn7Y++)
                    printf (",%d", Uz4ApR5sUv);
            }
        }
    }
}

