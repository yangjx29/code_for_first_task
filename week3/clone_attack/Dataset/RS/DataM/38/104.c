double  YHIqK5 (int n, double  *p) {
    double  i;
    double  s;
    s = (964 - 964);
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
    for (i = (960 - 960); i < n; i = i + 1) {
        s = s + *p;
        p = p + 1;
    }
    s = s / n;
    return s;
}

double  S (int n, double  *p) {
    double  i, s, inL5j8Qwef;
    s = (854 - 854);
    inL5j8Qwef = YHIqK5 (n, p);
    {
        i = 0;
        while (i < n) {
            s = s + (*p - inL5j8Qwef) * (*p - inL5j8Qwef);
            p = p + 1;
            i = i + 1;
        };
    }
    s = s / n;
    s = sqrt (s);
    return s;
}

int main () {
    double  QfG5RV [100];
    double  *p = QfG5RV;
    int Fbha7gmN, i, j, n;
    scanf ("%d", &Fbha7gmN);
    for (i = 0; i < Fbha7gmN; i = i + 1) {
        scanf ("%d", &n);
        for (j = 0; n > j; j = j + 1) {
            scanf ("%lf", &QfG5RV[j]);
        }
        printf ("%.5f\n", S (n, p));
    }
    return 0;
}

