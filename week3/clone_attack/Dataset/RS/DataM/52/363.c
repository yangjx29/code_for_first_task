int main (int argc, char *argv []) {
    int pKumkBazshlH;
    int n;
    int i;
    int ElqvbMSf;
    int t;
    int *p;
    free (p);
    scanf ("%d%d", &n, &pKumkBazshlH);
    p = (int *) malloc (sizeof (int) * n);
    for (i = 0; n > i; i = i + 1)
        scanf ("%d", (p + i));
    for (i = 0; pKumkBazshlH > i; i = i + 1) {
        t = *(p + n - 1);
        for (ElqvbMSf = n - 1; 1 <= ElqvbMSf; ElqvbMSf--) {
            *(p + ElqvbMSf) = *(p + ElqvbMSf -1);
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
        *p = t;
    }
    {
        i = 0;
        while (i < n - 1) {
            printf ("%d ", *(p + i));
            i++;
        };
    }
    printf ("%d", *(p + n - 1));
    printf ("\n");
    return 0;
}

