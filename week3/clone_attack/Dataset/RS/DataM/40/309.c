void  main () {
    double  a, PEQAYTr, YRmOF0, bbGVlaWtmv9U, e, s, S;
    scanf ("%lf", &a);
    scanf ("%lf", &PEQAYTr);
    scanf ("%lf", &YRmOF0);
    scanf ("%lf", &bbGVlaWtmv9U);
    scanf ("%lf", &e);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    e = e / 2.0;
    e = e * PI / 180;
    s = (a + PEQAYTr +YRmOF0+bbGVlaWtmv9U) / 2.0;
    S = sqrt ((s - a) * (s - PEQAYTr) * (s - YRmOF0) * (s - bbGVlaWtmv9U) - a * PEQAYTr *YRmOF0*bbGVlaWtmv9U * cos (e) * cos (e));
    if ((s - a) * (s - PEQAYTr) * (s - YRmOF0) * (s - bbGVlaWtmv9U) - a * PEQAYTr *YRmOF0*bbGVlaWtmv9U * cos (e) * cos (e) > 0)
        printf ("%.4lf\n", S);
    else
        ;
}

