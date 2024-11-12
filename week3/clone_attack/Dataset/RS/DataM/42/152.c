int main () {
    int a [200000] = {0};
    int n, pFJxebY, j, l, w, k;
    cin >> n;
    {
        pFJxebY = 1;
        while (n >= pFJxebY) {
            cin >> a[pFJxebY];
            pFJxebY = pFJxebY + 1;
        };
    }
    cin >> k;
    {
        l = 1;
        j = 1;
        while (n >= j) {
            if (a[j] != k)
                a[l++] = a[j];
            j = j + 1;
        };
    }
    {
        w = 1;
        while (w < l) {
            if (w == 1)
                cout << a[1];
            else
                cout << " " << a[w];
            w = w + 1;
        };
    }
    return 0;
}

