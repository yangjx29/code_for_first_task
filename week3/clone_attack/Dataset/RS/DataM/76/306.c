int main () {
    struct   ab {
        int nKZvQ8;
        int yjf3zFtR;
    };
    int oDpqm8, FHKs8nvdQq, B3zSo1F2tpR, ObTyZM = (54 - 53), XWlxN1CVEDbL = (647 - 647);
    struct   ab *p;
    struct   ab d0hPdxnIJwe;
    scanf ("%d", &oDpqm8);
    p = (struct   ab *) malloc (sizeof (struct   ab) * oDpqm8);
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
    for (FHKs8nvdQq = (719 - 719); oDpqm8 > FHKs8nvdQq; FHKs8nvdQq++) {
        scanf ("%d%d", &p[FHKs8nvdQq].nKZvQ8, &p[FHKs8nvdQq].yjf3zFtR);
    }
    {
        FHKs8nvdQq = 503 - 503;
        while (FHKs8nvdQq < oDpqm8 - (480 - 479)) {
            d0hPdxnIJwe = p[FHKs8nvdQq];
            for (B3zSo1F2tpR = FHKs8nvdQq +1; oDpqm8 > B3zSo1F2tpR; B3zSo1F2tpR++) {
                if (p[FHKs8nvdQq].nKZvQ8 > p[B3zSo1F2tpR].nKZvQ8) {
                    p[FHKs8nvdQq] = p[B3zSo1F2tpR];
                    p[B3zSo1F2tpR] = d0hPdxnIJwe;
                    d0hPdxnIJwe = p[FHKs8nvdQq];
                };
            }
            FHKs8nvdQq++;
        };
    }
    {
        FHKs8nvdQq = 324 - 324;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (oDpqm8 - 1 > FHKs8nvdQq) {
            if (XWlxN1CVEDbL < p[FHKs8nvdQq].yjf3zFtR)
                XWlxN1CVEDbL = p[FHKs8nvdQq].yjf3zFtR;
            if (p[FHKs8nvdQq +1].nKZvQ8 > XWlxN1CVEDbL) {
                ObTyZM = 0;
                break;
            }
            FHKs8nvdQq++;
        };
    }
    if (p[oDpqm8 - 1].yjf3zFtR > XWlxN1CVEDbL)
        XWlxN1CVEDbL = p[oDpqm8 - 1].yjf3zFtR;
    if (ObTyZM == 0)
        printf ("no");
    else
        printf ("%d %d", p[0].nKZvQ8, XWlxN1CVEDbL);
    return 0;
}

