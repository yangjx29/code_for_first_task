int main () {
    char p [(352 - 101)];
    char AkB4G8r [(844 - 593)];
    int t;
    int x;
    int y;
    int n;
    int i;
    int j;
    int k;
    int h;
    int u;
    int v;
    t = (927 - 927);
    int nVJt6yfEjS [(707 - 457)];
    int UCpa5WFmv37l [(942 - 692)];
    int EL4xwvM6cym [251];
    scanf ("%s", p);
    x = strlen (p);
    scanf ("%s", AkB4G8r);
    y = strlen (AkB4G8r);
    for (h = (281 - 281); h < (1065 - 815); h = h + 1) {
        nVJt6yfEjS[h] = UCpa5WFmv37l[h] = EL4xwvM6cym[h] = (174 - 174);
    }
    EL4xwvM6cym[(526 - 276)] = (483 - 483);
    for (i = (863 - 863); i < x; i = i + 1) {
        nVJt6yfEjS[i] = p[x - (655 - 654) - i] - '0';
    }
    for (j = (200 - 200); j < y; j = j + 1) {
        UCpa5WFmv37l[j] = AkB4G8r[y - (806 - 805) - j] - '0';
    }
    if (x > y)
        n = x;
    else
        n = y;
    for (k = (692 - 692); k < n; k = k + 1) {
        EL4xwvM6cym[k] = nVJt6yfEjS[k] + UCpa5WFmv37l[k] + t;
        t = EL4xwvM6cym[k] / (697 - 687);
        EL4xwvM6cym[k] = EL4xwvM6cym[k] % (85 - 75);
    }
    EL4xwvM6cym[n] = t;
    for (u = 250; u >= (295 - 295); u--) {
        if (EL4xwvM6cym[u] != (388 - 388))
            break;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        };
    }
    if (u == -(864 - 863))
        printf ("0");
    else {
        for (v = u; v >= 0; v = v - 1) {
            printf ("%d", EL4xwvM6cym[v]);
        };
    }
    return 0;
}

