int main () {
    int ZGF3IZ9z;
    int lY53X9N;
    int j;
    int PXdGQz2UxC;
    int kbzTiksZ;
    int crV5bG;
    int i4;
    int YAogme40wG;
    int h0FlCbEnT3t;
    int E8FMsutG0m3k;
    int z9He0VvSDG6K;
    int M3L9bc;
    int n;
    int nDNdHV;
    ZGF3IZ9z = (969 - 969);
    int c2CLgcGsPY [5] [5], QjLacYUqtTy [5] [5], cC5y9aUTwH3 [5] [5], jCRgk7 [5], yQRG1LdsXvVq [5];
    {
        lY53X9N = 0;
        while ((603 - 599) >= lY53X9N) {
            {
                j = 0;
                while (4 >= j) {
                    scanf ("%d", &c2CLgcGsPY[lY53X9N][j]);
                    QjLacYUqtTy[lY53X9N][j] = c2CLgcGsPY[lY53X9N][j];
                    cC5y9aUTwH3[lY53X9N][j] = c2CLgcGsPY[lY53X9N][j];
                    j = j + 1;
                };
            }
            lY53X9N = lY53X9N + 1;
        };
    }
    {
        i4 = 0;
        while (i4 <= 4) {
            for (YAogme40wG = 1; YAogme40wG <= 4; YAogme40wG = YAogme40wG +1) {
                h0FlCbEnT3t = 0;
                while (3 >= h0FlCbEnT3t) {
                    if (cC5y9aUTwH3[h0FlCbEnT3t][i4] > cC5y9aUTwH3[h0FlCbEnT3t + 1][i4]) {
                        n = cC5y9aUTwH3[h0FlCbEnT3t + 1][i4];
                        cC5y9aUTwH3[h0FlCbEnT3t + 1][i4] = cC5y9aUTwH3[h0FlCbEnT3t][i4];
                        cC5y9aUTwH3[h0FlCbEnT3t][i4] = n;
                    }
                    h0FlCbEnT3t = h0FlCbEnT3t + 1;
                };
            }
            yQRG1LdsXvVq[i4] = cC5y9aUTwH3[0][i4];
            i4 = i4 + 1;
        };
    }
    {
        PXdGQz2UxC = 0;
        while (4 >= PXdGQz2UxC) {
            {
                kbzTiksZ = 1;
                while (kbzTiksZ <= 4) {
                    kbzTiksZ = kbzTiksZ + 1;
                    for (crV5bG = 0; crV5bG <= 3; crV5bG = crV5bG + 1) {
                        if (QjLacYUqtTy[PXdGQz2UxC][crV5bG] < QjLacYUqtTy[PXdGQz2UxC][crV5bG + 1]) {
                            M3L9bc = QjLacYUqtTy[PXdGQz2UxC][crV5bG + 1];
                            QjLacYUqtTy[PXdGQz2UxC][crV5bG + 1] = QjLacYUqtTy[PXdGQz2UxC][crV5bG];
                            QjLacYUqtTy[PXdGQz2UxC][crV5bG] = M3L9bc;
                        };
                    };
                };
            }
            jCRgk7[PXdGQz2UxC] = QjLacYUqtTy[PXdGQz2UxC][0];
            PXdGQz2UxC = PXdGQz2UxC +1;
        };
    }
    {
        E8FMsutG0m3k = 0;
        while (E8FMsutG0m3k <= 4) {
            {
                z9He0VvSDG6K = 0;
                while (z9He0VvSDG6K <= 4) {
                    if ((jCRgk7[E8FMsutG0m3k] == yQRG1LdsXvVq[z9He0VvSDG6K])) {
                        ZGF3IZ9z = ZGF3IZ9z +1;
                        z9He0VvSDG6K = z9He0VvSDG6K + 1;
                        nDNdHV = jCRgk7[E8FMsutG0m3k];
                        E8FMsutG0m3k = E8FMsutG0m3k +1;
                        printf ("%d %d %d\n", E8FMsutG0m3k, z9He0VvSDG6K, nDNdHV);
                    }
                    z9He0VvSDG6K = z9He0VvSDG6K + 1;
                };
            }
            E8FMsutG0m3k = E8FMsutG0m3k +1;
        };
    }
    if (ZGF3IZ9z == 0)
        ;
}

