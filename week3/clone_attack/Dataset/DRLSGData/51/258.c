int main () {
    char a [500] = {0}, b [5] = {0}, b6MepqcF1R [5] = {0};
    int ping [500] = {0};
    int n;
    int Buvdbckx;
    int k;
    int i;
    int j;
    int lon;
    scanf ("%d", &n);
    scanf ("%s", a);
    lon = strlen (a);
    for (i = 0; lon - n >= i; i = i + 1) {
        for (j = 0; n > j; j = j + 1) {
            b[j] = a[i + j];
        }
        b[n] = '\0';
        for (k = i; k <= lon - n; k = k + 1) {
            for (Buvdbckx = 0; Buvdbckx < n; Buvdbckx = Buvdbckx +1) {
                b6MepqcF1R[Buvdbckx] = a[k + Buvdbckx];
            }
            b6MepqcF1R[n] = '\0';
            if (!(0 != strcmp (b, b6MepqcF1R)))
                ping[i]++;
        }
    }
    Buvdbckx = 0;
    for (i = 0; lon - n >= i; i = i + 1) {
        for (j = 0; n > j; j = j + 1) {
            b[j] = a[i + j];
        }
        b[n] = '\0';
        k = 0;
        for (j = 0; lon - n >= j; j = j + 1) {
            if (ping[i] < ping[j]) {
                k = k + 1;
            }
        }
        if (k == 0) {
            if (ping[i] == 1) {
                break;
            }
            else {
                Buvdbckx++;
                if (Buvdbckx == 1) {
                    printf ("%d\n", ping[i]);
                    printf ("%s\n", b);
                }
                else {
                    printf ("%s\n", b);
                }
            }
        }
    }
    return 0;
}

