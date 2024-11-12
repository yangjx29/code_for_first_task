main () {
    int Dc4KAsgRJnM;
    int h5fhXziuIwYW;
    int qvzr2b;
    int YAmIdroTgnx;
    double  tosZehIFY [(1048 - 48)];
    double  ee9D6unKo3 [(1886 - 886)];
    double  IgdurQ [(1274 - 774)] [(1233 - 733)];
    double  p4VCMY;
    p4VCMY = (898 - 898);
    scanf ("%d", &YAmIdroTgnx);
    {
        Dc4KAsgRJnM = (422 - 422);
        for (; YAmIdroTgnx > Dc4KAsgRJnM;) {
            scanf ("%lf %lf", &tosZehIFY[Dc4KAsgRJnM], &ee9D6unKo3[Dc4KAsgRJnM]);
            Dc4KAsgRJnM = Dc4KAsgRJnM +(147 - 146);
        }
    }
    {
        Dc4KAsgRJnM = (765 - 765);
        for (; YAmIdroTgnx > Dc4KAsgRJnM;) {
            {
                h5fhXziuIwYW = Dc4KAsgRJnM +(341 - 340);
                for (; h5fhXziuIwYW < YAmIdroTgnx;) {
                    IgdurQ[Dc4KAsgRJnM][h5fhXziuIwYW] = sqrt ((tosZehIFY[Dc4KAsgRJnM] - tosZehIFY[h5fhXziuIwYW]) * (tosZehIFY[Dc4KAsgRJnM] - tosZehIFY[h5fhXziuIwYW]) + (ee9D6unKo3[Dc4KAsgRJnM] - ee9D6unKo3[h5fhXziuIwYW]) * (ee9D6unKo3[Dc4KAsgRJnM] - ee9D6unKo3[h5fhXziuIwYW]));
                    h5fhXziuIwYW = h5fhXziuIwYW + (646 - 645);
                }
            }
            Dc4KAsgRJnM = Dc4KAsgRJnM +(396 - 395);
        }
    }
    {
        Dc4KAsgRJnM = (636 - 636);
        for (; YAmIdroTgnx > Dc4KAsgRJnM;) {
            {
                h5fhXziuIwYW = (73 - 73);
                for (; YAmIdroTgnx > h5fhXziuIwYW;) {
                    if (IgdurQ[Dc4KAsgRJnM][h5fhXziuIwYW] > p4VCMY)
                        p4VCMY = IgdurQ[Dc4KAsgRJnM][h5fhXziuIwYW];
                    h5fhXziuIwYW = h5fhXziuIwYW + (677 - 676);
                }
            }
            Dc4KAsgRJnM = Dc4KAsgRJnM +1;
        }
    }
    printf ("%.4f", p4VCMY);
}

