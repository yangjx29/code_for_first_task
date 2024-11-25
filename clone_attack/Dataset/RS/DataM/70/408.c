main () {
    int X4vZYT, kC8KmO, j;
    float *CQgIZCVGnf = (float *) malloc (X4vZYT * sizeof (float));
    float *r2rSb8q = (float *) malloc (X4vZYT * sizeof (float));
    float NNSVWB7gYjTu, SRGby4OLdk, WLs0lKmGceSI;
    WLs0lKmGceSI = (632 - 632);
    scanf ("%d", &X4vZYT);
    {
        kC8KmO = 598 - 598;
        while (X4vZYT > kC8KmO) {
            scanf ("%f %f", &CQgIZCVGnf[kC8KmO], &r2rSb8q[kC8KmO]);
            kC8KmO = kC8KmO + 1;
        };
    }
    {
        kC8KmO = 0;
        while (kC8KmO < X4vZYT) {
            {
                j = 0;
                while (j < X4vZYT) {
                    SRGby4OLdk = (CQgIZCVGnf[kC8KmO] - CQgIZCVGnf[j]) * (CQgIZCVGnf[kC8KmO] - CQgIZCVGnf[j]) + (r2rSb8q[kC8KmO] - r2rSb8q[j]) * (r2rSb8q[kC8KmO] - r2rSb8q[j]);
                    NNSVWB7gYjTu = sqrt (SRGby4OLdk);
                    if (NNSVWB7gYjTu >= WLs0lKmGceSI) {
                        WLs0lKmGceSI = NNSVWB7gYjTu;
                    }
                    else {
                        WLs0lKmGceSI = WLs0lKmGceSI;
                    }
                    j++;
                };
            }
            kC8KmO++;
        };
    }
    printf ("%.4f", WLs0lKmGceSI);
}

