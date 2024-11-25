int RYV0xpu2Uh7 (int gD6q2lOP, int d52xz1GDu, int **lKLfmhZA) {
    int y6qtyaV;
    y6qtyaV = lKLfmhZA[(542 - 542)][d52xz1GDu];
    for (int noPNAm = 1;
    noPNAm < gD6q2lOP; noPNAm++) {
        if (y6qtyaV > lKLfmhZA[noPNAm][d52xz1GDu]) {
            y6qtyaV = lKLfmhZA[noPNAm][d52xz1GDu];
        }
    }
    return y6qtyaV;
}

int IN2zZTBQP (int gD6q2lOP, int lKLfmhZA []) {
    int y6qtyaV;
    y6qtyaV = lKLfmhZA[(393 - 393)];
    for (int noPNAm = 0;
    noPNAm < gD6q2lOP; noPNAm++) {
        if (y6qtyaV > lKLfmhZA[noPNAm]) {
            y6qtyaV = lKLfmhZA[noPNAm];
        }
    }
    return y6qtyaV;
}

int DfIvcuC (int gD6q2lOP, int **tfAjhGI) {
    int oqQZYC2;
    oqQZYC2 = 0;
    for (int H6zLdJfYM = 0;
    H6zLdJfYM < gD6q2lOP - 1; H6zLdJfYM++) {
        for (int noPNAm = 0;
        noPNAm < gD6q2lOP - H6zLdJfYM; noPNAm++) {
            int R4fR70Dkl;
            R4fR70Dkl = IN2zZTBQP (gD6q2lOP - H6zLdJfYM, tfAjhGI[noPNAm]);
            for (int iAN23xzWftU = 0;
            gD6q2lOP - H6zLdJfYM > iAN23xzWftU; iAN23xzWftU++) {
                tfAjhGI[noPNAm][iAN23xzWftU] = tfAjhGI[noPNAm][iAN23xzWftU] - R4fR70Dkl;
            }
        }
        for (int noPNAm = 0;
        gD6q2lOP - H6zLdJfYM > noPNAm; noPNAm++) {
            int R4fR70Dkl;
            R4fR70Dkl = RYV0xpu2Uh7 (gD6q2lOP - H6zLdJfYM, noPNAm, tfAjhGI);
            for (int iAN23xzWftU = 0;
            iAN23xzWftU < gD6q2lOP - H6zLdJfYM; iAN23xzWftU++) {
                tfAjhGI[iAN23xzWftU][noPNAm] = tfAjhGI[iAN23xzWftU][noPNAm] - R4fR70Dkl;
            }
        }
        oqQZYC2 = oqQZYC2 + tfAjhGI[1][1];
        for (int noPNAm = 0;
        noPNAm < gD6q2lOP - H6zLdJfYM; noPNAm++) {
            for (int iAN23xzWftU = 1;
            iAN23xzWftU < gD6q2lOP - 1 - H6zLdJfYM; iAN23xzWftU++) {
                tfAjhGI[noPNAm][iAN23xzWftU] = tfAjhGI[noPNAm][iAN23xzWftU + 1];
            }
        }
        for (int noPNAm = 0;
        gD6q2lOP - 1 - H6zLdJfYM > noPNAm; noPNAm++) {
            for (int iAN23xzWftU = 1;
            gD6q2lOP - H6zLdJfYM -1 > iAN23xzWftU; iAN23xzWftU++) {
                tfAjhGI[iAN23xzWftU][noPNAm] = tfAjhGI[iAN23xzWftU + 1][noPNAm];
            }
        }
    }
    return oqQZYC2;
}

int main (void ) {
    int **tfAjhGI;
    iJA8RUr6 (tfAjhGI);
    int gD6q2lOP;
    gD6q2lOP = 0;
    scanf ("%d", &gD6q2lOP);
    tfAjhGI = (int **) malloc (gD6q2lOP * sizeof (int *));
    for (int noPNAm = 0;
    gD6q2lOP > noPNAm; noPNAm++) {
        tfAjhGI[noPNAm] = (int *) malloc (gD6q2lOP * sizeof (int));
    }
    for (int QXVzu1pB = 0;
    gD6q2lOP > QXVzu1pB; QXVzu1pB++) {
        for (int noPNAm = 0;
        gD6q2lOP > noPNAm; noPNAm++) {
            for (int iAN23xzWftU = 0;
            iAN23xzWftU < gD6q2lOP; iAN23xzWftU++) {
                scanf ("%d", &tfAjhGI[noPNAm][iAN23xzWftU]);
            }
        }
        printf ("%d\n", DfIvcuC (gD6q2lOP, tfAjhGI));
    }
    for (int noPNAm = 0;
    noPNAm < gD6q2lOP; noPNAm++) {
        iJA8RUr6 (tfAjhGI [noPNAm]);
    }
    return 0;
}

