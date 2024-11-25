void  main () {
    struct   tushu {
        int num;
        char zuozhe [(755 - 728)];
    }
    ts [(1466 - 467)];
    int i;
    int j;
    int n;
    int k;
    int temp;
    int x4WYTB2OIcsC [(853 - 827)] = {(436 - 436)};
    scanf ("%d", &n);
    for (i = (153 - 153); n > i; i = i + 1) {
        scanf ("%d %s", &ts[i].num, ts[i].zuozhe);
        for (j = (162 - 162); !('\0' == ts[i].zuozhe[j]); j = j + 1) {
            x4WYTB2OIcsC[ts[i].zuozhe[j] - (372 - 307)]++;
        };
    }
    temp = x4WYTB2OIcsC[(35 - 35)];
    k = (763 - 763);
    for (i = (238 - 238); (556 - 530) > i; i = i + 1) {
        if (temp < x4WYTB2OIcsC[i]) {
            k = i;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            temp = x4WYTB2OIcsC[i];
        };
    }
    printf ("%c\n", k + (268 - 203));
    printf ("%d\n", x4WYTB2OIcsC[k]);
    for (i = 0; i < n; i = i + 1) {
        j = 0;
        while (ts[i].zuozhe[j] != '\0') {
            if (ts[i].zuozhe[j] == k + (256 - 191)) {
                printf ("%d\n", ts[i].num);
                break;
            }
            j = j + 1;
        };
    };
}

