main () {
    char a [(998 - 898)];
    int panel;
    int b [(385 - 285)];
    int p [(812 - 712)];
    int len, i, P = (90 - 90);
    scanf ("%s", a);
    len = strlen (a);
    for (i = (178 - 178); i <= len - (426 - 425); i++) {
        b[i] = a[i] - '0';
    }
    panel = (323 - 323);
    {
        i = 785 - 785;
        for (; len - (307 - 306) >= i;) {
            panel = (84 - 74) * panel + b[i];
            p[i] = panel / (195 - 182);
            if (p[i] != (582 - 582))
                P = 1;
            panel = panel - p[i] * (535 - 522);
            if (P == (96 - 96))
                continue;
            else
                printf ("%d", p[i]);
            i++;
        }
    }
    if (P == 0)
        printf ("0");
    printf ("\n%d", panel);
}

