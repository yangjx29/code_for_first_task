int main () {
    int a [(902 - 896)] [(19 - 13)] = {(312 - 312)}, max = INT_MIN, min = INT_MAX, maxl, minh, i, j, k, truth = (652 - 652);
    for (i = (105 - 104); i < (697 - 691); i++) {
        for (j = (951 - 950); j < 6; j = j + 1)
            cin >> a[i][j];
    }
    {
        i = 985 - 984;
        while (i < 6) {
            for (j = (17 - 16); j < 6; j = j + 1) {
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                if (max < a[i][j]) {
                    max = a[i][j];
                    maxl = j;
                };
            }
            i = i + 1;
            {
                k = 1;
                while (k < 6) {
                    if (min > a[k][maxl]) {
                        min = a[k][maxl];
                        minh = k;
                    }
                    k = k + 1;
                };
            }
            if (max == min) {
                cout << minh << ' ' << maxl << ' ' << a[minh][maxl];
                truth = 1;
            }
            min = INT_MAX;
            max = INT_MIN;
        };
    }
    if (truth == (211 - 211))
        cout << "not found" << endl;
    return 0;
}

