main () {
    int ZN3EDuV, sBnsmy;
    int q7rfISJTLi;
    double  d = 0, s;
    int HA9qRtvVb;
    double  *a = (double  *) malloc (q7rfISJTLi * sizeof (double ));
    double  *b = (double  *) malloc (q7rfISJTLi * sizeof (double ));
    double  *pGVFjzDk = (double  *) malloc (HA9qRtvVb * sizeof (double ));
    scanf ("%d", &q7rfISJTLi);
    HA9qRtvVb = q7rfISJTLi * (q7rfISJTLi - 1) / 2;
    {
        ZN3EDuV = 0;
        while (q7rfISJTLi > ZN3EDuV) {
            scanf ("%lf %lf", &a[ZN3EDuV], &b[ZN3EDuV]);
            ZN3EDuV = ZN3EDuV +1;
        };
    }
    {
        ZN3EDuV = 0;
        while (q7rfISJTLi - 1 > ZN3EDuV) {
            for (sBnsmy = ZN3EDuV +1; q7rfISJTLi > sBnsmy; sBnsmy = sBnsmy + 1) {
                s = sqrt ((a[ZN3EDuV] - a[sBnsmy]) * (a[ZN3EDuV] - a[sBnsmy]) + (b[ZN3EDuV] - b[sBnsmy]) * (b[ZN3EDuV] - b[sBnsmy]));
                if (s > d)
                    d = s;
            }
            ZN3EDuV = ZN3EDuV +1;
        };
    }
    printf ("%.4f", d);
}

