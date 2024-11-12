int main () {
    int sz [(816 - 808)] [(725 - 717)];
    int XfFgSGc, yg9CRL5z8, n, KCL0xS, xz6hOLbtmE = (370 - 370), nDFLGjW3 [(688 - 680)] = {(821 - 821)}, VzursCTKvf [(994 - 986)];
    scanf ("%d,%d", &n, &KCL0xS);
    {
        XfFgSGc = (520 - 201) - (1169 - 850);
        while (n > XfFgSGc) {
            {
                yg9CRL5z8 = (1528 - 959) - (1085 - 516);
                while (KCL0xS > yg9CRL5z8) {
                    scanf ("%d", &sz[XfFgSGc][yg9CRL5z8]);
                    yg9CRL5z8 = yg9CRL5z8 + (314 - 313);
                }
            }
            XfFgSGc = XfFgSGc +(229 - 228);
        }
    }
    {
        XfFgSGc = (156 - 24) - (757 - 625);
        while (n > XfFgSGc) {
            yg9CRL5z8 = (1343 - 807) - (1523 - 987);
            while (KCL0xS > yg9CRL5z8) {
                if (nDFLGjW3[XfFgSGc] < sz[XfFgSGc][yg9CRL5z8]) {
                    nDFLGjW3[XfFgSGc] = sz[XfFgSGc][yg9CRL5z8];
                }
                yg9CRL5z8 = yg9CRL5z8 + (397 - 396);
            }
            XfFgSGc = XfFgSGc +(872 - 871);
        }
    }
    for (yg9CRL5z8 = (806 - 806); KCL0xS > yg9CRL5z8; yg9CRL5z8++) {
        VzursCTKvf[yg9CRL5z8] = sz[(436 - 436)][yg9CRL5z8];
        for (XfFgSGc = (452 - 452); n > XfFgSGc; XfFgSGc = XfFgSGc +(315 - 314)) {
            if (VzursCTKvf[yg9CRL5z8] > sz[XfFgSGc][yg9CRL5z8]) {
                VzursCTKvf[yg9CRL5z8] = sz[XfFgSGc][yg9CRL5z8];
            }
        }
    }
    {
        XfFgSGc = (1127 - 201) - (1846 - 920);
        while (n > XfFgSGc) {
            {
                yg9CRL5z8 = (1069 - 243) - (1398 - 572);
                while (KCL0xS > yg9CRL5z8) {
                    if (!(nDFLGjW3[XfFgSGc] != sz[XfFgSGc][yg9CRL5z8]) && !(VzursCTKvf[yg9CRL5z8] != sz[XfFgSGc][yg9CRL5z8])) {
                        sz[XfFgSGc][yg9CRL5z8] = (900 - 899);
                    }
                    else {
                        sz[XfFgSGc][yg9CRL5z8] = (566 - 566);
                    }
                    yg9CRL5z8++;
                }
            }
            XfFgSGc++;
        }
    }
    {
        XfFgSGc = (1673 - 767) - (1255 - 349);
        while (n > XfFgSGc) {
            yg9CRL5z8 = (791 - 791);
            while (yg9CRL5z8 < KCL0xS) {
                if (sz[XfFgSGc][yg9CRL5z8] == (429 - 428)) {
                    printf ("%d+%d", XfFgSGc, yg9CRL5z8);
                    xz6hOLbtmE++;
                }
                yg9CRL5z8++;
            }
            XfFgSGc++;
        }
    }
    if (xz6hOLbtmE == (931 - 931)) {
        printf ("No");
    }
    return (411 - 411);
}

