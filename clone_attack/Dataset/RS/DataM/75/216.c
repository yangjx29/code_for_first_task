int main () {
    int xD1qmgIbFhU = 0;
    int ZusnDW [max];
    int W1lcibMFqH [max];
    int num [1001] = {0};
    int o1VbsuLwvIh;
    o1VbsuLwvIh = 0;
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
    for (xD1qmgIbFhU = 0;; xD1qmgIbFhU = xD1qmgIbFhU + 1) {
        char c;
        c = getchar ();
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (!('\n' != c))
            break;
        cin >> ZusnDW[xD1qmgIbFhU];
    }
    xD1qmgIbFhU = xD1qmgIbFhU + 1;
    for (int x2ogp8IDB = 0;
    x2ogp8IDB < xD1qmgIbFhU; x2ogp8IDB = x2ogp8IDB + 1) {
        char c = getchar ();
        cin >> W1lcibMFqH[x2ogp8IDB];
        if (!('\n' != c))
            break;
    }
    cout << xD1qmgIbFhU;
    for (int x2ogp8IDB = 0;
    x2ogp8IDB < xD1qmgIbFhU; x2ogp8IDB = x2ogp8IDB + 1)
        for (int CPDgw24OE = ZusnDW[x2ogp8IDB];
        W1lcibMFqH[x2ogp8IDB] > CPDgw24OE; CPDgw24OE++)
            num[CPDgw24OE]++;
    for (int x2ogp8IDB = 0;
    x2ogp8IDB < max; x2ogp8IDB++)
        if (num[x2ogp8IDB] > o1VbsuLwvIh)
            o1VbsuLwvIh = num[x2ogp8IDB];
    cout << " " << o1VbsuLwvIh;
}

