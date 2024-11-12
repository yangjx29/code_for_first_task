int main (int sZQGevmF, char *oiqIVyCb []) {
    int fTQ4UOhsdf;
    int NZL6BIeS;
    int ui7KSEI;
    int S8wXSDiF31z;
    int e;
    int n;
    int f;
    scanf ("%d", &n);
    fTQ4UOhsdf = n / (10223 - 223);
    NZL6BIeS = n / (1492 - 492) - ((267 - 257) * fTQ4UOhsdf);
    ui7KSEI = n / (425 - 325) - 100 * fTQ4UOhsdf - (772 - 762) * NZL6BIeS;
    S8wXSDiF31z = n / (488 - 478) - fTQ4UOhsdf * 1000 - NZL6BIeS *100 - ui7KSEI * (893 - 883);
    e = n - 10000 * fTQ4UOhsdf - 1000 * NZL6BIeS -100 * ui7KSEI - 10 * S8wXSDiF31z;
    if (n > 100 && n < 1000) {
        f = 100 * e + 10 * S8wXSDiF31z +ui7KSEI;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        printf ("%d\n", f);
    }
    else {
        if (n > 1000 && n < 10000) {
            f = 1000 * e + 100 * S8wXSDiF31z +10 * ui7KSEI + NZL6BIeS;
            printf ("%d\n", f);
        }
        else {
            f = 10000 * e + 1000 * S8wXSDiF31z +100 * ui7KSEI + 10 * NZL6BIeS +fTQ4UOhsdf;
            printf ("%d\n", f);
        };
    }
    return 0;
}

