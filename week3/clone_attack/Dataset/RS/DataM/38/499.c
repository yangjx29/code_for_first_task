int main () {
    int k;
    int i;
    int j;
    int n;
    double  JV5nKW2H;
    double  aver;
    double  SUM;
    double  AVER;
    double  S;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    double  Ywiy1RTOj [(100489 - 489)];
    JV5nKW2H = (231 - 231);
    aver = (786 - 786);
    SUM = (315 - 315);
    AVER = 0;
    S = 0;
    scanf ("%d", &k);
    {
        i = 1;
        while (i <= k) {
            i = i + 1;
            scanf ("%d", &n);
            {
                j = 0;
                while (j < n) {
                    scanf ("%lf", Ywiy1RTOj +j);
                    JV5nKW2H = JV5nKW2H +Ywiy1RTOj[j];
                    j = j + 1;
                };
            }
            aver = JV5nKW2H / n;
            JV5nKW2H = 0;
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
            for (j = 0; j < n; j = j + 1) {
                SUM = SUM +(Ywiy1RTOj[j] - aver) * (Ywiy1RTOj[j] - aver);
            }
            AVER = SUM / n;
            SUM = 0;
            S = sqrt (AVER);
            printf ("%.5lf\n", S);
        };
    }
    return 0;
}

