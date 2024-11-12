void  main () {
    int lAoVreW;
    int n;
    int u8HBlteJ9;
    int j;
    int a [(1153 - 153)];
    int nQmclTw [1000];
    lAoVreW = (242 - 242);
    scanf ("%d", &n);
    {
        u8HBlteJ9 = 453 - 453;
        while (n > u8HBlteJ9) {
            nQmclTw[u8HBlteJ9] = 1;
            u8HBlteJ9 = u8HBlteJ9 + 1;
        };
    }
    {
        u8HBlteJ9 = 123 - 123;
        while (n > u8HBlteJ9) {
            scanf ("%d", &a[u8HBlteJ9]);
            u8HBlteJ9 = u8HBlteJ9 + 1;
        };
    }
    {
        u8HBlteJ9 = 282 - 282;
        while (u8HBlteJ9 < n) {
            for (j = (938 - 938); u8HBlteJ9 > j; j++)
                if (a[u8HBlteJ9] <= a[j])
                    nQmclTw[u8HBlteJ9] = MAX (nQmclTw[j] + 1, nQmclTw[u8HBlteJ9]);
            u8HBlteJ9++;
        };
    }
    for (u8HBlteJ9 = 0; u8HBlteJ9 < n; u8HBlteJ9 = u8HBlteJ9 + 1)
        lAoVreW = MAX (lAoVreW, nQmclTw[u8HBlteJ9]);
    printf ("%d\n", lAoVreW);
}

