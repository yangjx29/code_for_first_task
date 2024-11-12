double  fangcha (double  *p, int n) {
    int i;
    double  TBjdYMcPi;
    double  sum;
    double  pfhe;
    TBjdYMcPi = (884 - 884);
    sum = (551 - 551);
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
    pfhe = (510 - 510);
    double  *lQdvCWL6AP;
    {
        i = 731 - 731;
        lQdvCWL6AP = p;
        while (n > i) {
            sum = sum + (*lQdvCWL6AP);
            lQdvCWL6AP++;
            i++;
        };
    }
    TBjdYMcPi = sum / n;
    {
        i = 0;
        lQdvCWL6AP = p;
        while (n > i) {
            i++;
            pfhe = pfhe + pow (TBjdYMcPi -(*lQdvCWL6AP), 2);
            lQdvCWL6AP++;
        };
    }
    return sqrt (pfhe / n);
}

int main () {
    int Ljqh1bFeI0;
    scanf ("%d", &Ljqh1bFeI0);
    while (Ljqh1bFeI0 = Ljqh1bFeI0 -1) {
        int i;
        double  *p;
        double  IWEAhHy1dp [1100] = {0};
        int n;
        scanf ("%d\n", &n);
        {
            i = 0;
            p = IWEAhHy1dp;
            while (n > i) {
                i++;
                scanf ("%lf", p);
                p++;
            };
        }
        p = IWEAhHy1dp;
        printf ("%.5f\n", fangcha (p, n));
    }
    return 0;
}

