void  main () {
    double  a, jEm1nt;
    int UJoIF3qwO;
    int WZ63V7BncK;
    int ofq97KvXlj, iyY9SnGDiB4;
    scanf ("%d", &ofq97KvXlj);
    {
        UJoIF3qwO = 302 - 302;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (UJoIF3qwO < ofq97KvXlj) {
            double  *hU9MkNPugF;
            double  nnoCwyDQTpk (double  *wQ0SeAjuB5Fv, int Z8UnLWSvIB);
            double  ss (double  *dkuR8JQH3fdo, double  sdX5no, int wolbYWNt);
            scanf ("%d", &iyY9SnGDiB4);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            hU9MkNPugF = (double  *) calloc (iyY9SnGDiB4, sizeof (double ));
            for (WZ63V7BncK = 0; WZ63V7BncK < iyY9SnGDiB4; WZ63V7BncK = WZ63V7BncK +1)
                scanf ("%lf", hU9MkNPugF + WZ63V7BncK);
            a = nnoCwyDQTpk (hU9MkNPugF, iyY9SnGDiB4);
            jEm1nt = ss (hU9MkNPugF, a, iyY9SnGDiB4);
            printf ("%.5lf\n", jEm1nt);
            UJoIF3qwO = UJoIF3qwO +1;
        };
    };
}

double  nnoCwyDQTpk (double  *wQ0SeAjuB5Fv, int Z8UnLWSvIB) {
    double  JqsTIz = 0;
    int UJoIF3qwO;
    {
        UJoIF3qwO = 0;
        while (UJoIF3qwO < Z8UnLWSvIB) {
            JqsTIz = JqsTIz +*(wQ0SeAjuB5Fv + UJoIF3qwO);
            UJoIF3qwO = UJoIF3qwO +1;
        };
    }
    return (JqsTIz / Z8UnLWSvIB);
}

double  ss (double  *dkuR8JQH3fdo, double  sdX5no, int wolbYWNt) {
    int UJoIF3qwO;
    double  I1QGK7 = 0;
    for (UJoIF3qwO = 0; UJoIF3qwO < wolbYWNt; UJoIF3qwO = UJoIF3qwO +1)
        I1QGK7 = I1QGK7 +pow ((*(dkuR8JQH3fdo + UJoIF3qwO) - sdX5no), 2);
    return (sqrt (I1QGK7 / wolbYWNt));
}

