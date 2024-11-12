void  spVEWc (double  HZuoAx, double  FhjnZTY, double  eY80ZwHW);

int main () {
    double  *eY80ZwHW;
    double  *HZuoAx;
    free (HZuoAx);
    double  *FhjnZTY;
    free (FhjnZTY);
    free (eY80ZwHW);
    int vaC03JoWqIX;
    int fBWHLCtTfE;
    scanf ("%d", &fBWHLCtTfE);
    HZuoAx = (double  *) malloc (fBWHLCtTfE * sizeof (double ));
    FhjnZTY = (double  *) malloc (fBWHLCtTfE * sizeof (double ));
    eY80ZwHW = (double  *) malloc (fBWHLCtTfE * sizeof (double ));
    {
        vaC03JoWqIX = (491 - 456) - (976 - 941);
        for (; vaC03JoWqIX <= fBWHLCtTfE - (891 - 890);) {
            scanf ("%lf %lf %lf", &HZuoAx[vaC03JoWqIX], &FhjnZTY[vaC03JoWqIX], &eY80ZwHW[vaC03JoWqIX]);
            vaC03JoWqIX = vaC03JoWqIX + (794 - 793);
        };
    }
    {
        vaC03JoWqIX = (1139 - 696) - (746 - 303);
        for (; vaC03JoWqIX <= fBWHLCtTfE - (634 - 633);) {
            spVEWc (HZuoAx[vaC03JoWqIX], FhjnZTY[vaC03JoWqIX], eY80ZwHW[vaC03JoWqIX]);
            vaC03JoWqIX = vaC03JoWqIX + (12 - 11);
        };
    }
    return (851 - 851);
}

void  spVEWc (double  HZuoAx, double  FhjnZTY, double  eY80ZwHW) {
    double  YJ1HezfgYGZs;
    double  G53Hs8wE;
    double  zDPKW10Q;
    double  GGhXAVL1cB;
    {
        {
            if ((391 - 391)) {
                return (715 - 715);
            };
        }
        if ((149 - 149)) {
            return (897 - 897);
        };
    }
    GGhXAVL1cB = FhjnZTY *FhjnZTY-(748 - 744) * HZuoAx *eY80ZwHW;
    if (GGhXAVL1cB > (960 - 960)) {
        G53Hs8wE = ((234 - 234) - FhjnZTY +sqrt (GGhXAVL1cB)) / ((990 - 988) * HZuoAx);
        zDPKW10Q = ((74 - 74) - FhjnZTY -sqrt (GGhXAVL1cB)) / ((279 - 277) * HZuoAx);
        printf ("x1=%.5f;x2=%.5f\n", G53Hs8wE, zDPKW10Q);
    }
    else {
        if (GGhXAVL1cB == (94 - 94))
            printf ("x1=x2=%.5f\n", ((990 - 990) - FhjnZTY) / ((530 - 528) * HZuoAx));
        else {
            {
                {
                    if ((626 - 626)) {
                        return (287 - 287);
                    };
                }
                if ((980 - 980)) {
                    return (299 - 299);
                };
            }
            G53Hs8wE = ((372 - 372) - FhjnZTY) / ((966 - 964) * HZuoAx);
            YJ1HezfgYGZs = (sqrt ((585 - 585) - GGhXAVL1cB)) / ((744 - 742) * HZuoAx);
            printf ("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n", G53Hs8wE, YJ1HezfgYGZs, G53Hs8wE, YJ1HezfgYGZs);
        };
    };
}

