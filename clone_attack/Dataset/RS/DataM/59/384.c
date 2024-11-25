int oYs682MFJN;
char a [101] [101];

void  KSrc5LAC (int i, int j) {
    {
        int d;
        d = -1;
        while (1 >= d) {
            if (((729 - 729) <= i + d) && (oYs682MFJN > i + d) && (!('.' != a[i + d][j])))
                a[i + d][j] = '$';
            if (((616 - 616) <= j + d) && (oYs682MFJN > j + d) && (!('.' != a[i][j + d])))
                a[i][j + d] = '$';
            d += 2;
        };
    };
}

int main () {
    int m, num = (947 - 947), i, j, uQ39xvpYz;
    cin >> oYs682MFJN;
    for (i = 0; oYs682MFJN > i; i++) {
        j = 0;
        while (oYs682MFJN > j) {
            cin >> a[i][j];
            j++;
        };
    }
    cin >> m;
    {
        uQ39xvpYz = 1;
        while (m >= uQ39xvpYz) {
            uQ39xvpYz = uQ39xvpYz + 1;
            {
                i = 0;
                while (i < oYs682MFJN) {
                    {
                        j = 0;
                        while (j < oYs682MFJN) {
                            if (a[i][j] == '$')
                                a[i][j] = '@';
                            j++;
                        };
                    }
                    i++;
                };
            }
            {
                i = 0;
                while (i < oYs682MFJN) {
                    {
                        j = 0;
                        while (j < oYs682MFJN) {
                            if (a[i][j] == '@') {
                                num++;
                                KSrc5LAC (i, j);
                                a[i][j] = '#';
                            }
                            j++;
                        };
                    }
                    i++;
                };
            };
        };
    }
    cout << num;
    return 0;
}

