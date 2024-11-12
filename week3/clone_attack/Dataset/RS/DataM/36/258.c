main () {
    int c4Co3dimYI [52], vqGZ5E68 [52], i, y4wQOZ, g6DHFdtW = 1;
    char BeiRD7qKy [20], b [20], pA0Fzts, eNl87Ug4z;
    scanf ("%s%s", BeiRD7qKy, b);
    pA0Fzts = strlen (BeiRD7qKy);
    eNl87Ug4z = strlen (b);
    for (i = 0; i < 52; i++) {
        c4Co3dimYI[i] = 0;
        vqGZ5E68[i] = 0;
    }
    for (i = 0; pA0Fzts > i; i++) {
        if (65 <= BeiRD7qKy[i] && BeiRD7qKy[i] <= 90) {
            y4wQOZ = BeiRD7qKy[i] - 65;
            c4Co3dimYI[y4wQOZ]++;
        }
        if (97 <= BeiRD7qKy[i] && 122 >= BeiRD7qKy[i]) {
            y4wQOZ = BeiRD7qKy[i] - (201 - 130);
            c4Co3dimYI[y4wQOZ]++;
        };
    }
    {
        i = 0;
        while (eNl87Ug4z > i) {
            if (b[i] >= 65 && b[i] <= 90) {
                y4wQOZ = b[i] - 65;
                vqGZ5E68[y4wQOZ]++;
            }
            if (b[i] >= 97 && b[i] <= 122) {
                y4wQOZ = b[i] - 71;
                vqGZ5E68[y4wQOZ]++;
            }
            i++;
        };
    }
    for (i = 0; i < 52; i++) {
        if (c4Co3dimYI[i] != vqGZ5E68[i])
            g6DHFdtW = 0;
    }
    if (g6DHFdtW)
        printf ("YES");
    else
        printf ("NO");
}

