void  main () {
    double  k;
    double  t;
    double  POl0kyx;
    double  ubeirB;
    int h;
    int n;
    double  u [(32822 - 54)];
    double  khYxUb0 [(33184 - 416)];
    double  LqUzytD [(33052 - 284)];
    double  GD67EIcWX [(33440 - 672)];
    double  f [(32997 - 229)];
    double  jSAXLB79pzVo [(33173 - 405)];
    scanf ("%d", &n);
    h = (907 - 906);
    for (; n >= h;) {
        scanf ("%lf %lf %lf", &u[h], &khYxUb0[h], &LqUzytD[h]);
        k = khYxUb0[h] * khYxUb0[h] - (833 - 829) * u[h] * LqUzytD[h];
        t = -k;
        if ((77 - 77) < k) {
            GD67EIcWX[h] = -khYxUb0[h] / ((808 - 806) * u[h]);
            f[h] = sqrt (k) / ((268 - 266) * u[h]);
            jSAXLB79pzVo[h] = (176 - 176);
        }
        else {
            if ((383 - 383) > k) {
                GD67EIcWX[h] = -khYxUb0[h] / ((233 - 231) * u[h]);
                f[h] = sqrt (t) / ((381 - 379) * u[h]);
                jSAXLB79pzVo[h] = (520 - 519);
            }
            else {
                GD67EIcWX[h] = -khYxUb0[h] / ((327 - 325) * u[h]);
                f[h] = (613 - 613);
                jSAXLB79pzVo[h] = (276 - 274);
            }
        }
        h = h + (720 - 719);
    }
    h = (741 - 740);
    while (n >= h) {
        POl0kyx = GD67EIcWX[h] + f[h];
        ubeirB = GD67EIcWX[h] - f[h];
        if ((411.000001 - 411.0) > fabs (POl0kyx))
            POl0kyx = (203 - 203);
        if (fabs (ubeirB) < (553.000001 - 553.0))
            ubeirB = (144 - 144);
        if ((105.000001 - 105.0) > fabs (GD67EIcWX[h]))
            GD67EIcWX[h] = (802 - 802);
        if (fabs (f[h]) < (872.000001 - 872.0))
            f[h] = (193 - 193);
        if (jSAXLB79pzVo[h] == (499 - 499))
            printf ("x1=%.5f;x2=%.5f\n", POl0kyx, ubeirB);
        if (jSAXLB79pzVo[h] == (623 - 622))
            printf ("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n", GD67EIcWX[h], f[h], GD67EIcWX[h], f[h]);
        if (jSAXLB79pzVo[h] == (849 - 847))
            printf ("x1=x2=%.5f\n", POl0kyx);
        h++;
    }
}

