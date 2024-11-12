void  main () {
    int cNIxy1GtzkVP;
    int j;
    int b6wnZ2xTFd;
    int poAtzHSYm5n;
    int str [100000];
    scanf ("%d\n", &b6wnZ2xTFd);
    {
        cNIxy1GtzkVP = 0;
        while (cNIxy1GtzkVP < b6wnZ2xTFd) {
            scanf ("%d ", &str[cNIxy1GtzkVP]);
            cNIxy1GtzkVP = cNIxy1GtzkVP + 1;
        };
    }
    scanf ("%d\n", &poAtzHSYm5n);
    {
        j = 0;
        while (str[j] == poAtzHSYm5n) {
            j = j + 1;
        };
    }
    printf ("%d", str[j]);
    {
        j = j + 1;
        while (j < b6wnZ2xTFd) {
            if (str[j] != poAtzHSYm5n) {
                printf (" %d", str[j]);
            }
            j = j + 1;
        };
    };
}

