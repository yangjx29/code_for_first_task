struct   book {
    char tIgYh9QWPG [26];
    int P1TB6fWVGz;
    struct   book *UbRXNFikHtP;
};
struct   book *MOSDhAKP4 () {
    int pm7qNG;
    int wzuh1y0Trm;
    struct   book *XegiUNOqlJ;
    struct   book *umHKAVcrL;
    struct   book *ikl7zyF;
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
    XegiUNOqlJ = NULL;
    umHKAVcrL = ikl7zyF = (struct   book *) malloc (sizeof (struct   book));
    scanf ("%d", &wzuh1y0Trm);
    {
        pm7qNG = 0;
        while (wzuh1y0Trm > pm7qNG) {
            if (pm7qNG == 0)
                XegiUNOqlJ = umHKAVcrL;
            else
                ikl7zyF->UbRXNFikHtP = umHKAVcrL;
            ikl7zyF = umHKAVcrL;
            umHKAVcrL = (struct   book *) malloc (sizeof (struct   book));
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
            scanf ("%d %s", &umHKAVcrL->P1TB6fWVGz, umHKAVcrL->tIgYh9QWPG);
            umHKAVcrL->UbRXNFikHtP = NULL;
            pm7qNG = pm7qNG + 1;
        };
    }
    ikl7zyF->UbRXNFikHtP = umHKAVcrL;
    return (XegiUNOqlJ);
}

void  main () {
    int L1W0boI;
    int WeJUK0lqC [26] [1000] = {0};
    int ZzK2jS5L8 [26] = {0};
    int pm7qNG;
    int zAhYsGK2W;
    int k;
    struct   book *XegiUNOqlJ, *p;
    char *g59IEg;
    k = 0;
    XegiUNOqlJ = MOSDhAKP4 ();
    {
        p = XegiUNOqlJ->UbRXNFikHtP;
        while (p) {
            L1W0boI = strlen (p->tIgYh9QWPG);
            {
                g59IEg = p->tIgYh9QWPG;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                pm7qNG = 0;
                while (pm7qNG < L1W0boI) {
                    pm7qNG = pm7qNG + 1;
                    WeJUK0lqC[*g59IEg - 65][ZzK2jS5L8[*g59IEg - 65]] = p->P1TB6fWVGz;
                    ZzK2jS5L8[*g59IEg - 65]++;
                    g59IEg++;
                };
            }
            p = p->UbRXNFikHtP;
        };
    }
    zAhYsGK2W = ZzK2jS5L8[0];
    {
        pm7qNG = 0;
        while (pm7qNG < 26) {
            if (ZzK2jS5L8[pm7qNG] > zAhYsGK2W) {
                zAhYsGK2W = ZzK2jS5L8[pm7qNG];
                k = pm7qNG;
            }
            pm7qNG++;
        };
    }
    printf ("%c\n%d\n", k + 65, zAhYsGK2W);
    {
        pm7qNG = 0;
        while (pm7qNG < zAhYsGK2W) {
            printf ("%d\n", WeJUK0lqC[k][pm7qNG]);
            pm7qNG++;
        };
    };
}

