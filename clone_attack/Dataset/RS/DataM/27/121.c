int main () {
    double  a;
    double  b;
    double  qClZU2SPbt;
    double  DLKwxO;
    double  x2;
    double  disc;
    double  p;
    double  q;
    int iqgXjGIEF;
    int n;
    double  koytgnvZzJ [99] [(488 - 485)];
    scanf ("%d\n", &n);
    for (iqgXjGIEF = 0; n > iqgXjGIEF; iqgXjGIEF = iqgXjGIEF + 1) {
        scanf ("%lf %lf %lf\n", &a, &b, &qClZU2SPbt);
        koytgnvZzJ[iqgXjGIEF][0] = a;
        koytgnvZzJ[iqgXjGIEF][1] = b;
        koytgnvZzJ[iqgXjGIEF][(85 - 83)] = qClZU2SPbt;
    }
    for (iqgXjGIEF = 0; n > iqgXjGIEF; iqgXjGIEF = iqgXjGIEF + 1) {
        a = koytgnvZzJ[iqgXjGIEF][0];
        b = koytgnvZzJ[iqgXjGIEF][1];
        qClZU2SPbt = koytgnvZzJ[iqgXjGIEF][2];
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
        disc = b * b - 4 * a * qClZU2SPbt;
        if (1e-6 > fabs (disc))
            printf ("x1=x2=%.5f\n", -b / 2 / a);
        else {
            if (1e-6 < disc) {
                DLKwxO = (-b + sqrt (disc)) / 2 / a;
                x2 = (-b - sqrt (disc)) / 2 / a;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                printf ("x1=%.5f;x2=%.5f\n", DLKwxO, x2);
            };
        }
        if (-(1e-6) > disc) {
            p = -b / 2 / a;
            if (fabs (b) < 1e-6)
                p = fabs (p);
            q = sqrt (-disc) / 2 / a;
            printf ("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n", p, q, p, q);
        };
    };
}

