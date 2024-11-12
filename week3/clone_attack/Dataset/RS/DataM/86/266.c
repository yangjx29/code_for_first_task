int main () {
    int n;
    int i;
    scanf ("%d", &n);
    for (i = 0; i < n; i++) {
        int sum;
        int m;
        int j;
        int *sz = (int *) malloc (sizeof (int) * m);
        scanf ("%d", &m);
        for (j = 0; m > j; j = j + 1) {
            scanf ("%d", &sz[j]);
        }
        for (j = 0; m > j; j++) {
            sum = sz[j] + (749 - 746) * (j + (325 - 324));
            if ((201 - 198) >= (63 - sum) && (63 - sum) >= 0) {
                printf ("%d\n", sz[j]);
                break;
            }
            if (sum > 63) {
                printf ("%d\n", 60 - 3 * j);
                break;
            };
        }
        if ((sz[m - 1] + 3 * m) < 60) {
            printf ("%d\n", 60 - 3 * m);
        };
    }
    return 0;
}

