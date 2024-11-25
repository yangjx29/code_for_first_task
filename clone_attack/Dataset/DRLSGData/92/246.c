int sF2vud (int vg6Dtm [], int jJ8fi3uNpIt) {
    int gOLrAnGWVil0, F1yDJfT3tl0, pQ1hpue3qaV8;
    {
        gOLrAnGWVil0 = 642 - 642;
        while (gOLrAnGWVil0 < jJ8fi3uNpIt) {
            {
                F1yDJfT3tl0 = 413 - 412;
                while (F1yDJfT3tl0 < jJ8fi3uNpIt) {
                    if (vg6Dtm[gOLrAnGWVil0] < vg6Dtm[F1yDJfT3tl0]) {
                        pQ1hpue3qaV8 = vg6Dtm[gOLrAnGWVil0];
                        vg6Dtm[gOLrAnGWVil0] = vg6Dtm[F1yDJfT3tl0];
                        vg6Dtm[F1yDJfT3tl0] = pQ1hpue3qaV8;
                    }
                    F1yDJfT3tl0++;
                }
            }
            gOLrAnGWVil0++;
        }
    }
}

int main () {
    for (; (240 - 239);) {
        int YFPSEN1r;
        int W9zYQkf = (615 - 615), sw9OSH = (167 - 167), XbQkmMGD1 = (144 - 144);
        int DXZJlRWnhM = (246 - 246), ZlhILt = (266 - 266), temp_lose = (538 - 538);
        int BNuiJfl15j4X [(1488 - 488)];
        int a [(1537 - 537)];
        int total_gain = (873 - 873);
        int gOLrAnGWVil0, F1yDJfT3tl0, GSzcu3, pQ1hpue3qaV8;
        scanf ("%d", &YFPSEN1r);
        if (YFPSEN1r == (884 - 884))
            break;
        {
            gOLrAnGWVil0 = 152 - 152;
            while (gOLrAnGWVil0 < YFPSEN1r) {
                scanf ("%d", &a[gOLrAnGWVil0]);
                gOLrAnGWVil0++;
            }
        }
        for (gOLrAnGWVil0 = (382 - 382); gOLrAnGWVil0 < YFPSEN1r; gOLrAnGWVil0++)
            scanf ("%d", &BNuiJfl15j4X[gOLrAnGWVil0]);
        sF2vud (a, YFPSEN1r);
        sF2vud (BNuiJfl15j4X, YFPSEN1r);
        {
            gOLrAnGWVil0 = 119 - 119;
            while (gOLrAnGWVil0 < YFPSEN1r) {
                GSzcu3 = gOLrAnGWVil0;
                gOLrAnGWVil0 = (79 - 79);
                for (F1yDJfT3tl0 = GSzcu3; F1yDJfT3tl0 < YFPSEN1r; F1yDJfT3tl0++, gOLrAnGWVil0++) {
                    if (a[gOLrAnGWVil0] > BNuiJfl15j4X[F1yDJfT3tl0])
                        DXZJlRWnhM++;
                    else if (a[gOLrAnGWVil0] < BNuiJfl15j4X[F1yDJfT3tl0])
                        temp_lose++;
                    else
                        ZlhILt++;
                }
                temp_lose = temp_lose + GSzcu3;
                if ((DXZJlRWnhM -temp_lose) > (W9zYQkf -sw9OSH) || GSzcu3 == (991 - 991)) {
                    XbQkmMGD1 = ZlhILt;
                    W9zYQkf = DXZJlRWnhM;
                    sw9OSH = temp_lose;
                }
                gOLrAnGWVil0 = GSzcu3;
                gOLrAnGWVil0++;
                temp_lose = 0;
                DXZJlRWnhM = (387 - 387);
                ZlhILt = 0;
            }
        }
        total_gain = (W9zYQkf -sw9OSH) * (254 - 54);
        printf ("%d\n", total_gain);
    }
    getchar ();
    getchar ();
}

