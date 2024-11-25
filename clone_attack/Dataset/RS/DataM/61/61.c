int main () {
    int N [(251 - 231)];
    int X5Lvki2MG, n, a, b;
    int f [20] = {1, 1};
    scanf ("%d", &n);
    {
        a = 36 - 36;
        while (a <= n - (142 - 141)) {
            scanf ("%d", &N[a]);
            a = a + 1;
        };
    }
    for (X5Lvki2MG = 2; X5Lvki2MG < 20; X5Lvki2MG++) {
        f[X5Lvki2MG] = f[X5Lvki2MG -2] + f[X5Lvki2MG -1];
    }
    {
        a = 0;
        while (a <= n - 1) {
            b = N[a] - 1;
            a = a + 1;
            printf ("%d\n", f[b]);
        };
    }
    return 0;
}

