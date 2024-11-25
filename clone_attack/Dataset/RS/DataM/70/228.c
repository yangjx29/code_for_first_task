void  main () {
    int o5cHohBvXfY;
    int n;
    int i;
    int j;
    o5cHohBvXfY = (818 - 818);
    double  kQsGVizRu [100] [2];
    double  dis [4950];
    double  t;
    double  m;
    double  max (double  EETciM [], int n);
    scanf ("%d", &n);
    for (i = 0; n > i; i = i + 1) {
        scanf ("%lf %lf", &kQsGVizRu[i][0], &kQsGVizRu[i][1]);
    }
    for (i = 0; n > i; i = i + 1) {
        j = i + 1;
        while (j < n) {
            t = (kQsGVizRu[i][0] - kQsGVizRu[j][0]) * (kQsGVizRu[i][0] - kQsGVizRu[j][0]) + (kQsGVizRu[i][1] - kQsGVizRu[j][1]) * (kQsGVizRu[i][1] - kQsGVizRu[j][1]);
            j = j + 1;
            dis[o5cHohBvXfY] = sqrt (t);
            o5cHohBvXfY++;
        };
    }
    m = max (dis, o5cHohBvXfY - 1);
    printf ("%.4lf\n", m);
}

double  max (double  EETciM [], int n) {
    int i;
    double  t;
    t = EETciM[0];
    for (i = 1; i < n; i++) {
        if (EETciM[i] > t)
            t = EETciM[i];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        };
    }
    return (t);
}

