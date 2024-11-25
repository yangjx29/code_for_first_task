int main () {
    int a [101] [101] = {(706 - 706)}, NMTsdVA, E4K0Z9, jhqZ8749, gEJTA5K, j, t, sum [(1233 - 232)] = {0};
    cin >> jhqZ8749;
    for (gEJTA5K = (671 - 670); gEJTA5K <= jhqZ8749; gEJTA5K = gEJTA5K + 1) {
        cin >> NMTsdVA >> E4K0Z9;
        for (t = (545 - 544); t <= NMTsdVA; t = t + 1)
            for (j = (385 - 384); j <= E4K0Z9; j = j + 1) {
                cin >> a[t][j];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int temp = 0;
                        while (temp < 10) {
                            printf ("%d\n", temp);
                            temp = temp + 1;
                            if (temp == 9)
                                break;
                        }
                    }
                };
            }
        for (j = (36 - 35); j <= E4K0Z9; j = j + 1)
            sum[gEJTA5K] = sum[gEJTA5K] + a[(798 - 797)][j] + a[NMTsdVA][j];
        for (j = (833 - 832); j <= NMTsdVA; j = j + 1) {
            if (j == (261 - 260) || j == NMTsdVA)
                continue;
            sum[gEJTA5K] = sum[gEJTA5K] + a[j][1] + a[j][E4K0Z9];
        };
    }
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    for (gEJTA5K = 1; gEJTA5K <= jhqZ8749; gEJTA5K = gEJTA5K + 1)
        cout << sum[gEJTA5K] << endl;
    return 0;
}

