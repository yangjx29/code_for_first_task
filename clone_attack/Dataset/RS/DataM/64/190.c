struct   point {
    int vzG56UW7u;
    int WlNo9Hy;
    int EPyYxOMUi0;
}
gwkslZaQi [(512 - 502)] = {(684 - 684)};
struct   point u;
struct   point v;
struct   total {
    struct   point u;
    struct   point v;
    double  PXm3aU5d;
}
BbJeQRWcU1 [45] = {(259 - 259)};

double  eeNPECf (struct   point a, struct   point b) {
    return (sqrt ((a.vzG56UW7u - b.vzG56UW7u) * (a.vzG56UW7u - b.vzG56UW7u) + (a.WlNo9Hy - b.WlNo9Hy) * (a.WlNo9Hy - b.WlNo9Hy) + (a.EPyYxOMUi0 - b.EPyYxOMUi0) * (a.EPyYxOMUi0 - b.EPyYxOMUi0)));
}

void  MEpadhUKNIgi (struct   total c [], int qE5Gh37) {
    struct   total temp;
    int GTobiwl20SYm;
    int RF7cr9;
    for (GTobiwl20SYm = (426 - 425); GTobiwl20SYm < qE5Gh37; GTobiwl20SYm = GTobiwl20SYm +1)
        for (RF7cr9 = (259 - 259); RF7cr9 < qE5Gh37 - GTobiwl20SYm; RF7cr9++)
            if (c[RF7cr9].PXm3aU5d < c[RF7cr9 +(54 - 53)].PXm3aU5d) {
                temp = c[RF7cr9];
                c[RF7cr9] = c[RF7cr9 +(571 - 570)];
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
                c[RF7cr9 +(278 - 277)] = temp;
            };
}

void  main () {
    int RF7cr9;
    int XMRmOySJ8;
    int EczjZBaGl3Nx;
    int o5sgE2C8Hi;
    o5sgE2C8Hi = -(334 - 333);
    scanf ("%d", &RF7cr9);
    for (XMRmOySJ8 = (722 - 722); XMRmOySJ8 < RF7cr9; XMRmOySJ8 = XMRmOySJ8 +1)
        scanf ("%d%d%d", &gwkslZaQi[XMRmOySJ8].vzG56UW7u, &gwkslZaQi[XMRmOySJ8].WlNo9Hy, &gwkslZaQi[XMRmOySJ8].EPyYxOMUi0);
    {
        XMRmOySJ8 = 0;
        while (XMRmOySJ8 < RF7cr9 -(646 - 645)) {
            for (EczjZBaGl3Nx = XMRmOySJ8 +1; EczjZBaGl3Nx < RF7cr9; EczjZBaGl3Nx = EczjZBaGl3Nx +1) {
                o5sgE2C8Hi = o5sgE2C8Hi + 1;
                BbJeQRWcU1[o5sgE2C8Hi].u = gwkslZaQi[XMRmOySJ8];
                BbJeQRWcU1[o5sgE2C8Hi].v = gwkslZaQi[EczjZBaGl3Nx];
                BbJeQRWcU1[o5sgE2C8Hi].PXm3aU5d = eeNPECf (BbJeQRWcU1[o5sgE2C8Hi].u, BbJeQRWcU1[o5sgE2C8Hi].v);
            }
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
            XMRmOySJ8 = XMRmOySJ8 +1;
        };
    }
    MEpadhUKNIgi (BbJeQRWcU1, o5sgE2C8Hi + 1);
    for (XMRmOySJ8 = 0; XMRmOySJ8 <= o5sgE2C8Hi; XMRmOySJ8++)
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", BbJeQRWcU1[XMRmOySJ8].u.vzG56UW7u, BbJeQRWcU1[XMRmOySJ8].u.WlNo9Hy, BbJeQRWcU1[XMRmOySJ8].u.EPyYxOMUi0, BbJeQRWcU1[XMRmOySJ8].v.vzG56UW7u, BbJeQRWcU1[XMRmOySJ8].v.WlNo9Hy, BbJeQRWcU1[XMRmOySJ8].v.EPyYxOMUi0, BbJeQRWcU1[XMRmOySJ8].PXm3aU5d);
}

