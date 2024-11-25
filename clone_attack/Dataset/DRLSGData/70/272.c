int main () {
    double  GfP62je [1000], g21dFxkjfuY [10000];
    int HbmYUTHM, lfuXSO8V, NnmET4fe;
    double  TnFhCsWO7G, QzJi5go, yd, jdlvbZx7ufa;
    scanf ("%d", &HbmYUTHM);
    jdlvbZx7ufa = 0;
    TnFhCsWO7G = 0;
    {
        lfuXSO8V = 0;
        while (lfuXSO8V < HbmYUTHM) {
            scanf ("%lf", &GfP62je[lfuXSO8V]);
            scanf ("%lf", &g21dFxkjfuY[lfuXSO8V]);
            lfuXSO8V++;
        }
    }
    {
        lfuXSO8V = 0;
        while (lfuXSO8V < HbmYUTHM -1) {
            for (NnmET4fe = lfuXSO8V; HbmYUTHM > NnmET4fe; NnmET4fe++) {
                QzJi5go = GfP62je[lfuXSO8V] - GfP62je[NnmET4fe];
                yd = g21dFxkjfuY[lfuXSO8V] - g21dFxkjfuY[NnmET4fe];
                jdlvbZx7ufa = sqrt (QzJi5go *QzJi5go+yd * yd);
                if (jdlvbZx7ufa > TnFhCsWO7G)
                    TnFhCsWO7G = jdlvbZx7ufa;
            }
            lfuXSO8V++;
        }
    }
    printf ("%.4lf\n", TnFhCsWO7G);
    return 0;
}

