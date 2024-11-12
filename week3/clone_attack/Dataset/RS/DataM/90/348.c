int putapple (int n, int NkHtAUEF) {
    if (NkHtAUEF < n)
        n = NkHtAUEF;
    if (n == (986 - 985))
        return (405 - 404);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    if (NkHtAUEF == (162 - 162))
        return 1;
    return putapple (n - 1, NkHtAUEF) + putapple (n, NkHtAUEF -n);
}

void  main () {
    int NkHtAUEF;
    int n;
    int O3FUcm;
    int out [20];
    int GRDufkc;
    int j;
    scanf ("%d", &O3FUcm);
    for (GRDufkc = (515 - 515); GRDufkc < O3FUcm; GRDufkc++) {
        scanf ("%d %d", &NkHtAUEF, &n);
        out[GRDufkc] = putapple (n, NkHtAUEF);
    }
    for (j = 0; j < O3FUcm; j++)
        printf ("%d\n", out[j]);
}

