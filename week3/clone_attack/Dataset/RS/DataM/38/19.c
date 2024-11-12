int main () {
    int n, eq8LhF, CuyqAcHb, XCgAqQYmZMdv;
    double  a [1000], BUbKVw = (537 - 537), Ypw5Ll = 0, tv3orZ = 0;
    scanf ("%d", &n);
    {
        CuyqAcHb = 0;
        while (CuyqAcHb < n) {
            CuyqAcHb++;
            scanf ("%d", &eq8LhF);
            for (XCgAqQYmZMdv = 0; eq8LhF > XCgAqQYmZMdv; XCgAqQYmZMdv++) {
                scanf ("%lf", &a[XCgAqQYmZMdv]);
            }
            {
                XCgAqQYmZMdv = 0;
                while (eq8LhF > XCgAqQYmZMdv) {
                    BUbKVw = BUbKVw +a[XCgAqQYmZMdv];
                    XCgAqQYmZMdv = XCgAqQYmZMdv +1;
                };
            }
            BUbKVw = BUbKVw / eq8LhF;
            {
                XCgAqQYmZMdv = 0;
                while (eq8LhF > XCgAqQYmZMdv) {
                    Ypw5Ll = Ypw5Ll +(a[XCgAqQYmZMdv] - BUbKVw) * (a[XCgAqQYmZMdv] - BUbKVw);
                    XCgAqQYmZMdv++;
                };
            }
            tv3orZ = sqrt (Ypw5Ll / eq8LhF);
            printf ("%.5lf\n", tv3orZ);
            tv3orZ = 0;
            BUbKVw = 0;
            Ypw5Ll = 0;
        };
    }
    return 0;
}

