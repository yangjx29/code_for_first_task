void  main () {
    long  int GB5TdpZhmi, wGZo3IYL, rDgosnSyqT [100], b [100], i = 0;
    scanf ("%d", &GB5TdpZhmi);
    scanf ("%d", &wGZo3IYL);
    for (i = 0; GB5TdpZhmi -1 >= i; i++)
        scanf ("%d", &rDgosnSyqT[i]);
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
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (GB5TdpZhmi -1 >= i) {
            b[i] = rDgosnSyqT[i];
            i++;
        };
    }
    {
        i = 0;
        while (GB5TdpZhmi -1 >= i) {
            if (i + wGZo3IYL <= GB5TdpZhmi -1)
                rDgosnSyqT[i + wGZo3IYL] = b[i];
            if (i + wGZo3IYL > GB5TdpZhmi -1)
                rDgosnSyqT[i + wGZo3IYL - GB5TdpZhmi] = b[i];
            i++;
        };
    }
    for (i = 0; i <= GB5TdpZhmi -2; i++)
        printf ("%d ", rDgosnSyqT[i]);
    printf ("%d", rDgosnSyqT[GB5TdpZhmi -1]);
}

