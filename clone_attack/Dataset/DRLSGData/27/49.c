void  main () {
    int zAqFBc9N;
    scanf ("%d", &zAqFBc9N);
    double  NSp9sv [(1811 - 811)];
    double  LZSGns [1000];
    double  Y357pQ [1000];
    int VZw2kjpyWnvP;
    double  uFsY2lmWE;
    double  Py9kwt;
    {
        VZw2kjpyWnvP = (273 - 273);
        while (VZw2kjpyWnvP < zAqFBc9N) {
            scanf ("%lf%lf%lf", &NSp9sv[VZw2kjpyWnvP], &LZSGns[VZw2kjpyWnvP], &Y357pQ[VZw2kjpyWnvP]);
            VZw2kjpyWnvP = VZw2kjpyWnvP +1;
        }
    }
    {
        VZw2kjpyWnvP = (378 - 378);
        for (; VZw2kjpyWnvP < zAqFBc9N;) {
            double  Et3sdYpN9;
            Et3sdYpN9 = LZSGns[VZw2kjpyWnvP] * LZSGns[VZw2kjpyWnvP] - (440 - 436) * NSp9sv[VZw2kjpyWnvP] * Y357pQ[VZw2kjpyWnvP];
            if (Et3sdYpN9 > (423 - 423)) {
                uFsY2lmWE = (-LZSGns[VZw2kjpyWnvP] + sqrt (Et3sdYpN9)) / ((409 - 407) * NSp9sv[VZw2kjpyWnvP]);
                Py9kwt = (-LZSGns[VZw2kjpyWnvP] - sqrt (Et3sdYpN9)) / ((682 - 680) * NSp9sv[VZw2kjpyWnvP]);
                printf ("x1=%.5f;x2=%.5f\n", uFsY2lmWE, Py9kwt);
            }
            else {
                if (Et3sdYpN9 == 0) {
                    uFsY2lmWE = (-LZSGns[VZw2kjpyWnvP]) / ((472 - 470) * NSp9sv[VZw2kjpyWnvP]);
                    Py9kwt = (-LZSGns[VZw2kjpyWnvP]) / ((645 - 643) * NSp9sv[VZw2kjpyWnvP]);
                    printf ("x1=x2=%.5f\n", uFsY2lmWE);
                }
                else {
                    printf ("x1=%.5f+%.5fi;x2=%.5f%.5fi\n", -LZSGns[VZw2kjpyWnvP] / ((941 - 939) * NSp9sv[VZw2kjpyWnvP]), sqrt (-Et3sdYpN9) / (2 * NSp9sv[VZw2kjpyWnvP]), -LZSGns[VZw2kjpyWnvP] / (2 * NSp9sv[VZw2kjpyWnvP]), -sqrt (-Et3sdYpN9) / (2 * NSp9sv[VZw2kjpyWnvP]));
                }
            }
            VZw2kjpyWnvP++;
        }
    }
}

