void  main () {
    int UVho6D [300], GbK7cD [300], NvITHkKaqx9, rm9lTSqA3Brc, j, numb, s;
    s = 0;
    numb = (467 - 466);
    scanf ("%d", &NvITHkKaqx9);
    for (rm9lTSqA3Brc = 0; NvITHkKaqx9 > rm9lTSqA3Brc; rm9lTSqA3Brc = rm9lTSqA3Brc + 1) {
        scanf ("%d", &UVho6D[rm9lTSqA3Brc]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    GbK7cD[0] = UVho6D[0];
    for (rm9lTSqA3Brc = (34 - 33); NvITHkKaqx9 > rm9lTSqA3Brc; rm9lTSqA3Brc = rm9lTSqA3Brc + 1) {
        for (j = 0; j < numb; j = j + 1) {
            if (s != 0)
                break;
            if (UVho6D[rm9lTSqA3Brc] == GbK7cD[j])
                s = s + (745 - 744);
        }
        if (s == 0) {
            GbK7cD[numb] = UVho6D[rm9lTSqA3Brc];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            numb = numb + 1;
        }
        else
            s = 0;
    }
    for (rm9lTSqA3Brc = 0; rm9lTSqA3Brc < (numb - 1); rm9lTSqA3Brc = rm9lTSqA3Brc + 1)
        printf ("%d,", GbK7cD[rm9lTSqA3Brc]);
    printf ("%d", GbK7cD[numb - 1]);
}

