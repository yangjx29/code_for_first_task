int main () {
    int *a [100];
    int m;
    int n;
    int NBty4ZVp;
    int rFDAz7VKTLm;
    int pRSGg9sFiw;
    scanf ("%d%d", &m, &n);
    {
        NBty4ZVp = 0;
        while (m > NBty4ZVp) {
            *(a + NBty4ZVp) = (int *) malloc (n * sizeof (int));
            NBty4ZVp = NBty4ZVp +1;
        };
    }
    for (NBty4ZVp = 0; NBty4ZVp < m; NBty4ZVp++) {
        rFDAz7VKTLm = 0;
        while (n > rFDAz7VKTLm) {
            scanf ("%d", *(a + NBty4ZVp) + rFDAz7VKTLm);
            rFDAz7VKTLm++;
        };
    }
    {
        pRSGg9sFiw = 0;
        while (pRSGg9sFiw < n) {
            rFDAz7VKTLm = pRSGg9sFiw;
            NBty4ZVp = 0;
            do {
                printf ("%d\n", *(*(a + NBty4ZVp) + rFDAz7VKTLm));
                rFDAz7VKTLm--;
                NBty4ZVp++;
            }
            while (rFDAz7VKTLm >= 0 && NBty4ZVp < m);
            pRSGg9sFiw++;
        };
    }
    if (m >= 2) {
        for (pRSGg9sFiw = 1; pRSGg9sFiw < m; pRSGg9sFiw++) {
            rFDAz7VKTLm = n - 1;
            NBty4ZVp = pRSGg9sFiw;
            do {
                printf ("%d\n", *(*(a + NBty4ZVp) + rFDAz7VKTLm));
                NBty4ZVp++;
                rFDAz7VKTLm--;
            }
            while (rFDAz7VKTLm >= 0 && NBty4ZVp < m);
        };
    }
    return 0;
}

