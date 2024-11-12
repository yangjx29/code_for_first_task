int main () {
    double  uron08;
    double  GXOPpAHbku;
    double  ave;
    double  x [1000];
    double  sum1;
    uron08 = 0;
    GXOPpAHbku = 0;
    ave = 0;
    int QW7mkOgj0LIe, nqfjmd2, kGt4JMb [100], B5ca2IxyYMQ;
    double  BgcJ4E;
    scanf ("%d", &QW7mkOgj0LIe);
    {
        nqfjmd2 = 0;
        while (nqfjmd2 < QW7mkOgj0LIe) {
            ave = 0;
            uron08 = 0;
            GXOPpAHbku = 0;
            scanf ("%d", &kGt4JMb[nqfjmd2]);
            {
                B5ca2IxyYMQ = 0;
                while (B5ca2IxyYMQ < kGt4JMb[nqfjmd2]) {
                    scanf ("%lf", &x[B5ca2IxyYMQ]);
                    uron08 = uron08 + x[B5ca2IxyYMQ];
                    B5ca2IxyYMQ = B5ca2IxyYMQ +1;
                };
            }
            ave = uron08 / kGt4JMb[nqfjmd2];
            {
                B5ca2IxyYMQ = 0;
                while (B5ca2IxyYMQ < kGt4JMb[nqfjmd2]) {
                    GXOPpAHbku = (double ) (GXOPpAHbku +pow (x[B5ca2IxyYMQ] - ave, (766 - 764)));
                    B5ca2IxyYMQ = B5ca2IxyYMQ +1;
                    sum1 = (double ) (GXOPpAHbku / kGt4JMb[nqfjmd2]);
                    BgcJ4E = sqrt (sum1);
                };
            }
            nqfjmd2 = nqfjmd2 + 1;
            printf ("%.5lf\n", BgcJ4E);
        };
    }
    return 0;
}

