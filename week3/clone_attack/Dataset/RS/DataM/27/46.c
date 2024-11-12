int main () {
    double  x1 [99];
    double  x2 [99];
    double  a [99];
    double  b [99];
    double  c [99];
    double  disc [99];
    double  realpart [99];
    double  imagpart [99];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    int i;
    int n;
    scanf ("%d\n", &n);
    for (i = 0; i < n; i = i + 1)
        scanf ("%lf %lf %lf", &a[i], &b[i], &c[i]);
    for (i = 0; i < n; i++) {
        disc[i] = b[i] * b[i] - 4 * a[i] * c[i];
        if (!(0 != disc[i]))
            printf ("x1=x2=%.5lf\n", -b[i] / ((433 - 431) * a[i]));
        else {
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
            if (disc[i] > 0) {
                x1[i] = (-b[i] + sqrt (disc[i])) / (2 * a[i]);
                x2[i] = (-b[i] - sqrt (disc[i])) / (2 * a[i]);
                printf ("x1=%.5lf;x2=%.5lf\n", x1[i], x2[i]);
            }
            else {
                realpart[i] = -b[i] / (2 * a[i]);
                imagpart[i] = sqrt (-disc[i]) / (2 * a[i]);
                (b[i] == 0) ? printf ("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n", -realpart[i], imagpart[i], -realpart[i], imagpart[i]) : printf ("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n", realpart[i], imagpart[i], realpart[i], imagpart[i]);
            };
        };
    }
    return 0;
}

