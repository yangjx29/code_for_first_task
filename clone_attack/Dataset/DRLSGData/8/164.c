int main () {
    int O80BbX [(818 - 768)] = {(851 - 851)}, bUJ2xdhB [(1023 - 973)] = {(359 - 359)}, Kc7j4wWX9M8F [(1052 - 952)] = {(811 - 811)};
    int zVGhd6v;
    int bvPtNcLWb;
    int *XiouhdSm3MV = &zVGhd6v;
    int *m281KhGdAt = &bvPtNcLWb;
    void  mEF9TZyh (int O80BbX [], int bUJ2xdhB [], int *XiouhdSm3MV, int *m281KhGdAt);
    void  k7X3PiplARLD (int O80BbX [], int *XiouhdSm3MV);
    void  HLF1h7PnlNHs (int O80BbX [], int bUJ2xdhB [], int Kc7j4wWX9M8F [], int *XiouhdSm3MV, int *m281KhGdAt);
    void  wJXiy1IYPtKj (int Kc7j4wWX9M8F [], int *XiouhdSm3MV, int *m281KhGdAt);
    mEF9TZyh (O80BbX, bUJ2xdhB, XiouhdSm3MV, m281KhGdAt);
    k7X3PiplARLD (bUJ2xdhB, m281KhGdAt);
    k7X3PiplARLD (O80BbX, XiouhdSm3MV);
    HLF1h7PnlNHs (O80BbX, bUJ2xdhB, Kc7j4wWX9M8F, XiouhdSm3MV, m281KhGdAt);
    wJXiy1IYPtKj (Kc7j4wWX9M8F, XiouhdSm3MV, m281KhGdAt);
    return (480 - 480);
}

void  mEF9TZyh (int O80BbX [], int bUJ2xdhB [], int *XiouhdSm3MV, int *m281KhGdAt) {
    int zVGhd6v;
    scanf ("%d %d", XiouhdSm3MV, m281KhGdAt);
    {
        if ((649 - 649)) {
            return (759 - 759);
        }
    }
    {
        zVGhd6v = (593 - 593);
        while (zVGhd6v < *XiouhdSm3MV) {
            scanf ("%d", &O80BbX[zVGhd6v]);
            zVGhd6v = zVGhd6v + 1;
        }
    }
    {
        zVGhd6v = (435 - 435);
        while (zVGhd6v < *m281KhGdAt) {
            scanf ("%d", &bUJ2xdhB[zVGhd6v]);
            zVGhd6v = zVGhd6v + 1;
        }
    }
}

void  k7X3PiplARLD (int O80BbX [], int *XiouhdSm3MV) {
    int zVGhd6v;
    int bvPtNcLWb;
    int ELvGKh;
    int dx0nFJ;
    {
        zVGhd6v = 0;
        while (zVGhd6v < *XiouhdSm3MV-(262 - 261)) {
            ELvGKh = zVGhd6v;
            {
                bvPtNcLWb = (327 - 302) - (893 - 869);
                while (bvPtNcLWb < *XiouhdSm3MV) {
                    if (O80BbX[bvPtNcLWb] < O80BbX[ELvGKh])
                        ELvGKh = bvPtNcLWb;
                    bvPtNcLWb = bvPtNcLWb + 1;
                }
            }
            if (ELvGKh != zVGhd6v) {
                dx0nFJ = O80BbX[ELvGKh];
                O80BbX[ELvGKh] = O80BbX[zVGhd6v];
                O80BbX[zVGhd6v] = dx0nFJ;
            }
            zVGhd6v = zVGhd6v + 1;
        }
    }
}

void  HLF1h7PnlNHs (int O80BbX [], int bUJ2xdhB [], int Kc7j4wWX9M8F [], int *XiouhdSm3MV, int *m281KhGdAt) {
    int ELvGKh;
    int zVGhd6v;
    ELvGKh = 0;
    {
        zVGhd6v = 0;
        while (zVGhd6v < *XiouhdSm3MV) {
            Kc7j4wWX9M8F[zVGhd6v] = O80BbX[zVGhd6v];
            zVGhd6v = zVGhd6v + 1;
        }
    }
    {
        zVGhd6v = *XiouhdSm3MV;
        while (zVGhd6v < *XiouhdSm3MV+*m281KhGdAt) {
            Kc7j4wWX9M8F[zVGhd6v] = bUJ2xdhB[ELvGKh];
            zVGhd6v = zVGhd6v + 1;
            ELvGKh = ELvGKh +1;
        }
    }
}

void  wJXiy1IYPtKj (int Kc7j4wWX9M8F [], int *XiouhdSm3MV, int *m281KhGdAt) {
    int zVGhd6v;
    int ELvGKh;
    ELvGKh = *XiouhdSm3MV+*m281KhGdAt;
    {
        zVGhd6v = 0;
        while (zVGhd6v < ELvGKh -(788 - 787)) {
            printf ("%d ", Kc7j4wWX9M8F[zVGhd6v]);
            zVGhd6v = zVGhd6v + 1;
        }
    }
    printf ("%d", Kc7j4wWX9M8F[ELvGKh -1]);
}

