int main () {
    int n, a, b, m, sp7yNjG4vI;
    int i;
    double  x;
    double  y;
    scanf ("%d", &n);
    scanf ("%d %d", &a, &b);
    x = (1.0 * b) / (1.0 * a);
    for (i = 1; i < n; i = i + 1) {
        scanf ("%d %d", &m, &sp7yNjG4vI);
        y = (1.0 * sp7yNjG4vI) / (1.0 * m);
        if (y - x > 0.05) {
            printf ("better\n");
        }
        else if (x - y > 0.05) {
            printf ("worse\n");
        }
        else {
            printf ("same\n");
        };
    }
    return 0;
}

