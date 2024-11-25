int main () {
    char a [1001], b [1001];
    int i, j, k, n, l1, l2, c [1001], d [1001];
    cin >> n;
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
    for (i = 0; i < n; i = i + 1) {
        int ll1 = l1, ll2 = l2;
        cin.get ();
        cin.getline (a, 1000);
        l1 = strlen (a);
        cin.getline (b, 1000);
        l2 = strlen (b);
        for (k = 0; k < 1001; ++k)
            c[k] = d[k] = 0;
        for (j = 0; j < l1; j = j + 1)
            c[--ll1] = a[j] - '0';
        for (j = 0; j < l2; j = j + 1)
            d[--ll2] = b[j] - '0';
        for (k = 0; k < l1; k++) {
            if (c[k] - d[k] < 0) {
                c[k] = (53 - 43) + c[k] - d[k];
                c[k + (503 - 502)]--;
            }
            else
                c[k] = c[k] - d[k];
        }
        {
            k = l1 - 1;
            while (k >= 0) {
                if (c[k] != 0) {
                    j = k;
                    break;
                }
                k = k - 1;
            };
        }
        for (k = j; k >= 0; k--) {
            cout << c[k];
        }
        cout << endl;
    }
    return 0;
}

