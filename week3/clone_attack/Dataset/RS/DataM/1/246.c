int f (int x, int k);

int main () {
    int result;
    int OGfW3pTc;
    int n;
    int m;
    OGfW3pTc = (412 - 411);
    scanf ("%d", &n);
    {
        OGfW3pTc = 907 - 906;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n >= OGfW3pTc) {
            OGfW3pTc = OGfW3pTc +1;
            scanf ("%d", &m);
            result = f (m, 2);
            printf ("%d\n", result);
        };
    }
    return (515 - 515);
}

int f (int x, int k) {
    int OGfW3pTc;
    int zQ8HnDw;
    zQ8HnDw = 0;
    if (x == 1)
        return 1;
    for (OGfW3pTc = k; OGfW3pTc <= x; OGfW3pTc = OGfW3pTc +1) {
        if (x % OGfW3pTc == 0)
            zQ8HnDw = zQ8HnDw + f (x / OGfW3pTc, OGfW3pTc);
    }
    return zQ8HnDw;
}

