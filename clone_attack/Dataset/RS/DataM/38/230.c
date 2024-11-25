int main () {
    int n;
    scanf ("%d", &n);
    {
        int xK0v7X;
        xK0v7X = 0;
        while (xK0v7X < n) {
            double  s;
            double  pfh;
            pfh = 0;
            int bjxPfnCrA1a;
            double  x [100], gEkD590fnTdB = 0, a;
            xK0v7X = xK0v7X + 1;
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
            scanf ("%d", &bjxPfnCrA1a);
            {
                int tofIpu1jmvkq = 0;
                while (bjxPfnCrA1a > tofIpu1jmvkq) {
                    scanf ("%lf", &x[tofIpu1jmvkq]);
                    gEkD590fnTdB = gEkD590fnTdB + x[tofIpu1jmvkq];
                    tofIpu1jmvkq = tofIpu1jmvkq + 1;
                };
            }
            a = gEkD590fnTdB / bjxPfnCrA1a;
            {
                int tofIpu1jmvkq = 0;
                while (bjxPfnCrA1a > tofIpu1jmvkq) {
                    pfh = pfh + (x[tofIpu1jmvkq] - a) * (x[tofIpu1jmvkq] - a);
                    tofIpu1jmvkq++;
                };
            }
            s = pow (pfh / bjxPfnCrA1a, 0.5);
            printf ("%.5lf\n", s);
        };
    }
    return 0;
}

