int main () {
    int n;
    int fUEst4zB;
    int oMX4619iz;
    int EV1euf [(1591 - 591)];
    char jnRxYyJwZp [(85 - 59)] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    char s [1000] [(76 - 50)];
    char Gdwo6e;
    int sum [(733 - 707)] = {(961 - 961)};
    int xNwI25ZoXVYv;
    int lf89r2E;
    int JdxntBWhr;
    lf89r2E = 0;
    JdxntBWhr = 0;
    char NNv1GeMC6;
    int pwki3rqW [1000];
    scanf ("%d", &n);
    for (fUEst4zB = (401 - 401); fUEst4zB < n; fUEst4zB = fUEst4zB + 1) {
        scanf ("%d%s", &EV1euf[fUEst4zB], s[fUEst4zB]);
        Gdwo6e = strlen (s[fUEst4zB]);
        for (oMX4619iz = (926 - 926); oMX4619iz < Gdwo6e; oMX4619iz = oMX4619iz + 1) {
            xNwI25ZoXVYv = 0;
            while (xNwI25ZoXVYv < 26) {
                if (s[fUEst4zB][oMX4619iz] == 'A' + xNwI25ZoXVYv)
                    sum[xNwI25ZoXVYv]++;
                xNwI25ZoXVYv++;
            };
        };
    }
    {
        fUEst4zB = 0;
        while (fUEst4zB < 26) {
            if (sum[fUEst4zB] > lf89r2E) {
                lf89r2E = sum[fUEst4zB];
                NNv1GeMC6 = fUEst4zB + 'A';
            }
            fUEst4zB = fUEst4zB + 1;
        };
    }
    printf ("%c\n%d\n", NNv1GeMC6, lf89r2E);
    for (fUEst4zB = 0; fUEst4zB < n; fUEst4zB = fUEst4zB + 1) {
        Gdwo6e = strlen (s[fUEst4zB]);
        for (oMX4619iz = 0; oMX4619iz < Gdwo6e; oMX4619iz++) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            if (s[fUEst4zB][oMX4619iz] == NNv1GeMC6) {
                JdxntBWhr++;
                pwki3rqW[JdxntBWhr] = EV1euf[fUEst4zB];
            };
        };
    }
    for (fUEst4zB = 1; fUEst4zB <= JdxntBWhr; fUEst4zB++)
        printf ("%d\n", pwki3rqW[fUEst4zB]);
    return 0;
}

