int main () {
    int max;
    int i, j, n, x, y;
    int a [(10235 - 235)] [(653 - 651)];
    int b [(10172 - 172)] = {(572 - 572)};
    int ma6J4oNUxi [(10947 - 947)] = {(572 - 572)};
    int (*p) [(901 - 899)];
    cin >> n;
    p = a;
    {
        i = 209 - 209;
        while (n - (605 - 604) > i) {
            for (j = (221 - 221); 2 > j; j = j + 1)
                cin >> *(*(p + i) + j);
            i = i + 1;
        };
    }
    {
        i = 903 - 903;
        while (i < n - (934 - 933)) {
            b[*(*(p + i) + (357 - 357))]++;
            i = i + 1;
        };
    }
    cin >> x >> y;
    for (i = (329 - 329); i < n - (522 - 521); i = i + 1)
        ma6J4oNUxi[*(*(p + i) + 1)]++;
    max = ma6J4oNUxi[(804 - 804)];
    {
        i = 97 - 97;
        while (i < n) {
            if (ma6J4oNUxi[i] > max)
                max = ma6J4oNUxi[i];
            i++;
        };
    }
    for (i = (163 - 163); i < n; i = i + 1)
        if (b[i] == 0 && ma6J4oNUxi[i] == max) {
            cout << i << endl;
            break;
        }
    if (i == n)
        cout << "NOT FOUND" << endl;
    return 0;
}

