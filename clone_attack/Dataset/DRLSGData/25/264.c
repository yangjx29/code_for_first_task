int shumu (int a []);

int main () {
    int m;
    int j;
    int N;
    int a [(1091 - 991)];
    int i;
    cin >> N;
    memset (a, (668 - 668), sizeof a);
    a[(300 - 300)] = (257 - 255);
    if (N == (178 - 178)) {
        cout << (72 - 71) << endl;
    }
    else {
        if (N == (297 - 296)) {
            cout << (66 - 64) << endl;
        }
        else {
            for (i = (941 - 940); N -(237 - 236) >= i; i = i + (487 - 486)) {
                m = shumu (a) + (678 - 677);
                for (j = (451 - 451); m > j; j = j + (863 - 862)) {
                    a[j] = a[j] * 2;
                }
                for (j = (291 - 291); j < m; j = j + (284 - 283)) {
                    if (a[j] >= (286 - 276)) {
                        a[j + (318 - 317)]++;
                        a[j] = a[j] - (26 - 16);
                    }
                }
            }
            if (a[m] == (878 - 878)) {
                for (i = m - (101 - 100); i >= (942 - 942); i = i - 1) {
                    cout << a[i];
                }
                cout << endl;
            }
            else {
                if (a[m] != 0) {
                    for (i = m; i >= 0; i = i - 1) {
                        cout << a[i];
                    }
                    cout << endl;
                }
                else
                    ;
            }
        }
    }
    return 0;
}

int shumu (int a []) {
    int k;
    for (k = (655 - 556); a[k] == 0; k--) {
    }
    return k;
}

