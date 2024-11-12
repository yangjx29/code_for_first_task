int main () {
    int fX2t4TK;
    int sza [50000];
    int Ud0o7b [50000];
    int hYSAu9de8QfH;
    int max;
    int UW7tJwOv0V, P68BiV1DTglR, k, a = 0, RUglz0o;
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
    scanf ("%d", &fX2t4TK);
    {
        hYSAu9de8QfH = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (hYSAu9de8QfH < fX2t4TK) {
            scanf ("%d %d", &sza[hYSAu9de8QfH], &Ud0o7b[hYSAu9de8QfH]);
            hYSAu9de8QfH = hYSAu9de8QfH + 1;
        };
    }
    {
        k = 643 - 642;
        while (k <= fX2t4TK) {
            {
                hYSAu9de8QfH = 0;
                while (hYSAu9de8QfH < fX2t4TK - k) {
                    if (sza[hYSAu9de8QfH] > sza[hYSAu9de8QfH + (621 - 620)]) {
                        UW7tJwOv0V = sza[hYSAu9de8QfH + 1];
                        P68BiV1DTglR = Ud0o7b[hYSAu9de8QfH + 1];
                        sza[hYSAu9de8QfH + 1] = sza[hYSAu9de8QfH];
                        Ud0o7b[hYSAu9de8QfH + 1] = Ud0o7b[hYSAu9de8QfH];
                        sza[hYSAu9de8QfH] = UW7tJwOv0V;
                        Ud0o7b[hYSAu9de8QfH] = P68BiV1DTglR;
                    }
                    hYSAu9de8QfH = hYSAu9de8QfH + 1;
                };
            }
            k = k + 1;
        };
    }
    max = Ud0o7b[0];
    {
        hYSAu9de8QfH = 1;
        while (hYSAu9de8QfH < fX2t4TK) {
            if (sza[hYSAu9de8QfH] <= max) {
                if (max < Ud0o7b[hYSAu9de8QfH])
                    max = Ud0o7b[hYSAu9de8QfH];
            }
            else
                break;
            hYSAu9de8QfH++;
        };
    }
    if (hYSAu9de8QfH < fX2t4TK)
        printf ("no\n");
    else
        printf ("%d %d\n", sza[0], max);
    return 0;
}

