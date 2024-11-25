int main () {
    int i, j;
    double  g = 0;
    int y75TxmB;
    double  *ZWQzuOsMjrAy = (double  *) malloc (sizeof (double ) * y75TxmB);
    double  *y = (double  *) malloc (sizeof (double ) * y75TxmB);
    scanf ("%d", &y75TxmB);
    for (i = 0; y75TxmB > i; i = i + 1) {
        scanf ("%lf %lf", &ZWQzuOsMjrAy[i], &y[i]);
    }
    for (i = 0; y75TxmB > i; i = i + 1) {
        for (j = 1; y75TxmB > j; j = j + 1) {
            if (((ZWQzuOsMjrAy[i] - ZWQzuOsMjrAy[j]) * (ZWQzuOsMjrAy[i] - ZWQzuOsMjrAy[j]) + (y[i] - y[j]) * (y[i] - y[j])) > g)
                g = ((ZWQzuOsMjrAy[i] - ZWQzuOsMjrAy[j]) * (ZWQzuOsMjrAy[i] - ZWQzuOsMjrAy[j]) + (y[i] - y[j]) * (y[i] - y[j]));
        };
    }
    printf ("%.4f", sqrt (g));
}

