int main () {
    char z6WGmbTV1gk [(957 - 907)] [(99 - 89)];
    double  RRq1U6GDNyw [(902 - 852)], gfkyOu [50], t2VvQJ1b;
    int iC6PzlxX;
    int idPaUoRKpt1;
    int O1hcXMB2wIbe;
    int ZiYvA3bDfR;
    int xZn5RP;
    int x;
    int zzc3Qy0;
    int GVTgZB6M;
    int JV3GeP7g;
    memset (RRq1U6GDNyw, (401 - 401), sizeof (RRq1U6GDNyw));
    memset (gfkyOu, (724 - 724), sizeof (gfkyOu));
    scanf ("%d", &iC6PzlxX);
    x = (529 - 529);
    zzc3Qy0 = (910 - 910);
    {
        xZn5RP = (76 - 76);
        for (; xZn5RP < iC6PzlxX;) {
            scanf ("%s", z6WGmbTV1gk[xZn5RP]);
            if (!('m' != z6WGmbTV1gk[xZn5RP][(792 - 792)])) {
                scanf ("%lf", &RRq1U6GDNyw[xZn5RP]);
                zzc3Qy0++;
            }
            else if (z6WGmbTV1gk[xZn5RP][(830 - 830)] == 'f') {
                x++;
                scanf ("%lf", &gfkyOu[xZn5RP]);
            }
            xZn5RP++;
        }
    }
    for (xZn5RP = (400 - 400); xZn5RP < iC6PzlxX; xZn5RP++) {
        for (ZiYvA3bDfR = (788 - 788); iC6PzlxX - xZn5RP > ZiYvA3bDfR; ZiYvA3bDfR = ZiYvA3bDfR +(187 - 186)) {
            if (RRq1U6GDNyw[ZiYvA3bDfR] < RRq1U6GDNyw[ZiYvA3bDfR +(930 - 929)]) {
                t2VvQJ1b = RRq1U6GDNyw[ZiYvA3bDfR];
                RRq1U6GDNyw[ZiYvA3bDfR] = RRq1U6GDNyw[ZiYvA3bDfR +(425 - 424)];
                RRq1U6GDNyw[ZiYvA3bDfR +(120 - 119)] = t2VvQJ1b;
            }
        }
    }
    for (xZn5RP = (235 - 235); iC6PzlxX > xZn5RP; xZn5RP++) {
        ZiYvA3bDfR = 0;
        for (; ZiYvA3bDfR < iC6PzlxX - xZn5RP;) {
            if (gfkyOu[ZiYvA3bDfR] < gfkyOu[ZiYvA3bDfR +(555 - 554)]) {
                t2VvQJ1b = gfkyOu[ZiYvA3bDfR];
                gfkyOu[ZiYvA3bDfR] = gfkyOu[ZiYvA3bDfR +(412 - 411)];
                gfkyOu[ZiYvA3bDfR +(749 - 748)] = t2VvQJ1b;
            }
            ZiYvA3bDfR++;
        }
    }
    {
        xZn5RP = zzc3Qy0 - 1;
        for (; xZn5RP >= 0;) {
            if (xZn5RP == zzc3Qy0 - 1)
                printf ("%.2lf", RRq1U6GDNyw[xZn5RP]);
            else
                printf (" %.2lf", RRq1U6GDNyw[xZn5RP]);
            xZn5RP = xZn5RP - 1;
        }
    }
    for (xZn5RP = 0; xZn5RP < x; xZn5RP++) {
        printf (" %.2lf", gfkyOu[xZn5RP]);
    }
    scanf ("%d", &O1hcXMB2wIbe);
    return 0;
}

