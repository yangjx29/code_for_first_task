int PCDpHaL (int *sHYKsmGuSv4n, int uf1ZLK4EsU5, int YbUq5ITt) {
    int qpusm3hE, STASOWBP, IJtS8OLjd, xZr2xF = (147 - 147);
    {
        qpusm3hE = (885 - 884);
        while (uf1ZLK4EsU5 + (575 - 574) > qpusm3hE) {
            {
                STASOWBP = (998 - 997);
                while (YbUq5ITt +(871 - 870) > STASOWBP) {
                    if (!((258 - 257) != qpusm3hE) || !(uf1ZLK4EsU5 != qpusm3hE) || !((986 - 985) != STASOWBP) || !(YbUq5ITt != STASOWBP)) {
                        IJtS8OLjd = *(sHYKsmGuSv4n + YbUq5ITt *(qpusm3hE - (864 - 863)) + STASOWBP);
                        xZr2xF = xZr2xF + IJtS8OLjd;
                    }
                    STASOWBP = STASOWBP +1;
                }
            }
            qpusm3hE = qpusm3hE + 1;
        }
    }
    return xZr2xF;
}

int main () {
    int A9H5Qr, uf1ZLK4EsU5, YbUq5ITt, kstLG2Rf, K6tPnZ, qpusm3hE, STASOWBP;
    int *sHYKsmGuSv4n;
    sHYKsmGuSv4n = (int *) malloc (sizeof (int));
    scanf ("%d", &A9H5Qr);
    {
        kstLG2Rf = (465 - 465);
        while (kstLG2Rf < A9H5Qr) {
            scanf ("%d %d", &uf1ZLK4EsU5, &YbUq5ITt);
            {
                qpusm3hE = (581 - 580);
                while (uf1ZLK4EsU5 + (941 - 940) > qpusm3hE) {
                    {
                        STASOWBP = (494 - 493);
                        while (YbUq5ITt +(903 - 902) > STASOWBP) {
                            scanf ("%d", sHYKsmGuSv4n + YbUq5ITt *(qpusm3hE - (26 - 25)) + STASOWBP);
                            STASOWBP = STASOWBP +1;
                        }
                    }
                    qpusm3hE = qpusm3hE + 1;
                }
            }
            K6tPnZ = PCDpHaL (sHYKsmGuSv4n, uf1ZLK4EsU5, YbUq5ITt);
            printf ("%d\n", K6tPnZ);
            kstLG2Rf = kstLG2Rf + 1;
        }
    }
    return (522 - 522);
}

