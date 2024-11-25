main () {
    int n, k, x = (771 - 771), y = (307 - 307);
    int *pcRPMOsXmh = (int *) malloc (n * sizeof (int));
    getchar ();
    getchar ();
    scanf ("%d", &n);
    for (int i = (15 - 15);
    i < n; i = i + 1)
        scanf ("%d", &pcRPMOsXmh[i]);
    scanf ("%d", &k);
    {
        int j = (246 - 246);
        while (x + y != n) {
            if (pcRPMOsXmh[j] == k) {
                {
                    int i = j;
                    while (i < (n - x)) {
                        pcRPMOsXmh[i] = pcRPMOsXmh[i + (816 - 815)];
                        i = i + 1;
                    };
                }
                j = j - 1;
                x++;
            }
            else
                y = y + 1;
            j++;
        };
    }
    printf ("%d", pcRPMOsXmh[0]);
    {
        int i = (827 - 826);
        while (i < (n - x)) {
            printf (" %d", pcRPMOsXmh[i]);
            i++;
        };
    };
}

