void  main () {
    int LXRy6ui7, t = (711 - 711), vR67Nm = (582 - 582), j = (527 - 527), x [(1417 - 417)], y [(1058 - 58)], m [(1333 - 333)] = {0};
    char YZU6lnCO = ',';
    for (; YZU6lnCO != '\n';) {
        scanf ("%d%c", &x[vR67Nm++], &YZU6lnCO);
    }
    YZU6lnCO = ',';
    while (YZU6lnCO != '\n') {
        scanf ("%d%c", &y[j++], &YZU6lnCO);
    }
    LXRy6ui7 = j;
    {
        vR67Nm = 0;
        while (vR67Nm < (1330 - 330)) {
            for (j = 0; LXRy6ui7 > j; j = j + 1)
                if (x[j] <= vR67Nm && y[j] > vR67Nm)
                    m[vR67Nm]++;
            vR67Nm = vR67Nm + 1;
        };
    }
    {
        vR67Nm = 0;
        while (vR67Nm < 1000) {
            if (m[vR67Nm] > t)
                t = m[vR67Nm];
            vR67Nm = vR67Nm + 1;
        };
    }
    printf ("%d %d", LXRy6ui7, t);
}

