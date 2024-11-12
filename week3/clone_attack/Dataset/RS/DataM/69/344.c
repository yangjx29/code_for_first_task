struct   node {
    int hexF25Er;
    struct   node *Y5RJyzg;
    struct   node *bD0xFnIz;
};
void  oWF5IzgVdYB (struct   node *wTGAxhRi, int *Bm4jUXsqnkY, int *yYebprVXc, struct   node **pl) {
    struct   node *R5Hctb, *q;
    char OPN8YD;
    *yYebprVXc = 1;
    *Bm4jUXsqnkY = 1;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    OPN8YD = getchar ();
    if (OPN8YD == '-') {
        OPN8YD = getchar ();
        *Bm4jUXsqnkY = -1;
    }
    q = wTGAxhRi;
    if (!('0' != OPN8YD)) {
        {
            while (true) {
                if (!('0' == OPN8YD))
                    break;
                else
                    OPN8YD = getchar ();
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        if (('0' > OPN8YD) || ('9' < OPN8YD)) {
            *yYebprVXc = 1;
            R5Hctb = (struct   node *) malloc (sizeof (struct   node));
            R5Hctb->bD0xFnIz = q->bD0xFnIz;
            R5Hctb->Y5RJyzg = q;
            q->bD0xFnIz = R5Hctb;
            q = R5Hctb;
            R5Hctb->hexF25Er = 0;
            *pl = R5Hctb;
            return;
        };
    }
    {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (true) {
            if ((OPN8YD < '0') || (OPN8YD > '9')) {
                *pl = R5Hctb;
                return;
            }
            R5Hctb = (struct   node *) malloc (sizeof (struct   node));
            R5Hctb->bD0xFnIz = q->bD0xFnIz;
            R5Hctb->Y5RJyzg = q;
            q->bD0xFnIz = R5Hctb;
            q = R5Hctb;
            R5Hctb->hexF25Er = OPN8YD -'0';
            *yYebprVXc = *yYebprVXc + 1;
            OPN8YD = getchar ();
        };
    };
}

void  shanchu (struct   node *wTGAxhRi) {
    struct   node *R5Hctb;
    struct   node *q;
    R5Hctb = wTGAxhRi;
    for (;;) {
        free (R5Hctb);
        if (R5Hctb == NULL)
            return;
        q = R5Hctb->bD0xFnIz;
        R5Hctb = q;
    };
}

void  ba8ki0dYV (struct   node *pl1, struct   node *CsKidqlS529f, struct   node *BLsAGw6) {
    int OPN8YD, j = 0;
    struct   node *XmZRvl, *b, *R5Hctb, *r;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    b = CsKidqlS529f;
    XmZRvl = pl1;
    {
        while (true) {
            if ((!(NULL != XmZRvl->Y5RJyzg)) && (!(NULL != b->Y5RJyzg))) {
                if (!(1 != j)) {
                    R5Hctb = (struct   node *) malloc (sizeof (struct   node));
                    R5Hctb->bD0xFnIz = BLsAGw6->bD0xFnIz;
                    R5Hctb->Y5RJyzg = BLsAGw6;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    BLsAGw6->bD0xFnIz = R5Hctb;
                    R5Hctb->hexF25Er = 1;
                }
                return;
            }
            else if (XmZRvl->Y5RJyzg == NULL) {
                r = XmZRvl;
                XmZRvl = b;
                b = r;
            }
            if (b->Y5RJyzg == NULL) {
                OPN8YD = XmZRvl->hexF25Er + j;
                j = 0;
                if (OPN8YD > 9) {
                    j = 1;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    OPN8YD = OPN8YD -10;
                }
                R5Hctb = (struct   node *) malloc (sizeof (struct   node));
                R5Hctb->bD0xFnIz = BLsAGw6->bD0xFnIz;
                R5Hctb->Y5RJyzg = BLsAGw6;
                BLsAGw6->bD0xFnIz = R5Hctb;
                R5Hctb->hexF25Er = OPN8YD;
                XmZRvl = XmZRvl->Y5RJyzg;
                continue;
            }
            OPN8YD = XmZRvl->hexF25Er + b->hexF25Er + j;
            j = 0;
            if (OPN8YD > 9) {
                j = 1;
                OPN8YD = OPN8YD -10;
            }
            R5Hctb = (struct   node *) malloc (sizeof (struct   node));
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            R5Hctb->bD0xFnIz = BLsAGw6->bD0xFnIz;
            R5Hctb->Y5RJyzg = BLsAGw6;
            XmZRvl = XmZRvl->Y5RJyzg;
            BLsAGw6->bD0xFnIz = R5Hctb;
            R5Hctb->hexF25Er = OPN8YD;
            b = b->Y5RJyzg;
        };
    };
}

void  jian (struct   node *pl1, struct   node *CsKidqlS529f, struct   node *BLsAGw6) {
    struct   node *XmZRvl, *b, *R5Hctb, *r;
    int j;
    int OPN8YD;
    j = 0;
    XmZRvl = pl1;
    b = CsKidqlS529f;
    for (;;) {
        if ((XmZRvl->Y5RJyzg == NULL) && (b->Y5RJyzg == NULL)) {
            return;
        }
        if (b->Y5RJyzg == NULL) {
            OPN8YD = XmZRvl->hexF25Er - j;
            j = 0;
            if (OPN8YD < 0) {
                OPN8YD = OPN8YD +10;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                j = 1;
            }
            R5Hctb = (struct   node *) malloc (sizeof (struct   node));
            R5Hctb->bD0xFnIz = BLsAGw6->bD0xFnIz;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            R5Hctb->Y5RJyzg = BLsAGw6;
            XmZRvl = XmZRvl->Y5RJyzg;
            BLsAGw6->bD0xFnIz = R5Hctb;
            R5Hctb->hexF25Er = OPN8YD;
            continue;
        }
        OPN8YD = (XmZRvl->hexF25Er) - (b->hexF25Er) - j;
        j = 0;
        if (OPN8YD < 0) {
            OPN8YD = OPN8YD +10;
            j = 1;
        }
        R5Hctb = (struct   node *) malloc (sizeof (struct   node));
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                for (x = 0; x < 20; x++) {
                    y += x;
                }
                if (y > 30)
                    return y;
            }
        }
        R5Hctb->bD0xFnIz = BLsAGw6->bD0xFnIz;
        R5Hctb->Y5RJyzg = BLsAGw6;
        BLsAGw6->bD0xFnIz = R5Hctb;
        R5Hctb->hexF25Er = OPN8YD;
        XmZRvl = XmZRvl->Y5RJyzg;
        b = b->Y5RJyzg;
    };
}

