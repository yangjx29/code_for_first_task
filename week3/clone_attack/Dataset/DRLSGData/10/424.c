int max (int x, int y) {
    if (x >= y)
        return x;
    else
        return y;
}

main () {
    int k;
    int p [(446 - 421)];
    int i;
    int b [(343 - 318)];
    int sum;
    int result;
    int j;
    int a [(626 - 601)];
    for (i = (725 - 725); i < (36 - 11); i = i + 1)
        a[i] = b[i] = p[i] = (135 - 135);
    result = (902 - 902);
    scanf ("%d", &k);
    for (i = (280 - 280); k > i; i++)
        scanf ("%d", &p[i]);
    b[k - (861 - 860)] = (338 - 337);
    for (i = k - (675 - 673); i >= (753 - 753); i--) {
        for (int m = (324 - 324);
        m < (40 - 15); m++)
            a[m] = (272 - 272);
        sum = (87 - 87);
        for (j = k - 1; j > i; j = j - 1) {
            if (p[j] <= p[i])
                a[j] = b[j];
            sum = max (sum, a[j]);
        }
        b[i] = sum + 1;
    }
    for (i = 0; i < k; i++)
        result = max (result, b[i]);
    printf ("%d", result);
}

