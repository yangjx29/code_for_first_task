void  main () {
    int P7g4SUl1v, j, i, ZQcmYdpws;
    char *j3hJlGH;
    char a [100];
    ZQcmYdpws = 0;
    j3hJlGH = gets (a);
    for (i = P7g4SUl1v -1; i >= 0; i = i - 1) {
        if (!(' ' == *(j3hJlGH + i)))
            ZQcmYdpws = ZQcmYdpws +1;
        if (*(j3hJlGH + i) == ' ') {
            for (j = 1; j <= ZQcmYdpws; j = j + 1) {
                printf ("%c", *(j3hJlGH + i + j));
            }
            ZQcmYdpws = 0;
        }
        if (i == 0) {
            {
                j = 0;
                while (j <= ZQcmYdpws -1) {
                    printf ("%c", *(j3hJlGH + i + j));
                    j++;
                };
            };
        };
    }
    P7g4SUl1v = strlen (a);
}

