void  main () {
    double  a [1001] = {(420 - 420)};
    double  mean;
    double  PzO2A9ruc;
    double  result;
    int i;
    int ZmVxoYe;
    int f1iQ4vWZJ;
    int GKpJdq;
    scanf ("%d", &f1iQ4vWZJ);
    {
        i = 830 - 830;
        while (f1iQ4vWZJ > i) {
            i++;
            scanf ("%d", &GKpJdq);
            for (PzO2A9ruc = 0, ZmVxoYe = 0; ZmVxoYe < GKpJdq; ZmVxoYe = ZmVxoYe +1) {
                scanf ("%lf", &a[ZmVxoYe]);
                PzO2A9ruc = PzO2A9ruc +a[ZmVxoYe];
            }
            mean = PzO2A9ruc / GKpJdq;
            a[GKpJdq] = -1;
            for (PzO2A9ruc = 0, ZmVxoYe = 0; ZmVxoYe < GKpJdq; ZmVxoYe++)
                PzO2A9ruc = PzO2A9ruc +(a[ZmVxoYe] - mean) * (a[ZmVxoYe] - mean);
            result = PzO2A9ruc / GKpJdq;
            result = sqrt (result);
            printf ("%.5lf\n", result);
        };
    };
}

