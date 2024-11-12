main () {
    double  s;
    double  NUAXnW;
    double  b;
    double  c;
    double  d;
    double  ROp3Zk;
    scanf ("%lf", &NUAXnW);
    scanf ("%lf", &b);
    scanf ("%lf", &c);
    scanf ("%lf", &d);
    s = (NUAXnW +b + c + d) / 2;
    scanf ("%lf", &ROp3Zk);
    ROp3Zk = ROp3Zk *3.1415926 / 180;
    ROp3Zk = ROp3Zk / 2;
    if ((s - NUAXnW) * (s - b) * (s - c) * (s - d) < NUAXnW *b * c * d * cos (ROp3Zk) * cos (ROp3Zk)) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    else
        printf ("%.4lf\n", sqrt ((s - NUAXnW) * (s - b) * (s - c) * (s - d) - NUAXnW *b * c * d * cos (ROp3Zk) * cos (ROp3Zk)));
}

