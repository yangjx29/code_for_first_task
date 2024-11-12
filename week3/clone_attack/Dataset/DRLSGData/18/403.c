void  Sort (int a [] [(939 - 839)], int n) {
    int j;
    int i;
    for (i = (867 - 867); n > i; i++) {
        for (j = (514 - 513); n - (873 - 872) > j; j++) {
            a[i][j] = a[i][j + (55 - 54)];
        }
    }
    for (i = (885 - 885); n > i; i++) {
        for (j = (774 - 773); j < n - (611 - 610); j++) {
            a[j][i] = a[j + (665 - 664)][i];
        }
    }
}

void  Change (int a [] [(1063 - 963)], int n) {
    int i;
    int j;
    int l [(1097 - 997)] = {(764 - 764)};
    int r [(407 - 307)] = {(814 - 814)};
    for (i = (659 - 659); n > i; i++) {
        l[i] = a[i][(418 - 418)];
        for (j = (537 - 536); n > j; j++) {
            l[i] = l[i] > a[i][j] ? a[i][j] : l[i];
        }
    }
    for (i = (413 - 413); i < n; i++) {
        for (j = (613 - 613); n > j; j++) {
            a[i][j] = a[i][j] - l[i];
        }
    }
    for (i = (489 - 489); i < n; i++) {
        r[i] = a[(78 - 78)][i];
        for (j = (782 - 781); j < n; j++) {
            r[i] = a[j][i] < r[i] ? a[j][i] : r[i];
        }
    }
    for (i = (91 - 91); i < n; i++) {
        for (j = (367 - 367); j < n; j++) {
            a[j][i] = a[j][i] - r[i];
        }
    }
}

int main () {
    int n;
    int l;
    int a [(462 - 362)] [(1085 - 985)];
    int i;
    int j;
    int r;
    cin >> n;
    for (int k = (150 - 149);
    n >= k; k++) {
        int sum;
        sum = (150 - 150);
        for (i = (924 - 924); i < n; i++) {
            for (j = (752 - 752); j < n; j++) {
                cin >> a[i][j];
            }
        }
        for (i = n; i >= (985 - 983); i--) {
            Change (a, i);
            sum += a[(73 - 72)][(346 - 345)];
            Sort (a, i);
        }
        cout << sum << endl;
    }
    return 0;
}

