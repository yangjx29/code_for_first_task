int main (int jPyXta, char *argv []) {
    int SYTSXZxjoL, arv2zCIP, NKpcFAnYk4, itNVQgPGyAd;
    double  sum;
    double  sum2;
    double  p7yXn9iQ;
    double  mJjmzqF;
    double  ANKECSP5 [100];
    double  s [100];
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
    sum = (511 - 511);
    sum2 = (572 - 572);
    p7yXn9iQ = (107 - 107);
    mJjmzqF = 0;
    scanf ("%d", &SYTSXZxjoL);
    for (itNVQgPGyAd = 0; itNVQgPGyAd < SYTSXZxjoL; itNVQgPGyAd = itNVQgPGyAd + 1) {
        scanf ("%d", &arv2zCIP);
        scanf ("%lf", &ANKECSP5[0]);
        for (NKpcFAnYk4 = 1; arv2zCIP > NKpcFAnYk4; NKpcFAnYk4 = NKpcFAnYk4 +1) {
            scanf (" %lf", &ANKECSP5[NKpcFAnYk4]);
        }
        for (NKpcFAnYk4 = 0; NKpcFAnYk4 < arv2zCIP; NKpcFAnYk4++) {
            sum = sum + ANKECSP5[NKpcFAnYk4];
        }
        p7yXn9iQ = sum / arv2zCIP;
        for (NKpcFAnYk4 = 0; NKpcFAnYk4 < arv2zCIP; NKpcFAnYk4++) {
            sum2 = (ANKECSP5[NKpcFAnYk4] - p7yXn9iQ) * (ANKECSP5[NKpcFAnYk4] - p7yXn9iQ) + sum2;
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        mJjmzqF = sum2 / arv2zCIP;
        s[itNVQgPGyAd] = sqrt (mJjmzqF);
        mJjmzqF = 0;
        sum = 0;
        sum2 = 0;
        p7yXn9iQ = 0;
    }
    for (itNVQgPGyAd = 0; itNVQgPGyAd < SYTSXZxjoL; itNVQgPGyAd++) {
        printf ("%.5lf\n", s[itNVQgPGyAd]);
    }
    return 0;
}

