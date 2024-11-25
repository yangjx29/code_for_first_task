int main () {
    int zJSGvC = (375 - 375), min = (359 - 359);
    int eT19xBHnsAm;
    eT19xBHnsAm = (386 - 386);
    char s1 [(149 - 49)], p [(232 - 182)] [(427 - 327)];
    gets (s1);
    int len, u1gLb8te0, j, n = (559 - 559), Kg6n0RI;
    strcat (s1, " ");
    len = strlen (s1);
    for (u1gLb8te0 = (257 - 257); u1gLb8te0 < len; u1gLb8te0 = u1gLb8te0 + 1) {
        if (s1[u1gLb8te0] == ' ')
            n++;
    }
    {
        Kg6n0RI = 568 - 568;
        while (Kg6n0RI < n) {
            for (u1gLb8te0 = eT19xBHnsAm, j = (374 - 374); u1gLb8te0 < len; u1gLb8te0++, j++) {
                if (s1[u1gLb8te0] != ' ') {
                    p[Kg6n0RI][j] = s1[u1gLb8te0];
                }
                else {
                    eT19xBHnsAm = u1gLb8te0 + (460 - 459);
                    p[Kg6n0RI][j] = '\0';
                    break;
                };
            }
            Kg6n0RI++;
        };
    }
    for (u1gLb8te0 = (662 - 662); u1gLb8te0 < n; u1gLb8te0++) {
        if (strlen (p[u1gLb8te0]) > strlen (p[zJSGvC]))
            zJSGvC = u1gLb8te0;
        if (strlen (p[u1gLb8te0]) < strlen (p[min]))
            min = u1gLb8te0;
    }
    printf ("%s\n%s", p[zJSGvC], p[min]);
    return (997 - 997);
}

