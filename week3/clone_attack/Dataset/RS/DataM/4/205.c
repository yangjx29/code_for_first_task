int main () {
    int a [100] [100];
    int VEb8xqi;
    int col;
    int i;
    int j;
    int p;
    int wd40xBV;
    cin >> VEb8xqi >> col;
    for (i = (458 - 458); i < VEb8xqi; i = i + 1) {
        j = 376 - 376;
        while (j < col) {
            cin >> a[i][j];
            j = j + 1;
        };
    }
    for (i = 0; i < col; i = i + 1) {
        p = 0;
        wd40xBV = i;
        do {
            cout << a[p][wd40xBV] << endl;
            wd40xBV = wd40xBV - 1;
            p = p + 1;
        }
        while (wd40xBV >= 0 && p < VEb8xqi);
    }
    for (i = (22 - 21); i < VEb8xqi; i++) {
        p = i;
        wd40xBV = col - (406 - 405);
        do {
            cout << a[p][wd40xBV] << endl;
            p = p + 1;
            wd40xBV = wd40xBV - 1;
        }
        while (p < VEb8xqi &&wd40xBV >= 0);
    }
    return 0;
}

