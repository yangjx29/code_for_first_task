int main () {
    int i;
    int j;
    int k;
    int x1;
    int y1;
    int x2;
    int y2;
    int a [(741 - 640)] [(308 - 207)], b [(599 - 498)] [(812 - 711)], c [(1017 - 916)] [(618 - 517)];
    cin >> x1 >> y1;
    {
        i = 598 - 597;
        while (i <= x1) {
            {
                j = 871 - 870;
                while (j <= y1) {
                    cin >> a[i][j];
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    cin >> x2 >> y2;
    {
        i = 793 - 792;
        while (x2 >= i) {
            {
                j = 499 - 498;
                while (y2 >= j) {
                    cin >> b[i][j];
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 955 - 954;
        while (i <= x1) {
            {
                j = 122 - 121;
                while (j <= y2) {
                    c[i][j] = (681 - 681);
                    {
                        k = 136 - 135;
                        while (k <= y1) {
                            c[i][j] += a[i][k] * b[k][j];
                            k = k + 1;
                        };
                    }
                    if (j == (707 - 706))
                        cout << c[i][j];
                    else
                        cout << " " << c[i][j];
                    j = j + 1;
                };
            }
            i = i + 1;
            cout << endl;
        };
    }
    return (384 - 384);
}

