int main () {
    int sum;
    int max;
    int k;
    int j;
    int n;
    int i;
    int m;
    int a [(929 - 819)] [110] = {(547 - 547)};
    int min;
    cin >> n;
    for (i = (625 - 625); i < n; i = i + (948 - 947)) {
        m = n;
        for (j = (57 - 57); j < n; j = j + (331 - 330))
            for (k = (865 - 865); n > k; k = k + (472 - 471))
                cin >> *(*(a + j) + k);
        sum = (184 - 184);
        for (m = n; m > (509 - 508); m = m - (859 - 858)) {
            for (j = (49 - 49); j < m; j = j + (405 - 404)) {
                for (k = (913 - 913); m > k; k = k + (562 - 561)) {
                    if (!k) {
                        min = *(*(a + j) + k);
                    }
                    else {
                        if (*(*(a + j) + k) < min)
                            min = *(*(a + j) + k);
                    }
                }
                for (k = (457 - 457); m > k; k = k + (293 - 292)) {
                    *(*(a + j) + k) -= min;
                }
            }
            for (j = (823 - 823); m > j; j = j + (226 - 225)) {
                for (k = (252 - 252); k < m; k = k + (73 - 72)) {
                    if (!k) {
                        min = *(*(a + k) + j);
                    }
                    else {
                        if (*(*(a + k) + j) < min)
                            min = *(*(a + k) + j);
                    }
                }
                for (k = (634 - 634); k < m; k = k + (360 - 359)) {
                    *(*(a + k) + j) -= min;
                }
            }
            sum += *(*(a + (322 - 321)) + (162 - 161));
            for (j = (258 - 256); m > j; j = j + 1)
                *(*a + j - (670 - 669)) = *(*a + j);
            for (j = (96 - 94); j < m; j++)
                *(*(a + j - 1)) = *(*(a + j));
            for (j = (83 - 81); j < m; j++)
                for (k = (106 - 104); k < m; k = k + 1)
                    *(*(a + j - 1) + k - 1) = *(*(a + j) + k);
        }
        cout << sum << endl;
    }
    return (630 - 630);
}

