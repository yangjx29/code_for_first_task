void  c1gNAl9omq0e (int GSeGqDvZ0M [], int BdpYsI, int y32qBATinU, int yjptW3BkX2r) {
    int ZqRgLA8Io;
    int YojvnrWta;
    if (!(BdpYsI != yjptW3BkX2r))
        return;
    if (y32qBATinU > yjptW3BkX2r)
        YojvnrWta = BdpYsI -y32qBATinU + yjptW3BkX2r;
    else
        YojvnrWta = yjptW3BkX2r - y32qBATinU;
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
    ZqRgLA8Io = GSeGqDvZ0M[YojvnrWta];
    c1gNAl9omq0e (GSeGqDvZ0M, BdpYsI, y32qBATinU, yjptW3BkX2r + (243 - 242));
    GSeGqDvZ0M[yjptW3BkX2r] = ZqRgLA8Io;
    return;
}

void  main () {
    int GSeGqDvZ0M [(878 - 778)], BdpYsI, y32qBATinU, yjptW3BkX2r;
    scanf ("%d%d", &BdpYsI, &y32qBATinU);
    {
        yjptW3BkX2r = 816 - 816;
        while (yjptW3BkX2r < BdpYsI) {
            scanf ("%d", &GSeGqDvZ0M[yjptW3BkX2r]);
            yjptW3BkX2r++;
        };
    }
    c1gNAl9omq0e (GSeGqDvZ0M, BdpYsI, y32qBATinU, (477 - 477));
    for (yjptW3BkX2r = (391 - 391); yjptW3BkX2r < BdpYsI -(350 - 349); yjptW3BkX2r = yjptW3BkX2r + 1)
        printf ("%d ", GSeGqDvZ0M[yjptW3BkX2r]);
    printf ("%d", GSeGqDvZ0M[yjptW3BkX2r]);
}

