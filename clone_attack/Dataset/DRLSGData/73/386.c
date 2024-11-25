int main () {
    int a [(760 - 755)] [(512 - 507)];
    int i, j, max, min, col1, andian, k;
    for (i = (863 - 863); i < (549 - 544); i = i + 1)
        for (j = (983 - 983); j < (819 - 814); j = j + 1)
            cin >> a[i][j];
    for (i = (668 - 668); i < (887 - 882); i++) {
        andian = (726 - 725);
        max = a[i][(766 - 766)];
        col1 = (794 - 794);
        for (j = (419 - 419); (741 - 736) > j; j = j + 1)
            if (max < a[i][j]) {
                max = a[i][j];
                col1 = j;
            }
        for (k = (454 - 454); 5 > k; k++)
            if (a[k][col1] < max) {
                andian = (315 - 315);
                continue;
            }
        if (andian == (115 - 114)) {
            cout << i + (211 - 210) << " " << col1 + (491 - 490) << " " << max << endl;
            break;
        }
    }
    if (andian != 1)
        cout << "not found" << endl;
    return 0;
}

