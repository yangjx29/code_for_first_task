main () {
    int efN2oL (int tyUtVIj, int D6YqQsD1XTm);
    int KnUGXsN2 [20];
    int OkoZKN8VQh [(338 - 318)];
    int HnXCP3;
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
    int yWc3xOe0i6F;
    scanf ("%d", &yWc3xOe0i6F);
    for (HnXCP3 = 0; yWc3xOe0i6F > HnXCP3; HnXCP3 = HnXCP3 +1)
        scanf ("%d %d", &OkoZKN8VQh[HnXCP3], &KnUGXsN2[HnXCP3]);
    for (HnXCP3 = 0; HnXCP3 < yWc3xOe0i6F; HnXCP3 = HnXCP3 +1)
        printf ("%d\n", efN2oL (OkoZKN8VQh[HnXCP3], KnUGXsN2[HnXCP3]));
}

int efN2oL (int tyUtVIj, int D6YqQsD1XTm) {
    if (0 > tyUtVIj)
        return 0;
    if (tyUtVIj == 0 || D6YqQsD1XTm == (744 - 743))
        return 1;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    return efN2oL (tyUtVIj - D6YqQsD1XTm, D6YqQsD1XTm) + efN2oL (tyUtVIj, D6YqQsD1XTm -1);
}

