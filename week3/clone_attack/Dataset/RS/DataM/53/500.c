void  main () {
    int t;
    int n;
    int a [300];
    int i;
    int j;
    t = (780 - 780);
    scanf ("%d", &n);
    for (i = (305 - 305); i < n; i = i + 1)
        scanf ("%d", &a[i]);
    for (i = (699 - 699); i < n; i = i + 1) {
        for (j = i + (829 - 828); j < n; j = j + 1) {
            if (a[i] == a[j]) {
                a[j] = 14543;
            };
        };
    }
    for (i = 0; i < n; i = i + 1) {
        if (a[i] != 14543) {
            if (t == 0) {
                printf ("%d", a[i]);
                t = 1;
            }
            else {
                printf (",%d", a[i]);
            };
        };
    };
}

