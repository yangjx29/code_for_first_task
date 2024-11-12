struct   point {
    double  pJqOfe;
    double  y;
}
KsJqaUEG [100];

void  main () {
    int xhTDFP, hbnZTrwyW3NP, lUGDHW, uKs5fmWZ = (930 - 930);
    double  RbQmUKNpn (double  x1, double  y1, double  NuTSBt6gh2Ze, double  PvtM6KG2);
    double  UEqeUxChzQNM, mUcSgN26sY [100];
    scanf ("%d", &xhTDFP);
    for (hbnZTrwyW3NP = 0; hbnZTrwyW3NP < xhTDFP; hbnZTrwyW3NP++) {
        scanf ("%lf%lf", &KsJqaUEG[hbnZTrwyW3NP].pJqOfe, &KsJqaUEG[hbnZTrwyW3NP].y);
    }
    for (hbnZTrwyW3NP = 0; hbnZTrwyW3NP < xhTDFP - 1; hbnZTrwyW3NP++) {
        lUGDHW = 1;
        while (lUGDHW < xhTDFP - hbnZTrwyW3NP) {
            mUcSgN26sY[uKs5fmWZ] = RbQmUKNpn (KsJqaUEG[hbnZTrwyW3NP].pJqOfe, KsJqaUEG[hbnZTrwyW3NP].y, KsJqaUEG[lUGDHW + hbnZTrwyW3NP].pJqOfe, KsJqaUEG[lUGDHW + hbnZTrwyW3NP].y);
            lUGDHW++;
            uKs5fmWZ++;
        };
    }
    UEqeUxChzQNM = mUcSgN26sY[0];
    {
        hbnZTrwyW3NP = 1;
        while (hbnZTrwyW3NP < uKs5fmWZ - 1) {
            if (mUcSgN26sY[hbnZTrwyW3NP] > UEqeUxChzQNM)
                UEqeUxChzQNM = mUcSgN26sY[hbnZTrwyW3NP];
            hbnZTrwyW3NP++;
        };
    }
    printf ("%.4lf", UEqeUxChzQNM);
}

double  RbQmUKNpn (double  x1, double  y1, double  NuTSBt6gh2Ze, double  PvtM6KG2) {
    return (sqrt ((x1 - NuTSBt6gh2Ze) * (x1 - NuTSBt6gh2Ze) + (y1 - PvtM6KG2) * (y1 - PvtM6KG2)));
}

