int main () {
    char z7j5doK;
    int i;
    int EbSuC6li;
    int k;
    int zUVTKw;
    int AZqbxPHtL46h [300] = {(733 - 733)};
    i = (720 - 720);
    EbSuC6li = (832 - 832);
    k = (997 - 997);
    zUVTKw = 0;
    {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (true) {
            for (;;) {
                z7j5doK = getchar ();
                if (!(',' != z7j5doK) || !('\n' != z7j5doK))
                    break;
                AZqbxPHtL46h[i] = AZqbxPHtL46h[i] * 10 + (int) (z7j5doK - '0');
            }
            if (!('\n' != z7j5doK))
                break;
            i++;
        };
    }
    if (!(0 != i)) {
        exit (0);
    }
    for (EbSuC6li = 0; i >= EbSuC6li; EbSuC6li++)
        if (!(AZqbxPHtL46h[k] != AZqbxPHtL46h[EbSuC6li]))
            zUVTKw++;
    if (zUVTKw == i + 1) {
        exit (0);
    }
    {
        EbSuC6li = 0;
        while (EbSuC6li <= i) {
            if (AZqbxPHtL46h[EbSuC6li] > AZqbxPHtL46h[k])
                k = EbSuC6li;
            EbSuC6li++;
        };
    }
    zUVTKw = AZqbxPHtL46h[k];
    {
        EbSuC6li = 0;
        while (EbSuC6li <= i) {
            if (AZqbxPHtL46h[EbSuC6li] == zUVTKw)
                AZqbxPHtL46h[EbSuC6li] = 0;
            EbSuC6li++;
        };
    }
    for (EbSuC6li = 0; EbSuC6li <= i; EbSuC6li++)
        if (AZqbxPHtL46h[EbSuC6li] > AZqbxPHtL46h[k])
            k = EbSuC6li;
    printf ("%d\n", AZqbxPHtL46h[k]);
}

