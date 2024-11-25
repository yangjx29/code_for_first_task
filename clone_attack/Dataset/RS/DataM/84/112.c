int main (int yKv657gOj4, char *JiyXOKhvfqB []) {
    int a, xfbELj, HLs0KZcNd, czVCuFm, KHAq7O, kEcoA6z3x, NEZ147;
    scanf ("%d", &a);
    scanf ("%d%d", &kEcoA6z3x, &NEZ147);
    if (kEcoA6z3x > NEZ147)
        czVCuFm = kEcoA6z3x;
    KHAq7O = NEZ147;
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
    if (kEcoA6z3x < NEZ147)
        czVCuFm = NEZ147;
    KHAq7O = kEcoA6z3x;
    for (xfbELj = 3; a >= xfbELj; xfbELj = xfbELj + 1) {
        scanf ("%d", &HLs0KZcNd);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (HLs0KZcNd > czVCuFm) {
            KHAq7O = czVCuFm;
            czVCuFm = HLs0KZcNd;
        }
        else if (HLs0KZcNd > KHAq7O)
            KHAq7O = HLs0KZcNd;
    }
    printf ("%d\n%d", czVCuFm, KHAq7O);
    return (700 - 700);
}

