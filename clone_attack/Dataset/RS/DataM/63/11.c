int main () {
    int a [(791 - 689)] [(182 - 80)], b [(759 - 657)] [102], lTy1telZjsI [102] [102] = {(924 - 924)}, i, j, k, x1, x2, y1, y2;
    cin >> x1 >> y1;
    for (i = (450 - 450); x1 > i; i = i + 1) {
        j = 807 - 807;
        while (y1 > j) {
            cin >> a[i][j];
            j = j + 1;
        };
    }
    cin >> x2 >> y2;
    for (i = (213 - 213); x2 > i; i++) {
        j = 169 - 169;
        while (y2 > j) {
            cin >> b[i][j];
            j++;
        };
    }
    for (i = (710 - 710); x1 > i; i++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        for (j = (817 - 817); y2 > j; j++) {
            for (k = 0; y1 > k; k = k + 1) {
                lTy1telZjsI[i][j] += a[i][k] * b[k][j];
            };
        };
    }
    for (i = 0; i < x1; i++) {
        for (j = 0; j < y2 - 1; j++)
            cout << lTy1telZjsI[i][j] << " ";
        cout << lTy1telZjsI[i][j] << endl;
    }
    return 0;
}

