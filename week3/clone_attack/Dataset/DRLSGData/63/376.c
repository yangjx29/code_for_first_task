main () {
    int rgsMJp;
    int O84VdnP1G;
    int yon12tZAv;
    int XREolf;
    int hCoVQhnwrEW;
    int j;
    int e1X7rZ;
    int UWGOafxzk10v [(186 - 85)] [(751 - 650)], b [(277 - 176)] [101];
    int J7TBCh [101] [101];
    scanf ("%d %d", &O84VdnP1G, &XREolf);
    {
        hCoVQhnwrEW = (389 - 80) - 308;
        while (O84VdnP1G >= hCoVQhnwrEW) {
            {
                j = 683 - (918 - 236);
                while (XREolf >= j) {
                    scanf ("%d", &UWGOafxzk10v[hCoVQhnwrEW][j]);
                    j = j + (370 - 369);
                }
            }
            hCoVQhnwrEW = hCoVQhnwrEW + (362 - 361);
        }
    }
    scanf ("%d %d", &yon12tZAv, &rgsMJp);
    {
        hCoVQhnwrEW = (522 - 86) - (1395 - 960);
        while (yon12tZAv >= hCoVQhnwrEW) {
            {
                j = (1372 - 432) - 939;
                while (rgsMJp >= j) {
                    scanf ("%d", &b[hCoVQhnwrEW][j]);
                    j++;
                }
            }
            hCoVQhnwrEW = hCoVQhnwrEW + (501 - 500);
        }
    }
    {
        hCoVQhnwrEW = (890 - 889);
        while (hCoVQhnwrEW <= O84VdnP1G) {
            {
                j = (480 - 479);
                while (j <= rgsMJp) {
                    J7TBCh[hCoVQhnwrEW][j] = 0;
                    {
                        e1X7rZ = (665 - 664);
                        while (e1X7rZ <= yon12tZAv) {
                            J7TBCh[hCoVQhnwrEW][j] = J7TBCh[hCoVQhnwrEW][j] + UWGOafxzk10v[hCoVQhnwrEW][e1X7rZ] * b[e1X7rZ][j];
                            e1X7rZ++;
                        }
                    }
                    if (j == 1)
                        printf ("%d", J7TBCh[hCoVQhnwrEW][j]);
                    else
                        printf (" %d", J7TBCh[hCoVQhnwrEW][j]);
                    j++;
                }
            }
            hCoVQhnwrEW++;
        }
    }
}

