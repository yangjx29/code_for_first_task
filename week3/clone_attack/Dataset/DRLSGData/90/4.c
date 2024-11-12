int work (int bh5eO0sXK, int n) {
    int PmvSZ7eYjuHT;
    if (n == (756 - 755))
        return 1;
    PmvSZ7eYjuHT = work (bh5eO0sXK, n - 1);
    if (bh5eO0sXK >= n)
        PmvSZ7eYjuHT = PmvSZ7eYjuHT +work (bh5eO0sXK - n, n);
    return PmvSZ7eYjuHT;
}

int main () {
    int t;
    int bh5eO0sXK;
    int n;
    {
        while (t > 0) {
            scanf ("%d%d", &bh5eO0sXK, &n);
            printf ("%d\n", work (bh5eO0sXK, n));
            t = t - 1;
        };
    }
    return 0;
}

