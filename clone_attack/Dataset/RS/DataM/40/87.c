double  f (double  bj1ugJtVd, double  b, double  c, double  d, double  e) {
    double  s;
    double  S;
    s = (bj1ugJtVd + b + c + d) / 2;
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
    e = e / 180 * 3.1415926;
    S = (s - bj1ugJtVd) * (s - b) * (s - c) * (s - d) - bj1ugJtVd * b * c * d * cos (e / 2) * cos (e / 2);
    return S;
}

void  main () {
    double  E8DrTYz;
    double  bj1ugJtVd;
    double  b;
    double  c;
    double  d;
    double  e;
    scanf ("%lf\n%lf\n%lf\n%lf\n%lf", &bj1ugJtVd, &b, &c, &d, &e);
    if (f (bj1ugJtVd, b, c, d, e) < 0) {
        printf ("Invalid input");
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
        };
    }
    else {
        E8DrTYz = sqrt (f (bj1ugJtVd, b, c, d, e));
        printf ("%.4lf", E8DrTYz);
    };
}