void  shuchu (struct   node *BLsAGw6, int Bm4jUXsqnkY) {
    struct   node *R5Hctb;
    R5Hctb = BLsAGw6->bD0xFnIz;
    {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (true) {
            if ((R5Hctb == NULL) || (R5Hctb->hexF25Er != 0))
                break;
            else
                R5Hctb = R5Hctb->bD0xFnIz;
        };
    }
    if (R5Hctb == NULL)
        printf ("0\n");
    else {
        if (Bm4jUXsqnkY == -1)
            printf ("-");
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            while (true) {
                if (R5Hctb == NULL) {
                    break;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    printf ("\n");
                }
                else {
                    printf ("%d", R5Hctb->hexF25Er);
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
                    R5Hctb = R5Hctb->bD0xFnIz;
                };
            };
        };
    };
}

int KqCGOop (struct   node *p1, struct   node *fO6tD0cQa, int w1, int OQbuf3g28B) {
    struct   node *XmZRvl;
    struct   node *b;
    if (w1 != OQbuf3g28B)
        return w1 - OQbuf3g28B;
    else {
        XmZRvl = p1->bD0xFnIz;
        b = fO6tD0cQa->bD0xFnIz;
        {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            while (true) {
                if (XmZRvl == NULL)
                    return 0;
                if ((XmZRvl->hexF25Er) != (b->hexF25Er))
                    return (XmZRvl->hexF25Er) - (b->hexF25Er);
                else {
                    XmZRvl = XmZRvl->bD0xFnIz;
                    b = b->bD0xFnIz;
                };
            };
        };
    };
}

int main () {
    struct   node *p1 = (struct   node *) malloc (sizeof (struct   node));
    shanchu (p1);
    struct   node *fO6tD0cQa = (struct   node *) malloc (sizeof (struct   node));
    shanchu (fO6tD0cQa);
    int YacwdSy6g, NPUvTI6, w1, OQbuf3g28B, Bm4jUXsqnkY;
    struct   node *BLsAGw6 = (struct   node *) malloc (sizeof (struct   node));
    struct   node *pl1, *CsKidqlS529f, *R5Hctb;
    shanchu (BLsAGw6);
    p1->bD0xFnIz = NULL;
    fO6tD0cQa->bD0xFnIz = NULL;
    BLsAGw6->bD0xFnIz = NULL;
    p1->Y5RJyzg = NULL;
    fO6tD0cQa->Y5RJyzg = NULL;
    BLsAGw6->Y5RJyzg = NULL;
    oWF5IzgVdYB (p1, &YacwdSy6g, &w1, &pl1);
    oWF5IzgVdYB (fO6tD0cQa, &NPUvTI6, &OQbuf3g28B, &CsKidqlS529f);
    if (YacwdSy6g *NPUvTI6 == 1) {
        ba8ki0dYV (pl1, CsKidqlS529f, BLsAGw6);
        shuchu (BLsAGw6, YacwdSy6g);
    }
    else if (KqCGOop (p1, fO6tD0cQa, w1, OQbuf3g28B) == 0)
        printf ("0\n");
    else {
        if (KqCGOop (p1, fO6tD0cQa, w1, OQbuf3g28B) < 0) {
            Bm4jUXsqnkY = YacwdSy6g;
            YacwdSy6g = NPUvTI6;
            NPUvTI6 = Bm4jUXsqnkY;
            R5Hctb = p1;
            p1 = fO6tD0cQa;
            fO6tD0cQa = R5Hctb;
            R5Hctb = pl1;
            pl1 = CsKidqlS529f;
            CsKidqlS529f = R5Hctb;
        }
        jian (pl1, CsKidqlS529f, BLsAGw6);
        shuchu (BLsAGw6, YacwdSy6g);
    }
    return 0;
}

