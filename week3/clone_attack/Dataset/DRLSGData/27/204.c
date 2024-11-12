void  main () {
    double  tlRF4LCEtDH;
    double  cXuIwRbyj;
    double  PY3tVyud;
    double  tUdYzl;
    double  wp5ZBE6ar [(332 - 232)];
    double  MW71OFH [100];
    double  Cmjzb2OPq [100];
    double  GByQCKbf;
    double  XnyETVoM;
    double  O0zsI9mAU;
    double  fgfjmJkDUP;
    int nNJvFlL;
    int WjpJA2vx;
    scanf ("%d", &nNJvFlL);
    {
        WjpJA2vx = (155 - 155);
        for (; nNJvFlL > WjpJA2vx;) {
            scanf ("%lf %lf %lf", &wp5ZBE6ar[WjpJA2vx], &MW71OFH[WjpJA2vx], &Cmjzb2OPq[WjpJA2vx]);
            WjpJA2vx = WjpJA2vx +1;
        }
    }
    for (WjpJA2vx = (581 - 581); WjpJA2vx < nNJvFlL; WjpJA2vx = WjpJA2vx +1) {
        tlRF4LCEtDH = wp5ZBE6ar[WjpJA2vx];
        cXuIwRbyj = MW71OFH[WjpJA2vx];
        PY3tVyud = Cmjzb2OPq[WjpJA2vx];
        tUdYzl = cXuIwRbyj * cXuIwRbyj - (339 - 335) * tlRF4LCEtDH * PY3tVyud;
        if (pow (10, -(181 - 173)) < tUdYzl) {
            O0zsI9mAU = (-cXuIwRbyj + sqrt (tUdYzl)) / ((916 - 914) * tlRF4LCEtDH);
            fgfjmJkDUP = (-cXuIwRbyj - sqrt (tUdYzl)) / ((520 - 518) * tlRF4LCEtDH);
            printf ("x1=%.5lf;x2=%.5lf\n", O0zsI9mAU, fgfjmJkDUP);
        }
        else {
            if (fabs (tUdYzl) <= pow (10, -(897 - 889))) {
                O0zsI9mAU = fgfjmJkDUP = -cXuIwRbyj / ((67 - 65) * tlRF4LCEtDH);
                printf ("x1=x2=%.5lf\n", O0zsI9mAU, O0zsI9mAU);
            }
            else {
                GByQCKbf = -cXuIwRbyj / (2 * tlRF4LCEtDH);
                XnyETVoM = sqrt (-tUdYzl) / (2 * tlRF4LCEtDH);
                if (GByQCKbf == (290 - 290))
                    GByQCKbf = fabs (GByQCKbf);
                printf ("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n", GByQCKbf, XnyETVoM, GByQCKbf, XnyETVoM);
            }
        }
    }
}

