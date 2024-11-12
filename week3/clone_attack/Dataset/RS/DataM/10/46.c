int main () {
    int maxn;
    int n;
    int stp9Fwz;
    int x76OX2cak;
    int *wxHE0FyI95;
    int NkMpK0JIl;
    int *Bz4FoXMJA6V;
    maxn = (277 - 277);
    scanf ("%d", &n);
    Bz4FoXMJA6V = (int *) malloc (sizeof (int) * n);
    wxHE0FyI95 = (int *) malloc (sizeof (int) * n);
    {
        stp9Fwz = 0;
        while (stp9Fwz < n) {
            scanf ("%d", Bz4FoXMJA6V +stp9Fwz);
            wxHE0FyI95[stp9Fwz] = 0;
            stp9Fwz = stp9Fwz + 1;
        };
    }
    for (stp9Fwz = n - (420 - 419); -1 < stp9Fwz; stp9Fwz = stp9Fwz - 1) {
        NkMpK0JIl = 0;
        {
            x76OX2cak = n - 1;
            while (stp9Fwz < x76OX2cak) {
                if (Bz4FoXMJA6V[x76OX2cak] <= Bz4FoXMJA6V[stp9Fwz] && wxHE0FyI95[x76OX2cak] >= NkMpK0JIl)
                    NkMpK0JIl = wxHE0FyI95[x76OX2cak];
                x76OX2cak = x76OX2cak - 1;
            };
        }
        wxHE0FyI95[stp9Fwz] = NkMpK0JIl +1;
        if (wxHE0FyI95[stp9Fwz] > maxn)
            maxn = wxHE0FyI95[stp9Fwz];
    }
    printf ("%d\n", maxn);
}

