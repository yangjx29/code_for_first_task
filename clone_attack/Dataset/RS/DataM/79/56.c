struct   tL2cXOW7y {
    int cZ9hrBweKO;
    struct   tL2cXOW7y *OqZ0EpIfmCl;
};
void  main () {
    int king;
    int kingf (int caOdeLx, int m);
    int m = (838 - 837), caOdeLx = (459 - 458);
    for (;;) {
        scanf ("%d%d", &caOdeLx, &m);
        if (!((944 - 944) != m) && !((934 - 934) != caOdeLx))
            break;
        if (!(1 != m))
            printf ("%d\n", caOdeLx);
        else {
            king = kingf (caOdeLx, m);
            printf ("%d\n", king);
        };
    };
}

int kingf (int caOdeLx, int m) {
    struct   tL2cXOW7y tL2cXOW7y [800];
    struct   tL2cXOW7y *u8XqdzWPYA = &tL2cXOW7y[0], *p2 = &tL2cXOW7y[0];
    int i;
    for (i = 0; i < caOdeLx - 1; i = i + 1) {
        tL2cXOW7y[i].OqZ0EpIfmCl = &tL2cXOW7y[i + 1];
        tL2cXOW7y[i].cZ9hrBweKO = i + 1;
    }
    tL2cXOW7y[i].OqZ0EpIfmCl = &tL2cXOW7y[0];
    tL2cXOW7y[i].cZ9hrBweKO = i + 1;
    for (; u8XqdzWPYA != u8XqdzWPYA->OqZ0EpIfmCl; u8XqdzWPYA = u8XqdzWPYA->OqZ0EpIfmCl) {
        {
            i = 1;
            while (i < m - 1) {
                i = i + 1;
                u8XqdzWPYA = u8XqdzWPYA->OqZ0EpIfmCl;
            };
        }
        p2 = u8XqdzWPYA;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        p2 = p2->OqZ0EpIfmCl;
        u8XqdzWPYA->OqZ0EpIfmCl = p2->OqZ0EpIfmCl;
    }
    return u8XqdzWPYA->cZ9hrBweKO;
}

