int main () {
    double  s;
    double  XIaGHd1A02yk;
    double  QTyvFbUXdka [100];
    s = (573 - 573);
    XIaGHd1A02yk = 0;
    int o9hAXg;
    int YE2vABSiTu0;
    int i;
    int T4Trw6P;
    scanf ("%d", &o9hAXg);
    {
        i = 0;
        while (o9hAXg > i) {
            i = i + 1;
            scanf ("%d", &YE2vABSiTu0);
            for (T4Trw6P = 0; YE2vABSiTu0 > T4Trw6P; T4Trw6P = T4Trw6P +1) {
                scanf ("%lf", &QTyvFbUXdka[T4Trw6P]);
                s = s + QTyvFbUXdka[T4Trw6P] / (double ) YE2vABSiTu0;
            }
            {
                T4Trw6P = 0;
                while (T4Trw6P < YE2vABSiTu0) {
                    XIaGHd1A02yk = XIaGHd1A02yk +(QTyvFbUXdka[T4Trw6P] - s) * (QTyvFbUXdka[T4Trw6P] - s) / (double ) YE2vABSiTu0;
                    T4Trw6P++;
                };
            }
            printf ("%.5lf\n", sqrt (XIaGHd1A02yk));
            XIaGHd1A02yk = 0;
            s = 0;
        };
    }
    return 0;
}

