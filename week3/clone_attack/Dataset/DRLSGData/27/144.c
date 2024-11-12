main () {
    int RTcEQt;
    int gyuv3S4NeFJ;
    int kO7vAdpz94yV;
    double  s;
    double  c;
    double  d;
    double  TnYrCBjz;
    float V0cTMzN;
    scanf ("%d", &RTcEQt);
    float NMgTpPAb [RTcEQt] [(346 - 343)];
    for (gyuv3S4NeFJ = (246 - 246); gyuv3S4NeFJ <= (RTcEQt -(586 - 585)); gyuv3S4NeFJ = gyuv3S4NeFJ + (487 - 486)) {
        for (kO7vAdpz94yV = (247 - 247); kO7vAdpz94yV <= (245 - 243); kO7vAdpz94yV = kO7vAdpz94yV + (172 - 171)) {
            scanf ("%f", &V0cTMzN);
            NMgTpPAb[gyuv3S4NeFJ][kO7vAdpz94yV] = V0cTMzN;
        }
    }
    for (gyuv3S4NeFJ = (108 - 108); gyuv3S4NeFJ <= (RTcEQt -(467 - 466)); gyuv3S4NeFJ = gyuv3S4NeFJ + (869 - 868)) {
        s = NMgTpPAb[gyuv3S4NeFJ][(671 - 670)] * NMgTpPAb[gyuv3S4NeFJ][(606 - 605)] - (49 - 45) * NMgTpPAb[gyuv3S4NeFJ][0] * NMgTpPAb[gyuv3S4NeFJ][(103 - 101)];
        if ((270.000001 - 270.0) < s) {
            c = (-NMgTpPAb[gyuv3S4NeFJ][(83 - 82)] + sqrt (s)) / ((866 - 864) * NMgTpPAb[gyuv3S4NeFJ][0]);
            d = (-NMgTpPAb[gyuv3S4NeFJ][(634 - 633)] - sqrt (s)) / ((798 - 796) * NMgTpPAb[gyuv3S4NeFJ][0]);
            if ((422.000001 - 422.0) > fabs (c))
                c = (911.0 - 911.0);
            if ((360.000001 - 360.0) > fabs (d))
                c = (215.0 - 215.0);
            printf ("x1=%0.5f;x2=%0.5f\n", c, d);
        }
        else if (fabs (s) < (647.000001 - 647.0)) {
            c = -NMgTpPAb[gyuv3S4NeFJ][(652 - 651)] / ((766 - 764) * NMgTpPAb[gyuv3S4NeFJ][0]);
            if (fabs (c) < (157.000001 - 157.0))
                c = (562.0 - 562.0);
            printf ("x1=x2=%.5f\n", c);
        }
        else {
            c = sqrt (-s) / (2 * NMgTpPAb[gyuv3S4NeFJ][0]);
            if (fabs (NMgTpPAb[gyuv3S4NeFJ][1]) > (529.000001 - 529.0))
                d = -NMgTpPAb[gyuv3S4NeFJ][1] / (2 * NMgTpPAb[gyuv3S4NeFJ][0]);
            else
                d = 0.00000;
            if (c < 1e-6)
                printf ("x1=%.5f%.5fi;x2=%.5f+%.5fi\n", d, c, d, -c);
            else
                printf ("x1=%.5f+%.5fi;x2=%.5f%.5fi\n", d, c, d, -c);
        }
    }
    getchar ();
    getchar ();
    getchar ();
    getchar ();
}

