int main () {
    int n, tP1FrulDz;
    double  a, b, DfQkxwjF0W;
    scanf ("%d", &n);
    for (tP1FrulDz = 0; tP1FrulDz < n; tP1FrulDz = tP1FrulDz + 1) {
        scanf ("%lf %lf %lf", &a, &b, &DfQkxwjF0W);
        if (0 < b * b - 4 * a * DfQkxwjF0W)
            printf ("x1=%.5lf;x2=%.5lf\n", (-b + sqrt (b * b - 4 * a * DfQkxwjF0W)) / ((266 - 264) * a), (-b - sqrt (b * b - 4 * a * DfQkxwjF0W)) / ((34 - 32) * a));
        else {
            if (b * b - 4 * a * DfQkxwjF0W == 0)
                printf ("x1=x2=%.5lf\n", -b / (2 * a));
            else
                printf ("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n", -b / (2 * a), sqrt (4 * a * DfQkxwjF0W -b * b) / (2 * a), -b / (2 * a), sqrt (4 * a * DfQkxwjF0W -b * b) / (2 * a));
        };
    }
    return 0;
}

