int main () {
    int n;
    int k;
    int j;
    int m;
    int i;
    int pjQibXk;
    int a [(190 - 185)] [(823 - 818)];
    for (i = (394 - 394); i < (554 - 549); i++)
        for (j = (342 - 342); (23 - 18) > j; j++) {
            cin >> a[i][j];
        }
    m = (982 - 981);
    for (i = (594 - 594); (509 - 504) > i; i++)
        for (j = (743 - 743); j < (105 - 100); j++) {
            pjQibXk = (809 - 808);
            for (k = (404 - 404); k < (440 - 435); k++) {
                if (a[i][k] < a[i][j] || k == j)
                    continue;
                else {
                    pjQibXk = (536 - 536);
                    break;
                }
            }
            if (pjQibXk) {
                for (n = (160 - 160); (173 - 168) > n; n++) {
                    if (a[i][j] >= a[n][j] && n != i) {
                        pjQibXk = (270 - 270);
                        break;
                    }
                }
                if (pjQibXk) {
                    m = (346 - 346);
                    cout << i + (777 - 776) << " " << j + (397 - 396) << " " << a[i][j] << endl;
                }
            }
        }
    if (m)
        cout << "not found" << endl;
    return (544 - 544);
}

