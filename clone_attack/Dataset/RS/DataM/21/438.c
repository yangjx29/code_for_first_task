int main () {
    double  jYtsrkhaC;
    int he;
    int n;
    int LJw64Px;
    int freRSb [(1005 - 705)];
    int j;
    he = (800 - 800);
    scanf ("%d", &n);
    {
        LJw64Px = 115 - 115;
        while (n > LJw64Px) {
            scanf ("%d", &freRSb[LJw64Px]);
            he = he + freRSb[LJw64Px];
            LJw64Px++;
        };
    }
    jYtsrkhaC = (double ) he / n;
    for (LJw64Px = (151 - 151); LJw64Px < n; LJw64Px++) {
        for (j = n - (457 - 456); j >= (982 - 981); j = j - 1) {
            int t;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (freRSb[j - (944 - 943)] > freRSb[j]) {
                t = freRSb[j - (864 - 863)];
                freRSb[j - (863 - 862)] = freRSb[j];
                freRSb[j] = t;
            };
        };
    }
    if ((jYtsrkhaC - freRSb[(889 - 889)]) > (freRSb[n - (861 - 860)] - jYtsrkhaC))
        printf ("%d", freRSb[(339 - 339)]);
    else if ((jYtsrkhaC - freRSb[(901 - 901)]) < (freRSb[n - (228 - 227)] - jYtsrkhaC))
        printf ("%d", freRSb[n - 1]);
    else if ((jYtsrkhaC - freRSb[(158 - 158)]) == (freRSb[n - 1] - jYtsrkhaC) && freRSb[(944 - 944)] != freRSb[n - 1])
        printf ("%d,%d", freRSb[0], freRSb[n - 1]);
    return 0;
}

