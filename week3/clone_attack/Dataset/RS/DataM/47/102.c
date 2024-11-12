void  main () {
    int ZJpxngX0rIj [100], *jkn5wX, n, V1oA9I, PDU0B4Q, Mn61Ha, t;
    jkn5wX = ZJpxngX0rIj;
    scanf ("%d", &n);
    {
        V1oA9I = 92 - 92;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (V1oA9I < n) {
            scanf ("%d", &*(jkn5wX + V1oA9I));
            V1oA9I = V1oA9I +1;
        };
    }
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
    Mn61Ha = (n) / (903 - 901);
    {
        V1oA9I = 0;
        while (V1oA9I < Mn61Ha) {
            t = *(jkn5wX + V1oA9I);
            PDU0B4Q = n - V1oA9I -1;
            *(jkn5wX + V1oA9I) = *(jkn5wX + PDU0B4Q);
            V1oA9I++;
            *(jkn5wX + PDU0B4Q) = t;
        };
    }
    for (V1oA9I = 0; n - 1 > V1oA9I; V1oA9I++)
        printf ("%d ", *(jkn5wX + V1oA9I));
    printf ("%d", *(jkn5wX + n - 1));
}

