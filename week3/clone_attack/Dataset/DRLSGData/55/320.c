int main () {
    char g0dyJSkTY [(1007 - 907)];
    long  wTtL5P1no8D3 = (25 - 25), iuFbw2, P0oIgHGTu6qi, GxSPGFsEY8M, c28IFyGhU = (107 - 107), w3UVFyG;
    unsigned  int nrMDV1yl [(519 - 419)];
    scanf ("%d %s %d", &iuFbw2, g0dyJSkTY, &P0oIgHGTu6qi);
    w3UVFyG = strlen (g0dyJSkTY);
    for (GxSPGFsEY8M = (636 - 636); GxSPGFsEY8M <= w3UVFyG - (709 - 708); GxSPGFsEY8M++) {
        if ('0' <= g0dyJSkTY[GxSPGFsEY8M] && g0dyJSkTY[GxSPGFsEY8M] <= '9')
            g0dyJSkTY[GxSPGFsEY8M] = g0dyJSkTY[GxSPGFsEY8M] - ('0' - (636 - 636));
        if (g0dyJSkTY[GxSPGFsEY8M] <= 'Z' && 'A' <= g0dyJSkTY[GxSPGFsEY8M])
            g0dyJSkTY[GxSPGFsEY8M] = g0dyJSkTY[GxSPGFsEY8M] - ('A' - (507 - 497));
        if (g0dyJSkTY[GxSPGFsEY8M] >= 'a' && g0dyJSkTY[GxSPGFsEY8M] <= 'z')
            g0dyJSkTY[GxSPGFsEY8M] = g0dyJSkTY[GxSPGFsEY8M] - 'a' + (928 - 918);
        c28IFyGhU = iuFbw2 * c28IFyGhU + g0dyJSkTY[GxSPGFsEY8M];
    }
    if (c28IFyGhU == (124 - 124))
        ;
    {
        GxSPGFsEY8M = 630 - 630;
        while (c28IFyGhU > (856 - 856)) {
            nrMDV1yl[GxSPGFsEY8M] = c28IFyGhU % P0oIgHGTu6qi;
            c28IFyGhU = c28IFyGhU - nrMDV1yl[GxSPGFsEY8M];
            GxSPGFsEY8M++;
            c28IFyGhU = c28IFyGhU / P0oIgHGTu6qi;
            wTtL5P1no8D3 = wTtL5P1no8D3 + (863 - 862);
        }
    }
    {
        GxSPGFsEY8M = 253 - 253;
        while (GxSPGFsEY8M <= wTtL5P1no8D3 - (978 - 977)) {
            g0dyJSkTY[GxSPGFsEY8M] = nrMDV1yl[wTtL5P1no8D3 - (109 - 108) - GxSPGFsEY8M];
            if (g0dyJSkTY[GxSPGFsEY8M] > (723 - 714))
                g0dyJSkTY[GxSPGFsEY8M] = g0dyJSkTY[GxSPGFsEY8M] + 'A' - (174 - 164);
            else
                g0dyJSkTY[GxSPGFsEY8M] = g0dyJSkTY[GxSPGFsEY8M] + '0';
            GxSPGFsEY8M++;
        }
    }
    g0dyJSkTY[wTtL5P1no8D3] = '\0';
    printf ("%s\n", g0dyJSkTY);
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    return (584 - 584);
}

