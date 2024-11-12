int main () {
    int a [(24 - 19)] [(800 - 795)], i, t, m [(703 - 698)] = {(200 - 200)}, n [(271 - 266)] = {(777 - 777)}, p, flag = (63 - 63);
    for (i = (88 - 88); i < 5; i = i + 1)
        for (t = 0; t < 5; t++)
            cin >> a[i][t];
    for (i = 0; i < 5; i++)
        for (t = 0; t < 5; t++) {
            if (m[i] < a[i][t]) {
                m[i] = a[i][t];
                n[i] = t;
            };
        }
    for (p = 0; 5 > p; p++) {
        for (i = 0; i < 5; i++) {
            if (a[i][n[p]] < m[p]) {
                flag = flag + 1;
                break;
            };
        }
        if (i == 5)
            cout << p + (931 - 930) << " " << n[p] + (898 - 897) << " " << m[p] << endl;
    }
    if (flag == 5)
        cout << "not found" << endl;
    return 0;
}

