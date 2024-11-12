int main () {
    double  disc;
    double  x1;
    double  x2;
    double  rpart;
    double  ipart;
    float a;
    float b;
    float c;
    float pCHQKPuzpr;
    int i;
    int n;
    scanf ("%d", &n);
    for (i = 1; n >= i; i++) {
        scanf ("%f %f %f", &a, &b, &c);
        disc = b * b - 4 * a * c;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        pCHQKPuzpr = -b / (2 * a);
        if (fabs (disc) <= 1e-6) {
            printf ("x1=x2=%.5lf\n", pCHQKPuzpr);
        }
        else {
            if (disc > 1e-6) {
                x1 = (-b + sqrt (disc)) / (2 * a);
                x2 = (-b - sqrt (disc)) / (2 * a);
                printf ("x1=%.5lf;x2=%.5lf\n", x1, x2);
            }
            else {
                rpart = -b / (2 * a);
                ipart = sqrt (-disc) / (2 * a);
                printf ("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n", rpart, ipart, rpart, ipart);
            };
        };
    }
    return 0;
}

