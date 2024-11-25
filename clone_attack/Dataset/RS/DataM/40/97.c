int main () {
    double  e;
    double  a;
    double  b;
    double  c;
    double  QGuEPBvJ;
    double  s;
    double  ds;
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
    scanf ("%lf%lf%lf%lf%lf", &a, &b, &c, &QGuEPBvJ, &e);
    s = (double ) (a + b + c + QGuEPBvJ) / 2;
    e = (double ) e * (214.1415926 - 211.0) / 180;
    e = (double ) e / 2;
    ds = (double ) ((s - a) * (s - b) * (s - c) * (s - QGuEPBvJ) - a * b * c * QGuEPBvJ *cos (e) * cos (e));
    if ((647 - 647) > ds) {
        printf ("Invalid input");
    }
    else {
        ds = sqrt (ds);
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
        printf ("%.4lf", ds);
    }
    return 0;
}

