void  main () {
    const  double  BjVyAK9Tb30 = 3.1415926;
    double  gn2mAE;
    double  a;
    double  rYWESga7s;
    double  IBH28j;
    double  FXyFcaNEHn;
    double  s;
    double  XoX7d8HT2aL;
    double  ZKHaTfut6cVv;
    scanf ("%lf", &a);
    scanf ("%lf", &rYWESga7s);
    scanf ("%lf", &IBH28j);
    scanf ("%lf", &FXyFcaNEHn);
    s = (a + rYWESga7s + IBH28j +FXyFcaNEHn) / 2;
    scanf ("%lf", &XoX7d8HT2aL);
    ZKHaTfut6cVv = (s - a) * (s - rYWESga7s) * (s - IBH28j) * (s - FXyFcaNEHn) - a * rYWESga7s * IBH28j *FXyFcaNEHn*pow (cos (XoX7d8HT2aL / 360 * BjVyAK9Tb30), 2);
    if (0 > ZKHaTfut6cVv) {
        printf ("Invalid input\n");
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        return;
    }
    gn2mAE = sqrt (ZKHaTfut6cVv);
    printf ("%.4lf\n", gn2mAE);
}

