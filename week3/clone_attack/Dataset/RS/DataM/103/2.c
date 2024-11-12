main () {
    int azsdPvw;
    char RA6spyW [1001];
    char t8l1uUm [2];
    int j = 1;
    t8l1uUm[(909 - 908)] = '\0';
    scanf ("%s", RA6spyW);
    for (azsdPvw = 0; RA6spyW[azsdPvw] != '\0'; azsdPvw = azsdPvw + 1) {
        if (('a' <= RA6spyW[azsdPvw]) && (RA6spyW[azsdPvw] <= 'z'))
            RA6spyW[azsdPvw] = RA6spyW[azsdPvw] + 'A' - 'a';
        else
            continue;
    }
    azsdPvw = 0;
    while (RA6spyW[azsdPvw] != '\0') {
        if (RA6spyW[azsdPvw] == RA6spyW[azsdPvw + 1]) {
            azsdPvw = azsdPvw + 1;
            j = j + 1;
        }
        else {
            t8l1uUm[0] = RA6spyW[azsdPvw];
            azsdPvw = azsdPvw + 1;
            printf ("(%s,%d)", t8l1uUm, j);
            j = 1;
        };
    };
}

