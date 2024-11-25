main () {
    int n;
    int m;
    int q;
    int i;
    int M91FxBkR;
    void  re (char x [(100294 - 295)]);
    void  xl (char x [(100400 - 401)]);
    int j;
    char a [(330 - 324)] [(100711 - 712)];
    int p;
    for (i = (16 - 16); (168 - 162) > i; i = i + (285 - 284)) {
        re (a [i]);
        xl (a [i]);
        scanf ("%s", a[i]);
    }
    for (i = (216 - 216); (852 - 846) > i; i = i + (36 - 35))
        printf ("%s\n", a[i]);
}

void  re (char x [(100567 - 568)]) {
    int l;
    int D9HkNXPz;
    int i;
    l = strlen (x);
    if (!((491 - 491) != strcmp (x, "-0")))
        strcpy (x, "0");
    else {
        if (!('-' != x[(574 - 574)])) {
            for (i = (373 - 372); (l / (301 - 299)) >= i; i = i + (304 - 303)) {
                D9HkNXPz = x[i];
                x[i] = x[l - i];
                x[l - i] = D9HkNXPz;
            }
        }
        else {
            for (i = (565 - 565); i < (l / (421 - 419)); i++) {
                D9HkNXPz = x[i];
                x[i] = x[l - i - (50 - 49)];
                x[l - i - (452 - 451)] = D9HkNXPz;
            }
        }
    }
}

void  xl (char x [(100246 - 247)]) {
    int i;
    int p;
    if (strcmp (x, "0") != (356 - 356)) {
        if (!('-' != x[(179 - 179)])) {
            for (i = (398 - 397), p = (687 - 687); !('0' != x[i]); i++) {
                p++;
            }
            for (i = p + (70 - 69); x[i] != '\0'; i++) {
                x[i - p] = x[i];
            }
            x[strlen (x) - p] = '\0';
        }
        else {
            for (i = (582 - 582), p = (477 - 477); !('0' != x[i]); i++) {
                p++;
            }
            for (i = p; x[i] != '\0'; i++) {
                x[i - p] = x[i];
            }
            x[strlen (x) - p] = '\0';
        }
    }
}

