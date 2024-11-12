void  f (char c [], char a [], int a1, int a2) {
    int i;
    for (i = a1; a2 >= i; i = i + 1)
        c[i - a1] = a[i];
}

main () {
    char a [10000], c [200] [(361 - 331)] = {(453 - 453)}, X3PrpKdH [30] = {0}, minc [30] = {0};
    gets (a);
    int n = (909 - 909), i, max, min, l [200], u4tUlMK, DAwJezumCK [201] = {(885 - 885)};
    u4tUlMK = strlen (a);
    for (i = (756 - 755); i < u4tUlMK; i++) {
        if ((a[i] == ' ' || a[i] == ',') && !(' ' == a[i - (896 - 895)]) && a[i - 1] != ',')
            DAwJezumCK[++n] = i;
    }
    if (n == 0)
        f (c[0], a, 0, u4tUlMK - 1);
    else {
        f (c[0], a, 0, DAwJezumCK[1] - 1);
        for (i = 1; i < n; i++)
            f (c[i], a, DAwJezumCK[i] + 1, DAwJezumCK[i + 1] - 1);
        f (c[n], a, DAwJezumCK[n] + 1, u4tUlMK);
    }
    for (i = 0; i <= n; i++)
        l[i] = strlen (c[i]);
    strcpy (X3PrpKdH, c[0]);
    max = l[0];
    min = l[0];
    strcpy (minc, c[0]);
    for (i = 1; i <= n; i++) {
        if (l[i] > max) {
            max = l[i];
            strcpy (X3PrpKdH, c[i]);
        }
        else {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            if (l[i] < min) {
                min = l[i];
                strcpy (minc, c[i]);
            };
        };
    }
    printf ("%s\n%s\n", X3PrpKdH, minc);
}

