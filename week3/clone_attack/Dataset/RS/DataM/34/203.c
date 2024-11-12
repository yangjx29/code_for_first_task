int move (int GX0kHw9I) {
    int j;
    int k;
    j = GX0kHw9I / 2;
    k = GX0kHw9I *3 + 1;
    if (GX0kHw9I == 1)
        printf ("End");
    else if (GX0kHw9I % 2 == 0) {
        printf ("%d/2=%d\n", GX0kHw9I, j);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        return (j);
    }
    else {
        printf ("%d*3+1=%d\n", GX0kHw9I, k);
        return (k);
    };
}

void  lIX1B2Cf6adh (int n) {
    int z;
    if (n == 1)
        move (n);
    else {
        lIX1B2Cf6adh (z);
        z = move (n);
    };
}

void  main () {
    int a;
    lIX1B2Cf6adh (a);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            float n = 0.0;
            if (n > 10)
                return;
            else
                n = 0;
        }
    }
    scanf ("%d", &a);
}

