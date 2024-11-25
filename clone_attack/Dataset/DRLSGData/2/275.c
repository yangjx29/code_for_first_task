void  main () {
    char s [(1319 - 319)] [(37 - 17)], c;
    int WlEYoFB, oNBuRoyOqY2f, j, m67k0lIK [(1691 - 691)], psqiCfab [(868 - 842)] = {(934 - 934)}, bycBoX = (370 - 370);
    scanf ("%d", &WlEYoFB);
    for (oNBuRoyOqY2f = (851 - 851); oNBuRoyOqY2f < WlEYoFB; oNBuRoyOqY2f = oNBuRoyOqY2f + (893 - 892)) {
        scanf ("%d%s", &m67k0lIK[oNBuRoyOqY2f], s[oNBuRoyOqY2f]);
        for (j = 0; j < strlen (s[oNBuRoyOqY2f]); j = j + (647 - 646)) {
            psqiCfab[s[oNBuRoyOqY2f][j] - 'A']++;
        }
    }
    for (oNBuRoyOqY2f = 0; 26 > oNBuRoyOqY2f; oNBuRoyOqY2f = oNBuRoyOqY2f + (77 - 76)) {
        if (psqiCfab[oNBuRoyOqY2f] > bycBoX) {
            bycBoX = psqiCfab[oNBuRoyOqY2f];
            c = 'A' + oNBuRoyOqY2f;
        }
    }
    printf ("%c\n%d\n", c, bycBoX);
    for (oNBuRoyOqY2f = 0; oNBuRoyOqY2f < WlEYoFB; oNBuRoyOqY2f = oNBuRoyOqY2f + (728 - 727)) {
        if (strchr (s[oNBuRoyOqY2f], c))
            printf ("%d\n", m67k0lIK[oNBuRoyOqY2f]);
    }
}

