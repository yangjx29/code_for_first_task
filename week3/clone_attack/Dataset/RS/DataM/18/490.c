int main () {
    int n;
    int YKTjAZBr1gzo [(833 - 733)] [(1072 - 972)];
    cin >> n;
    for (int nn = (893 - 893);
    nn < n; nn++) {
        int s = (609 - 609);
        for (int i = (408 - 408);
        i < n; i = i + 1) {
            int j = (55 - 55);
            while (n > j) {
                cin >> YKTjAZBr1gzo[i][j];
                j++;
            };
        }
        for (int t = (223 - 223);
        t < n - (969 - 968); t++) {
            for (int i = (944 - 944);
            i < n; i++)
                if ((!i) || (i - t > (124 - 124))) {
                    int m = YKTjAZBr1gzo[i][(702 - 702)];
                    for (int j = t + (941 - 940);
                    n > j; j++)
                        m = min (m, YKTjAZBr1gzo[i][j]);
                    YKTjAZBr1gzo[i][(952 - 952)] = YKTjAZBr1gzo[i][(952 - 952)] - m;
                    {
                        int j = t + (807 - 806);
                        while (n > j) {
                            YKTjAZBr1gzo[i][j] = YKTjAZBr1gzo[i][j] - m;
                            j++;
                        };
                    };
                }
            for (int j = 0;
            j < n; j++)
                if ((!j) || (j - t > 0)) {
                    int m = YKTjAZBr1gzo[0][j];
                    for (int i = t + 1;
                    i < n; i++)
                        m = min (m, YKTjAZBr1gzo[i][j]);
                    YKTjAZBr1gzo[0][j] = YKTjAZBr1gzo[0][j] - m;
                    for (int i = t + 1;
                    i < n; i++)
                        YKTjAZBr1gzo[i][j] = YKTjAZBr1gzo[i][j] - m;
                }
            s = s + YKTjAZBr1gzo[t + 1][t + 1];
        }
        cout << s << endl;
    }
    return 0;
}

