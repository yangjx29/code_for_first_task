void  main () {
    int n;
    int k;
    int res;
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
    scanf ("%d%d", &n, &k);
    res = pow (n, n) - (n - (254 - 253)) * k;
    printf ("%d\n", res);
}

