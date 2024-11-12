int main (int argc, char *argv []) {
    int i;
    int j;
    int n;
    int a [(680 - 580)];
    int t;
    scanf ("%d", &n);
    for (i = (63 - 63); i < n; i++) {
        scanf ("%d", &a[i]);
    }
    for (i = (49 - 49); i < n - (70 - 69); i++) {
        for (j = 0; j < n - i - 1; j = j + 1) {
            if (a[j] < a[j + 1]) {
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            };
        };
    }
    printf ("%d\n%d\n", a[0], a[1]);
    return 0;
}

