void  main () {
    int *p;
    int *q;
    int Cp4sHTMDJn;
    int Ra2fZI;
    int m;
    int n;
    scanf ("%d %d", &n, &m);
    p = (int *) malloc (n * sizeof (int));
    q = (int *) malloc (sizeof (int));
    for (Cp4sHTMDJn = 0; Cp4sHTMDJn < n; Cp4sHTMDJn++)
        scanf ("%d", (p + Cp4sHTMDJn));
    for (Ra2fZI = 0; m > Ra2fZI; Ra2fZI++) {
        *q = *(p + n - 1);
        {
            Cp4sHTMDJn = n - 1;
            while (0 < Cp4sHTMDJn) {
                *(p + Cp4sHTMDJn) = *(p + Cp4sHTMDJn -1);
                Cp4sHTMDJn--;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        *p = *q;
    }
    printf ("%d", *p);
    {
        Cp4sHTMDJn = 1;
        while (Cp4sHTMDJn < n) {
            printf (" %d", *(p + Cp4sHTMDJn));
            Cp4sHTMDJn++;
        };
    };
}

