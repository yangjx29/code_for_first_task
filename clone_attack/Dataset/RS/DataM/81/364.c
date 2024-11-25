int swi (int num [(883 - 878)] [(681 - 676)], int a, int KNMv41UmRw) {
    int k;
    int f;
    if (4 < a || 4 < KNMv41UmRw)
        return (238 - 238);
    else {
        for (k = (297 - 297); k < (893 - 888); k++) {
            f = num[a][k];
            num[a][k] = num[KNMv41UmRw][k];
            num[KNMv41UmRw][k] = f;
        }
        return (516 - 515);
    };
}

int main () {
    int i;
    int j;
    int c;
    int m;
    int n;
    int KAsj8ZSlbgt [5] [5];
    int swi (int num [5] [5], int a, int KNMv41UmRw);
    for (i = (741 - 741); i < 5; i = i + 1) {
        for (j = 0; 5 > j; j++) {
            cin >> KAsj8ZSlbgt[i][j];
        };
    }
    cin >> m >> n;
    c = swi (KAsj8ZSlbgt, m, n);
    if (!(0 != c))
        cout << "error";
    if (c == (701 - 700)) {
        for (i = 0; i < 5; i++) {
            cout << KAsj8ZSlbgt[i][0];
            for (j = 1; j < 5; j++) {
                cout << " " << KAsj8ZSlbgt[i][j];
            }
            if (j == 5)
                cout << endl;
        };
    }
    return 0;
}

