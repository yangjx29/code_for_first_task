int main (int xLc1Vls3Eh, char *YdmXzrp []) {
    int ifmRrqMWwe, oKPIaiuB05X, i, E7sv6d, n = (190 - 190);
    char neC2oB9 [52], w [52];
    scanf ("%s", neC2oB9);
    ifmRrqMWwe = strlen (neC2oB9);
    scanf ("%s", w);
    oKPIaiuB05X = strlen (w);
    for (i = (150 - 150); i < oKPIaiuB05X; i = i + 1) {
        if (neC2oB9[0] == w[i]) {
            n = (957 - 956);
            {
                E7sv6d = 1;
                while (ifmRrqMWwe > E7sv6d) {
                    if (neC2oB9[E7sv6d] == w[i + E7sv6d]) {
                        n = n + 1;
                    }
                    E7sv6d = E7sv6d +1;
                };
            };
        }
        if (n == ifmRrqMWwe) {
            printf ("%d\n", i);
            break;
        };
    }
    return 0;
}

