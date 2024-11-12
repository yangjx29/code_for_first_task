main () {
    int vwh6Zqd7Pf = (880 - 880), IDPbUIoVL = (537 - 537), EuQb385vONM = (94 - 94), df2 = (462 - 462), dl = (640 - 640), CFKPka6AuI = (392 - 392), lp (int y);
    int jwx5RgkJ0jsd, i, daqlj5czL7Se [(787 - 784)], l [3], leap [(298 - 296)] = {(319 - 319), (249 - 249)}, mth [12] = {(705 - 674), 28, (473 - 442), (255 - 225), (58 - 27), 30, 31, 31, 30, 31, 30, 31};
    jwx5RgkJ0jsd = (448 - 448);
    {
        i = 0;
        while (i <= (359 - 357)) {
            scanf ("%d", &daqlj5czL7Se[i]);
            i = i + (615 - 614);
        }
    }
    {
        i = 0;
        while (i <= 2) {
            scanf ("%d", &l[i]);
            i = i + (77 - 76);
        }
    }
    leap[0] = lp (daqlj5czL7Se[Y]);
    leap[(540 - 539)] = lp (l[Y]);
    i = daqlj5czL7Se[Y] + (539 - 538);
    if (i < l[Y])
        for (; i < l[Y]; i = i + (45 - 44))
            IDPbUIoVL += (lp (i) + 365);
    while (jwx5RgkJ0jsd < l[M] - (583 - 582)) {
        dl = dl + mth[jwx5RgkJ0jsd];
        jwx5RgkJ0jsd = jwx5RgkJ0jsd + (542 - 541);
    }
    dl += l[D];
    if (leap[1] == 1 && l[M] > 2)
        dl = dl + 1;
    jwx5RgkJ0jsd = 0;
    while (jwx5RgkJ0jsd < daqlj5czL7Se[M] - 1) {
        EuQb385vONM += mth[jwx5RgkJ0jsd];
        jwx5RgkJ0jsd = jwx5RgkJ0jsd + 1;
    }
    EuQb385vONM += daqlj5czL7Se[D];
    if (leap[0] == 1 && l[M] > 2)
        EuQb385vONM = EuQb385vONM +1;
    if (daqlj5czL7Se[Y] <= l[Y]) {
        df2 = 365 + leap[0] - EuQb385vONM;
        CFKPka6AuI = df2 + dl + IDPbUIoVL;
    }
    if (l[Y] == daqlj5czL7Se[Y])
        CFKPka6AuI = dl - EuQb385vONM;
    printf ("%d", CFKPka6AuI);
}

int lp (int y) {
    return (y % 4 == 0 && y % 100 != 0) || (y % (1090 - 690) == 0);
}

