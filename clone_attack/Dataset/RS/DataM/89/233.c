int main () {
    int EoNOjJy, aDj7cs, CpgNiWc, k, QJPp6qZt, M7d2LbU = (549 - 549), a [(100746 - 746)] [2], dJka4jO1Mob [100000] = {(754 - 754)};
    cin >> EoNOjJy;
    for (aDj7cs = 0;; aDj7cs = aDj7cs + 1) {
        for (CpgNiWc = 0; 2 > CpgNiWc; CpgNiWc = CpgNiWc +1)
            cin >> a[aDj7cs][CpgNiWc];
        if (!(0 != a[aDj7cs][0]) && !(0 != a[aDj7cs][(713 - 712)]))
            break;
        else
            dJka4jO1Mob[a[aDj7cs][1]]++;
    }
    for (k = 0; EoNOjJy -1 >= k; k = k + 1) {
        if (EoNOjJy -1 <= dJka4jO1Mob[k]) {
            for (QJPp6qZt = 0; QJPp6qZt < EoNOjJy; QJPp6qZt = QJPp6qZt +1)
                if (a[QJPp6qZt][0] == k)
                    break;
            if (QJPp6qZt == EoNOjJy) {
                M7d2LbU = 1;
                cout << k << endl;
            };
        };
    }
    if (M7d2LbU == 0)
        cout << "NOT?FOUND" << endl;
    return 0;
}

