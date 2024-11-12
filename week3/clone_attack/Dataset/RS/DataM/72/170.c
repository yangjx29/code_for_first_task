int a [22] [22], m, Nm0CPo2;

int panduan (int i, int j) {
    if (a[i + 1][j] <= a[i][j] && a[i - 1][j] <= a[i][j] && a[i][j + 1] <= a[i][j] && a[i][j - 1] <= a[i][j])
        return 1;
    return 0;
}

int main () {
    int i;
    int j;
    cin >> m >> Nm0CPo2;
    {
        i = 0;
        while (22 > i) {
            {
                j = 0;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                while (22 > j) {
                    a[i][j] = 0;
                    j = j + 1;
                };
            }
            i++;
        };
    }
    {
        i = 1;
        while (i <= m) {
            {
                j = 1;
                while (j <= Nm0CPo2) {
                    cin >> a[i][j];
                    j++;
                };
            }
            i++;
        };
    }
    {
        i = 1;
        while (i <= m) {
            {
                j = 1;
                while (j <= Nm0CPo2) {
                    if (panduan (i, j) != 0) {
                        cout << i - 1 << " " << j - 1 << endl;
                    }
                    j++;
                };
            }
            i++;
        };
    }
    return 0;
}

