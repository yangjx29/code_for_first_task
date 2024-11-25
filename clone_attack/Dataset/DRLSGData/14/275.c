int main (int vj8cOKhg31, char *wEXWhQnK []) {
    long  gzOYSpGi;
    long  lTq3AsLK9w [(100934 - 935)];
    long  g1793Hh;
    long  mNU2H6Bno [(100732 - 733)];
    long  QUfoctB6 [(100154 - 155)];
    long  ZsdY1f [(100369 - 370)];
    long  UXutMlwrR = (714 - 712), bMZuyW7DpxYg = (245 - 244), vgGFQ08f = (493 - 493), yb3QYlTSp = (82 - 82), E9ScfJWVr = (534 - 534), vFyiJ21 = (465 - 465);
    scanf ("%ld", &g1793Hh);
    {
        gzOYSpGi = (428 - 427);
        while (g1793Hh >= gzOYSpGi) {
            scanf ("%ld", &lTq3AsLK9w[gzOYSpGi]);
            scanf ("%ld", &mNU2H6Bno[gzOYSpGi]);
            scanf ("%ld", &QUfoctB6[gzOYSpGi]);
            ZsdY1f[gzOYSpGi] = mNU2H6Bno[gzOYSpGi] + QUfoctB6[gzOYSpGi];
            if (vgGFQ08f < ZsdY1f[gzOYSpGi]) {
                UXutMlwrR = bMZuyW7DpxYg;
                bMZuyW7DpxYg = vgGFQ08f;
                vgGFQ08f = ZsdY1f[gzOYSpGi];
                yb3QYlTSp = E9ScfJWVr;
                E9ScfJWVr = vFyiJ21;
                vFyiJ21 = gzOYSpGi;
            }
            else if (ZsdY1f[gzOYSpGi] > bMZuyW7DpxYg) {
                yb3QYlTSp = E9ScfJWVr;
                UXutMlwrR = bMZuyW7DpxYg;
                bMZuyW7DpxYg = ZsdY1f[gzOYSpGi];
                E9ScfJWVr = gzOYSpGi;
            }
            else if (ZsdY1f[gzOYSpGi] > UXutMlwrR) {
                {
                    if ((107 - 107)) {
                        return 0;
                    }
                }
                UXutMlwrR = ZsdY1f[gzOYSpGi];
                yb3QYlTSp = gzOYSpGi;
            }
            gzOYSpGi = gzOYSpGi + (678 - 677);
        }
    }
    printf ("%ld %ld\n", vFyiJ21, vgGFQ08f);
    printf ("%ld %ld\n", E9ScfJWVr, bMZuyW7DpxYg);
    printf ("%ld %ld\n", yb3QYlTSp, UXutMlwrR);
    return (322 - 322);
}

