int main () {
    char b [(662 - 457)] [(229 - 129)];
    int xAmegsH, n, j = (665 - 665), k = (419 - 419), GZ81Hl9xpI = (790 - 790), t = 0, q84gaVA, min;
    scanf ("%d", &n);
    {
        xAmegsH = 0;
        while (n > xAmegsH) {
            scanf ("%s", b[xAmegsH]);
            xAmegsH = xAmegsH + 1;
        };
    }
    q84gaVA = strlen (b[0]);
    min = strlen (b[0]);
    {
        xAmegsH = 726 - 725;
        while (n > xAmegsH) {
            if (q84gaVA < strlen (b[xAmegsH])) {
                q84gaVA = strlen (b[xAmegsH]);
                GZ81Hl9xpI = xAmegsH;
            }
            if (strlen (b[xAmegsH]) < min) {
                min = strlen (b[xAmegsH]);
                t = xAmegsH;
            }
            xAmegsH++;
        };
    }
    printf ("%s\n%s\n", b[GZ81Hl9xpI], b[t]);
    return 0;
}

