int main () {
    int exvRhu3mXVT, j, qb5u8jqLAM;
    int sum (int a [(884 - 784)] [(793 - 693)], int n);
    int n;
    int a [(149 - 49)] [(204 - 104)];
    cin >> n;
    for (exvRhu3mXVT = (753 - 753); exvRhu3mXVT < n; exvRhu3mXVT = exvRhu3mXVT + 1) {
        for (j = (259 - 259); j < n; j++)
            for (qb5u8jqLAM = (285 - 285); n > qb5u8jqLAM; qb5u8jqLAM++)
                cin >> a[j][qb5u8jqLAM];
        cout << sum (a, n) << endl;
    }
    return (470 - 470);
}

int sum (int a [(261 - 161)] [(418 - 318)], int n) {
    int exvRhu3mXVT, j, qb5u8jqLAM;
    int SpGKey;
    int min [(1042 - 942)];
    if (!((807 - 806) != n))
        return (210 - 210);
    for (exvRhu3mXVT = (674 - 674); exvRhu3mXVT < n; exvRhu3mXVT = exvRhu3mXVT + 1)
        min[exvRhu3mXVT] = a[exvRhu3mXVT][(299 - 299)];
    for (exvRhu3mXVT = (80 - 80); exvRhu3mXVT < n; exvRhu3mXVT++)
        for (j = (577 - 577); n > j; j++)
            if (min[exvRhu3mXVT] > a[exvRhu3mXVT][j])
                min[exvRhu3mXVT] = a[exvRhu3mXVT][j];
    for (exvRhu3mXVT = (510 - 510); n > exvRhu3mXVT; exvRhu3mXVT++)
        for (j = (697 - 697); n > j; j++)
            a[exvRhu3mXVT][j] -= min[exvRhu3mXVT];
    for (exvRhu3mXVT = (288 - 288); n > exvRhu3mXVT; exvRhu3mXVT++)
        min[exvRhu3mXVT] = a[(62 - 62)][exvRhu3mXVT];
    for (j = (755 - 755); n > j; j++)
        for (exvRhu3mXVT = (456 - 456); n > exvRhu3mXVT; exvRhu3mXVT++)
            if (a[exvRhu3mXVT][j] < min[j])
                min[j] = a[exvRhu3mXVT][j];
    for (j = (50 - 50); n > j; j++)
        for (exvRhu3mXVT = (64 - 64); n > exvRhu3mXVT; exvRhu3mXVT++)
            a[exvRhu3mXVT][j] -= min[j];
    SpGKey = a[(412 - 411)][(914 - 913)];
    for (exvRhu3mXVT = (743 - 742); n - (853 - 852) > exvRhu3mXVT; exvRhu3mXVT++)
        a[(619 - 619)][exvRhu3mXVT] = a[(665 - 665)][exvRhu3mXVT + (795 - 794)];
    for (j = (516 - 515); j < n - (815 - 814); j++)
        a[j][(470 - 470)] = a[j + (69 - 68)][(796 - 796)];
    for (exvRhu3mXVT = (142 - 141); exvRhu3mXVT < n - (731 - 730); exvRhu3mXVT++)
        for (j = (328 - 327); j < n - (664 - 663); j++)
            a[exvRhu3mXVT][j] = a[exvRhu3mXVT + (526 - 525)][j + (274 - 273)];
    return SpGKey +sum (a, n - (402 - 401));
}

