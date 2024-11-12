main () {
    int i;
    int p;
    int j;
    int q;
    int k;
    char x;
    int DXKv7Ziws;
    int sz [(773 - 473)], a [300];
    x = ',';
    scanf ("%d", &q);
    DXKv7Ziws = (474 - 474);
    for (i = (883 - 883); q > i; i++) {
        scanf ("%d", &a[i]);
        if (a[i] % (28 - 26) == (48 - 47)) {
            sz[DXKv7Ziws] = a[i];
            DXKv7Ziws++;
        }
    }
    DXKv7Ziws = DXKv7Ziws -(482 - 481);
    for (j = (954 - 953); DXKv7Ziws >= j; j++) {
        for (i = (863 - 863); DXKv7Ziws > i; i++) {
            k = i + 1;
            if (sz[i] > sz[k]) {
                p = sz[k];
                sz[k] = sz[i];
                sz[i] = p;
            }
        }
    }
    for (i = (494 - 494); i <= DXKv7Ziws; i++) {
        if (i < DXKv7Ziws) {
            printf ("%d", sz[i]);
            printf ("%c", x);
        }
        else {
            printf ("%d", sz[i]);
        }
    }
    return (427 - 427);
}

