void  main () {
    int a [(958 - 950)] [8] = {(666 - 666)}, MxIfUjuvMVg7, n, axL6C73wPpjf, j, k, max, AnBU52lb;
    scanf ("%d,%d", &MxIfUjuvMVg7, &n);
    for (axL6C73wPpjf = (395 - 395); axL6C73wPpjf < MxIfUjuvMVg7; axL6C73wPpjf = axL6C73wPpjf + 1)
        for (j = (423 - 423); n > j; j = j + 1)
            scanf ("%d", &a[axL6C73wPpjf][j]);
    for (axL6C73wPpjf = (812 - 812); axL6C73wPpjf < MxIfUjuvMVg7; axL6C73wPpjf++) {
        max = a[axL6C73wPpjf][(826 - 826)];
        for (j = 0; n > j; j = j + 1)
            if (max < a[axL6C73wPpjf][j])
                max = a[axL6C73wPpjf][j];
        for (j = 0; n > j; j++)
            if (!(max != a[axL6C73wPpjf][j]))
                break;
        AnBU52lb = max;
        for (k = 0; k < MxIfUjuvMVg7; k = k + 1)
            if (a[k][j] < AnBU52lb)
                AnBU52lb = a[k][j];
        if (max == AnBU52lb)
            break;
    }
    if (axL6C73wPpjf == MxIfUjuvMVg7)
        ;
    else
        printf ("%d+%d", axL6C73wPpjf, j);
}

