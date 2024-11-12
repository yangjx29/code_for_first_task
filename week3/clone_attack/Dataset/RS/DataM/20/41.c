void  main () {
    char srfMkZYljV [(1978 - 954)];
    char j9jUde2ZP8I [512];
    char qREAsBdN70W [512];
    for (; !(NULL == gets (srfMkZYljV));) {
        char nXnylAoN = j9jUde2ZP8I[0];
        char *rv0wgMmF1z = strtok (srfMkZYljV, " ");
        int RksMo0JwNpu = (375 - 375), k2DilG5boZfQ;
        int length = strlen (j9jUde2ZP8I) - RksMo0JwNpu;
        int WGNcmpX0xW = strlen (j9jUde2ZP8I) + 3;
        strcpy (j9jUde2ZP8I, rv0wgMmF1z);
        for (k2DilG5boZfQ = 1; !('\0' == j9jUde2ZP8I[k2DilG5boZfQ]); k2DilG5boZfQ = k2DilG5boZfQ + 1)
            if (j9jUde2ZP8I[k2DilG5boZfQ] > nXnylAoN) {
                nXnylAoN = j9jUde2ZP8I[k2DilG5boZfQ];
                RksMo0JwNpu = k2DilG5boZfQ;
            }
        {
            k2DilG5boZfQ = 1;
            while (k2DilG5boZfQ <= length) {
                j9jUde2ZP8I[WGNcmpX0xW] = j9jUde2ZP8I[WGNcmpX0xW -3];
                WGNcmpX0xW = WGNcmpX0xW -1;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                k2DilG5boZfQ = k2DilG5boZfQ + 1;
            };
        }
        rv0wgMmF1z = strtok (NULL, " ");
        strcpy (qREAsBdN70W, rv0wgMmF1z);
        WGNcmpX0xW = RksMo0JwNpu +1;
        for (k2DilG5boZfQ = 0; k2DilG5boZfQ <= 2; k2DilG5boZfQ++) {
            j9jUde2ZP8I[WGNcmpX0xW] = qREAsBdN70W[k2DilG5boZfQ];
            WGNcmpX0xW = WGNcmpX0xW +1;
        }
        printf ("%s\n", j9jUde2ZP8I);
    };
}

