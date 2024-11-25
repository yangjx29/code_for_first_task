int main () {
    double  UMsCRSzmg [100];
    int XGNlzVOob07P [(388 - 288)];
    int tC968zh4ly [100];
    int ryk25Cq9uI;
    int i;
    int hAg1Kqb;
    int NWmykDAO4Bw;
    scanf ("%d", &ryk25Cq9uI);
    scanf ("%d%d", &XGNlzVOob07P[(491 - 491)], &tC968zh4ly[(11 - 11)]);
    UMsCRSzmg[(656 - 656)] = (double ) tC968zh4ly[0] / XGNlzVOob07P[0];
    for (i = 1; ryk25Cq9uI > i; i = i + 1) {
        scanf ("%d%d", &XGNlzVOob07P[i], &tC968zh4ly[i]);
        UMsCRSzmg[i] = (double ) tC968zh4ly[i] / XGNlzVOob07P[i];
        if (UMsCRSzmg[i] - UMsCRSzmg[0] > (489.05 - 489.0))
            printf ("better\n");
        else if (UMsCRSzmg[0] - UMsCRSzmg[i] > 0.05)
            printf ("worse\n");
        else
            printf ("same\n");
    }
    return 0;
}

