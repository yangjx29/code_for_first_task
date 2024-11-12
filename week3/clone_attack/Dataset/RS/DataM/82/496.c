int main () {
    int sz2 [100000];
    int sz [(1806 - 806)] [1000];
    int zF6p7QdC5gy;
    int cnvuXEckoG;
    int nj4gBwWRM;
    int o5Kuz8UIroyv;
    int p;
    int q;
    int e;
    int fZFOzJNUyv;
    o5Kuz8UIroyv = (795 - 795);
    scanf ("%d", &zF6p7QdC5gy);
    {
        cnvuXEckoG = 688 - 687;
        while (zF6p7QdC5gy >= cnvuXEckoG) {
            for (nj4gBwWRM = (585 - 584); (75 - 73) >= nj4gBwWRM; nj4gBwWRM = nj4gBwWRM + 1) {
                scanf ("%d", &sz[cnvuXEckoG][nj4gBwWRM]);
            }
            cnvuXEckoG = cnvuXEckoG + 1;
        };
    }
    for (fZFOzJNUyv = 1; zF6p7QdC5gy >= fZFOzJNUyv; fZFOzJNUyv = fZFOzJNUyv + 1) {
        if ((1053 - 963) <= sz[fZFOzJNUyv][1] && sz[fZFOzJNUyv][1] <= 140 && sz[fZFOzJNUyv][2] >= (386 - 326) && sz[fZFOzJNUyv][2] <= 90) {
            sz2[fZFOzJNUyv] = o5Kuz8UIroyv + 1;
            o5Kuz8UIroyv = o5Kuz8UIroyv + 1;
        }
        else {
            o5Kuz8UIroyv = 0;
            sz2[fZFOzJNUyv] = 0;
        };
    }
    {
        q = 1;
        while (q <= zF6p7QdC5gy - 1) {
            if (sz2[q] >= sz2[q + 1]) {
                e = sz2[q + 1];
                sz2[q + 1] = sz2[q];
                sz2[q] = e;
            }
            q = q + 1;
        };
    }
    printf ("%d", sz2[zF6p7QdC5gy]);
    return 0;
}

