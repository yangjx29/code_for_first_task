int main (int argc, char *argv []) {
    int n;
    int i;
    int t;
    int gxmYga;
    int max;
    int secondmax;
    scanf ("%d", &n);
    scanf ("%d", &t);
    max = secondmax = t;
    for (i = 1; i < n; i++) {
        scanf ("%d", &gxmYga);
        if (gxmYga > max) {
            secondmax = max;
            max = gxmYga;
        }
        else {
            if (gxmYga > secondmax) {
                secondmax = gxmYga;
            };
        };
    }
    printf ("%d\n%d\n", max, secondmax);
    return 0;
}

