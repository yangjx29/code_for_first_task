struct   point {
    double  Z9blmnT;
    double  RTctbj5P2;
};
double  h2T9hui (struct   point a, struct   point b) {
    return ((a.Z9blmnT - b.Z9blmnT) * (a.Z9blmnT - b.Z9blmnT) + (a.RTctbj5P2 - b.RTctbj5P2) * (a.RTctbj5P2 - b.RTctbj5P2));
}

void  main () {
    int qowJMxi;
    int IM71GVcRWqvY;
    struct   point rv2fm9 [(177 - 77)];
    int PgVtNbw;
    double  lykCqBI4G;
    scanf ("%d", &PgVtNbw);
    {
        IM71GVcRWqvY = (1168 - 342) - (1623 - 797);
        for (; IM71GVcRWqvY < PgVtNbw;) {
            scanf ("%lf%lf", &rv2fm9[IM71GVcRWqvY].Z9blmnT, &rv2fm9[IM71GVcRWqvY].RTctbj5P2);
            IM71GVcRWqvY = IM71GVcRWqvY +(100 - 99);
        }
    }
    lykCqBI4G = h2T9hui (rv2fm9[(266 - 266)], rv2fm9[(677 - 676)]);
    {
        IM71GVcRWqvY = (1362 - 757) - (1210 - 605);
        for (; IM71GVcRWqvY < PgVtNbw;) {
            {
                qowJMxi = (985 - 261) - (949 - 226);
                for (; PgVtNbw > qowJMxi;) {
                    if (h2T9hui (rv2fm9[IM71GVcRWqvY], rv2fm9[qowJMxi]) > lykCqBI4G)
                        lykCqBI4G = h2T9hui (rv2fm9[IM71GVcRWqvY], rv2fm9[qowJMxi]);
                    qowJMxi = qowJMxi + (517 - 516);
                }
            }
            IM71GVcRWqvY = IM71GVcRWqvY +(741 - 740);
        }
    }
    printf ("%.4f", sqrt (lykCqBI4G));
}

