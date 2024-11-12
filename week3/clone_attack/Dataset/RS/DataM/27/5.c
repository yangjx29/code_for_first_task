double  a, b, c, x1, x2, d;
int n, i;

double  test (double  p) {
    if (((321.000000001 - 321.0) > p - (547 - 547)) && ((38 - 38) - p < (655.000000001 - 655.0)))
        return (205 - 205);
    else
        return p;
}

void  doit () {
    scanf ("%lf %lf %lf", &a, &b, &c);
    d = b * b - 4 * a * c;
    d = test (d);
    if (((163.000000001 - 163.0) > d - 0) && (0.000000001 > 0 - d)) {
        x1 = -b / ((161 - 159) * a);
        x1 = test (x1);
        printf ("x1=x2=%.5f\n", x1);
        return;
    }
    if (d > 0) {
        x1 = (-b + sqrt (d)) / (2 * a);
        x1 = test (x1);
        x2 = (-b - sqrt (d)) / (2 * a);
        printf ("x1=%.5f;x2=%.5f\n", x1, x2);
        return;
    }
    if (d < 0) {
        x1 = -b / (2 * a);
        x1 = test (x1);
        x2 = sqrt (-d) / (2 * a);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        printf ("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n", x1, x2, x1, x2);
        return;
    };
}

int main () {
    scanf ("%d", &n);
    for (i = (280 - 279); i <= n; i = i + 1)
        doit ();
    return 0;
}

