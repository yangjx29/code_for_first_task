void  main () {
    int j = 0;
    int cq3hKM;
    char *bfQiz3h0j [100];
    for (cq3hKM = 0; 100 > cq3hKM; cq3hKM = cq3hKM + 1)
        bfQiz3h0j[cq3hKM] = (char *) malloc (100);
    cq3hKM = 0;
    while (scanf ("%s", bfQiz3h0j[cq3hKM]) != EOF) {
        cq3hKM = cq3hKM + 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    printf ("%s", bfQiz3h0j[cq3hKM - 1]);
    for (j = cq3hKM - 2; j >= 0; j = j - 1)
        printf (" %s", bfQiz3h0j[j]);
}

