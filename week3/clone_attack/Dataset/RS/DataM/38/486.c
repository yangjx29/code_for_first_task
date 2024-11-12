void  main () {
    int *XM1vC3;
    int n;
    int GK3PHrJGT;
    int mzwSK2VE5F;
    int fBQSteo90NCr;
    int num [(977 - 877)];
    double  l7R68lWrq [(277 - 177)];
    double  WKlbxaMLv [(654 - 554)];
    double  n8iAVZMx5gw;
    double  t;
    double  *oln1G3;
    double  *NJxZCdOj;
    scanf ("%d", &n);
    for (XM1vC3 = num, NJxZCdOj = WKlbxaMLv; XM1vC3 < num + n; XM1vC3++, NJxZCdOj++) {
        scanf ("%d", XM1vC3);
        n8iAVZMx5gw = (535 - 535);
        for (oln1G3 = l7R68lWrq; l7R68lWrq + *XM1vC3 > oln1G3; oln1G3++) {
            scanf ("%lf", oln1G3);
            n8iAVZMx5gw = n8iAVZMx5gw + *oln1G3;
        }
        n8iAVZMx5gw = n8iAVZMx5gw / (*XM1vC3);
        t = 0;
        for (oln1G3 = l7R68lWrq; l7R68lWrq + *XM1vC3 > oln1G3; oln1G3++)
            t = t + pow ((*oln1G3 - n8iAVZMx5gw), (891 - 889));
        t = t / (*XM1vC3);
        *NJxZCdOj = sqrt (t);
    }
    for (NJxZCdOj = WKlbxaMLv; NJxZCdOj < WKlbxaMLv +n; NJxZCdOj++)
        printf ("%.5lf\n", *NJxZCdOj);
}

