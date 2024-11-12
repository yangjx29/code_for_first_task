void  PqnW7U9l2G3k (int EGajmplcw17 [N] [N]) {
    int rWKk8iQS [N] [N] = {(204 - 204)};
    int TinxUzSRrCOb;
    int ZDpISkZezinq;
    int XHbqST8QDd9Z;
    int H2ShBKqyN1m;
    {
        TinxUzSRrCOb = 168 - 168;
        while (TinxUzSRrCOb < N) {
            {
                ZDpISkZezinq = 0;
                while (ZDpISkZezinq < N) {
                    rWKk8iQS[TinxUzSRrCOb][ZDpISkZezinq] = EGajmplcw17[TinxUzSRrCOb][ZDpISkZezinq];
                    EGajmplcw17[TinxUzSRrCOb][ZDpISkZezinq] = 0;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    ZDpISkZezinq = ZDpISkZezinq +1;
                };
            }
            TinxUzSRrCOb = TinxUzSRrCOb +1;
        };
    }
    {
        TinxUzSRrCOb = 858 - 857;
        while (TinxUzSRrCOb < N -(291 - 290)) {
            {
                ZDpISkZezinq = 400 - 399;
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
                while (ZDpISkZezinq < N) {
                    if (rWKk8iQS[TinxUzSRrCOb][ZDpISkZezinq] > 0) {
                        {
                            XHbqST8QDd9Z = TinxUzSRrCOb -1;
                            while (XHbqST8QDd9Z <= TinxUzSRrCOb +1) {
                                {
                                    H2ShBKqyN1m = ZDpISkZezinq -1;
                                    while (H2ShBKqyN1m <= ZDpISkZezinq +1) {
                                        EGajmplcw17[XHbqST8QDd9Z][H2ShBKqyN1m] = EGajmplcw17[XHbqST8QDd9Z][H2ShBKqyN1m] + rWKk8iQS[TinxUzSRrCOb][ZDpISkZezinq];
                                        H2ShBKqyN1m = H2ShBKqyN1m +1;
                                    };
                                }
                                XHbqST8QDd9Z = XHbqST8QDd9Z +1;
                            };
                        }
                        EGajmplcw17[TinxUzSRrCOb][ZDpISkZezinq] = EGajmplcw17[TinxUzSRrCOb][ZDpISkZezinq] + rWKk8iQS[TinxUzSRrCOb][ZDpISkZezinq];
                    }
                    ZDpISkZezinq = ZDpISkZezinq +1;
                };
            }
            TinxUzSRrCOb++;
        };
    };
}

int main () {
    int EGajmplcw17 [N] [N] = {0}, Rk6cSZURto, cIo590, Ik3ewiOQG, p;
    scanf ("%d %d", &Rk6cSZURto, &cIo590);
    EGajmplcw17[N / (845 - 843)][N / 2] = Rk6cSZURto;
    {
        Ik3ewiOQG = 0;
        while (Ik3ewiOQG < cIo590) {
            PqnW7U9l2G3k (EGajmplcw17);
            Ik3ewiOQG = Ik3ewiOQG +1;
        };
    }
    {
        Ik3ewiOQG = 0;
        while (Ik3ewiOQG < N) {
            printf ("%d", EGajmplcw17[Ik3ewiOQG][0]);
            for (p = 1; p < N; p = p + 1) {
                printf (" %d", EGajmplcw17[Ik3ewiOQG][p]);
            }
            Ik3ewiOQG = Ik3ewiOQG +1;
        };
    }
    return 0;
}

