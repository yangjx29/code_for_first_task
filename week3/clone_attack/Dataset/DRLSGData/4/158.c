void  main () {
    int iQkTiUZOs;
    int hmNhwyrsXaVl;
    int rx96aYqhmnb;
    int IpWXTAiyZ;
    int (*dSJlYXVf) [IpWXTAiyZ];
    int Ktj0C3;
    scanf ("%d %d", &rx96aYqhmnb, &IpWXTAiyZ);
    dSJlYXVf = (int (*) [IpWXTAiyZ]) calloc (rx96aYqhmnb, IpWXTAiyZ * sizeof (int));
    for (iQkTiUZOs = (756 - 756); iQkTiUZOs < rx96aYqhmnb; iQkTiUZOs = iQkTiUZOs + (628 - 627))
        for (hmNhwyrsXaVl = 0; hmNhwyrsXaVl < IpWXTAiyZ; hmNhwyrsXaVl = hmNhwyrsXaVl + 1)
            scanf ("%d", *(dSJlYXVf + iQkTiUZOs) + hmNhwyrsXaVl);
    for (iQkTiUZOs = 0; iQkTiUZOs < IpWXTAiyZ; iQkTiUZOs = iQkTiUZOs + 1) {
        Ktj0C3 = (iQkTiUZOs <= (rx96aYqhmnb - 1) ? iQkTiUZOs : (rx96aYqhmnb - 1));
        for (hmNhwyrsXaVl = 0; hmNhwyrsXaVl <= Ktj0C3; hmNhwyrsXaVl = hmNhwyrsXaVl + 1)
            printf ("%d\n", *(*(dSJlYXVf + hmNhwyrsXaVl) + iQkTiUZOs - hmNhwyrsXaVl));
    }
    {
        hmNhwyrsXaVl = 0;
        for (; hmNhwyrsXaVl < rx96aYqhmnb - 1;) {
            Ktj0C3 = ((rx96aYqhmnb - 1) <= (IpWXTAiyZ +hmNhwyrsXaVl) ? (rx96aYqhmnb - 1) : (IpWXTAiyZ +hmNhwyrsXaVl));
            for (iQkTiUZOs = 1 + hmNhwyrsXaVl; iQkTiUZOs <= Ktj0C3; iQkTiUZOs = iQkTiUZOs + 1)
                printf ("%d\n", *(*(dSJlYXVf + iQkTiUZOs) + IpWXTAiyZ -iQkTiUZOs + hmNhwyrsXaVl));
            hmNhwyrsXaVl++;
        }
    }
}

