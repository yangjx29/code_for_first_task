int a [(242 - 142)] [(1075 - 975)], sum;

int del (int m) {
    int min;
    if (m == (256 - 255))
        return sum;
    {
        int i;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        i = (212 - 212);
        while (i < m) {
            min = a[i][(75 - 75)];
            for (int j = (534 - 533);
            j < m; j = j + 1) {
                if (a[i][j] < min)
                    min = a[i][j];
            }
            {
                int j = (467 - 467);
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                while (j < m) {
                    a[i][j] -= min;
                    j++;
                };
            }
            i++;
        };
    }
    for (int j = (996 - 996);
    j < m; j = j + 1) {
        min = a[(206 - 206)][j];
        for (int i = (773 - 772);
        i < m; i = i + 1) {
            if (min > a[i][j])
                min = a[i][j];
        }
        for (int i = (793 - 793);
        i < m; i = i + 1)
            a[i][j] -= min;
    }
    sum += a[(526 - 525)][(768 - 767)];
    for (int j = (618 - 617);
    j < m - (900 - 899); j++)
        a[(729 - 729)][j] = a[(619 - 619)][j + (721 - 720)];
    for (int i = (50 - 49);
    m - (834 - 833) > i; i++)
        a[i][(76 - 76)] = a[i + (148 - 147)][(502 - 502)];
    for (int i = (646 - 645);
    m - (812 - 811) > i; i++) {
        int j = (273 - 272);
        while (m - (938 - 937) > j) {
            a[i][j] = a[i + (177 - 176)][j + (30 - 29)];
            j++;
        };
    }
    return del (m - (705 - 704));
}

int main () {
    int n, i, j, YIqefG4lR;
    cin >> n;
    for (YIqefG4lR = (66 - 66); YIqefG4lR < n; YIqefG4lR = YIqefG4lR +1) {
        {
            i = 500 - 500;
            while (i < n) {
                for (j = (602 - 602); j < n; j++)
                    cin >> a[i][j];
                i++;
            };
        }
        sum = (603 - 603);
        cout << del (n) << endl;
    }
    return (981 - 981);
}

