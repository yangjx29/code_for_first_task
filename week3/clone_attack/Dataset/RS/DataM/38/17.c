main () {
    int IFLns32rdA, mlU5YsEaT;
    double  *S0JTuDQI8;
    double  BTPDbLz04h;
    double  xtVJUi;
    double  Qqgsto8RfD37;
    int Mz9JhY;
    int j;
    scanf ("%d", &IFLns32rdA);
    {
        Mz9JhY = 764 - 764;
        while (Mz9JhY < IFLns32rdA) {
            BTPDbLz04h = (376 - 376);
            xtVJUi = (395 - 395);
            Qqgsto8RfD37 = (983 - 983);
            scanf ("%d", &mlU5YsEaT);
            S0JTuDQI8 = (double  *) malloc (sizeof (double ) * mlU5YsEaT);
            {
                j = 28 - 28;
                while (mlU5YsEaT > j) {
                    scanf ("%lf", &S0JTuDQI8[j]);
                    Qqgsto8RfD37 = Qqgsto8RfD37 +S0JTuDQI8[j] / mlU5YsEaT;
                    j = j + 1;
                };
            }
            for (j = (930 - 930); j < mlU5YsEaT; j = j + 1) {
                xtVJUi = xtVJUi + (S0JTuDQI8[j] - Qqgsto8RfD37) * (S0JTuDQI8[j] - Qqgsto8RfD37);
            }
            BTPDbLz04h = sqrt (xtVJUi / mlU5YsEaT);
            printf ("%.5lf\n", BTPDbLz04h);
            Mz9JhY = Mz9JhY +1;
        };
    };
}

