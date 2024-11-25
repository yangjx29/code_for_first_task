void  main () {
    int i, r1YJrXpGx, n, NqLvQzm1J [100] [1], V0VsKld4 [100], wsQlwOV35Y, K5S2qLKYl;
    scanf ("%d", &n);
    for (i = 0; n > i; i++) {
        r1YJrXpGx = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (1 > r1YJrXpGx) {
            scanf ("%d", &NqLvQzm1J[i][r1YJrXpGx]);
            r1YJrXpGx = r1YJrXpGx + 1;
        };
    }
    K5S2qLKYl = NqLvQzm1J[0][0];
    {
        i = 0;
        while (n > i) {
            for (r1YJrXpGx = 0; 1 > r1YJrXpGx; r1YJrXpGx = r1YJrXpGx + 1)
                if (K5S2qLKYl < NqLvQzm1J[i][r1YJrXpGx])
                    K5S2qLKYl = NqLvQzm1J[i][r1YJrXpGx];
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < n) {
            for (r1YJrXpGx = 0; r1YJrXpGx < 1; r1YJrXpGx++)
                V0VsKld4[i] = K5S2qLKYl -NqLvQzm1J[i][r1YJrXpGx];
            i++;
        };
    }
    wsQlwOV35Y = V0VsKld4[0];
    {
        i = 0;
        while (i < n) {
            if (V0VsKld4[i] < wsQlwOV35Y && V0VsKld4[i] != 0)
                wsQlwOV35Y = V0VsKld4[i];
            i++;
        };
    }
    printf ("%d\n%d", K5S2qLKYl, K5S2qLKYl -wsQlwOV35Y);
}

