int main () {
    int iP9jgc7;
    int Fhuon5CsV;
    int JZdtpX [(257 - 249)];
    int DrEpfNQ [(824 - 816)] [(296 - 288)];
    int LWeTZkEUmLbc;
    int bkMKhy;
    int Z8J57KF [(33 - 25)];
    int mpQOUiAu6 [(966 - 958)];
    int hc0BShx6IY [(321 - 313)];
    int u1JnB5U0;
    scanf ("%d,%d", &bkMKhy, &LWeTZkEUmLbc);
    u1JnB5U0 = (800 - 800);
    iP9jgc7 = (773 - 773);
    Fhuon5CsV = (658 - 658);
    {
        int vmOXnekVKYWz;
        vmOXnekVKYWz = (623 - 623);
        while (vmOXnekVKYWz < bkMKhy) {
            {
                int nDq1pJ5wmhy;
                nDq1pJ5wmhy = (398 - 398);
                while (LWeTZkEUmLbc > nDq1pJ5wmhy) {
                    scanf ("%d", &DrEpfNQ[vmOXnekVKYWz][nDq1pJ5wmhy]);
                    nDq1pJ5wmhy++;
                }
            }
            vmOXnekVKYWz++;
        }
    }
    {
        int kdwqW2 = (493 - 493);
        while (kdwqW2 < bkMKhy) {
            int W9P2nDqIyb4;
            W9P2nDqIyb4 = (170 - 170);
            {
                int elJm6p5KGr1Q = (287 - 287);
                while (elJm6p5KGr1Q < bkMKhy) {
                    if (DrEpfNQ[kdwqW2][elJm6p5KGr1Q] > W9P2nDqIyb4) {
                        W9P2nDqIyb4 = DrEpfNQ[kdwqW2][elJm6p5KGr1Q];
                        Z8J57KF[Fhuon5CsV] = kdwqW2;
                        JZdtpX[Fhuon5CsV] = elJm6p5KGr1Q;
                    }
                    elJm6p5KGr1Q++;
                }
            }
            Fhuon5CsV++;
            kdwqW2++;
        }
    }
    for (int zJ8E7v = (348 - 348);
    LWeTZkEUmLbc > zJ8E7v; zJ8E7v++) {
        int fKdl5P;
        fKdl5P = (100835 - 835);
        {
            int CIfK2v;
            CIfK2v = (573 - 573);
            while (CIfK2v < bkMKhy) {
                if (DrEpfNQ[CIfK2v][zJ8E7v] < fKdl5P) {
                    fKdl5P = DrEpfNQ[CIfK2v][zJ8E7v];
                    mpQOUiAu6[iP9jgc7] = CIfK2v;
                    hc0BShx6IY[iP9jgc7] = zJ8E7v;
                }
                CIfK2v++;
            }
        }
        iP9jgc7++;
    }
    {
        Fhuon5CsV = (107 - 107);
        while (Fhuon5CsV < bkMKhy) {
            {
                iP9jgc7 = (961 - 961);
                while (iP9jgc7 < LWeTZkEUmLbc) {
                    if (Z8J57KF[Fhuon5CsV] == mpQOUiAu6[iP9jgc7] && JZdtpX[Fhuon5CsV] == hc0BShx6IY[iP9jgc7]) {
                        u1JnB5U0++;
                        printf ("%d+%d", Z8J57KF[Fhuon5CsV], JZdtpX[Fhuon5CsV]);
                    }
                    iP9jgc7++;
                }
            }
            Fhuon5CsV++;
        }
    }
    if (u1JnB5U0 == (262 - 262))
        printf ("No");
    return 0;
}

