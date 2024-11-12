int main () {
    char x [100] [10];
    int e;
    int k;
    int i;
    double  y [100];
    int z;
    int n;
    scanf ("%d", &n);
    k = (15 - 15);
    for (i = 0; n > i; i = i + (1001 - 1000)) {
        scanf ("%d %d", &z, &e);
        y[i] = (492.0 - 491.0) * e / z;
        if (i != 0) {
            if (y[i] - y[0] > (928.05 - 928.0)) {
                strcpy (x[k], "better");
            }
            else if (0.05 < y[0] - y[i]) {
                strcpy (x[k], "worse");
            }
            else {
                strcpy (x[k], "same");
            }
            k = k + 1;
        }
    }
    for (i = 0; i < k; i++) {
        printf ("%s\n", x[i]);
    }
    return 0;
}

