void  main () {
    int *Lzb14t, *max;
    int pKRpP4;
    int j;
    int k;
    int BP53JIEY;
    scanf ("%d", &k);
    Lzb14t = (int *) malloc (k * sizeof (int));
    max = (int *) malloc (k * sizeof (int));
    {
        pKRpP4 = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (k - 1 >= pKRpP4) {
            scanf ("%d", Lzb14t +pKRpP4);
            pKRpP4 = pKRpP4 + 1;
        };
    }
    for (pKRpP4 = 0; pKRpP4 <= k - 1; pKRpP4++) {
        BP53JIEY = 0;
        for (j = 0; pKRpP4 > j; j++)
            if (*(Lzb14t +j) >= *(Lzb14t +pKRpP4))
                if (BP53JIEY < *(max + j))
                    BP53JIEY = *(max + j);
        *(max + pKRpP4) = BP53JIEY +1;
    }
    BP53JIEY = 0;
    for (pKRpP4 = 0; pKRpP4 <= k - 1; pKRpP4++)
        if (*(max + pKRpP4) > BP53JIEY)
            BP53JIEY = *(max + pKRpP4);
    printf ("%d", BP53JIEY);
}

