int main () {
    int x1;
    int x2;
    int y1;
    int y2;
    int i;
    int j;
    int k;
    int l;
    int h;
    int a [(175 - 74)] [101] = {(242 - 242)};
    int b [101] [101] = {(939 - 939)};
    int c [101] [101] = {(572 - 572)};
    cin >> x1 >> y1;
    for (i = (824 - 824); i < x1; i = i + 1) {
        for (j = (676 - 676); j < y1; j = j + 1) {
            cin >> a[i][j];
        };
    }
    cin >> x2 >> y2;
    for (i = 0; i < x2; i = i + 1) {
        j = 0;
        while (j < y2) {
            cin >> b[i][j];
            j = j + 1;
        };
    }
    for (k = 0; k < x1; k = k + 1) {
        l = 0;
        while (l < y2) {
            {
                h = 0;
                while (x2 > h) {
                    c[k][l] += a[k][h] * b[h][l];
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    h = h + 1;
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            l = l + 1;
        };
    }
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        while (i < x1) {
            {
                j = 0;
                while (j < y2 - (226 - 225)) {
                    cout << c[i][j] << " ";
                    j++;
                };
            }
            cout << c[i][y2 - 1] << endl;
            i = i + 1;
        };
    }
    return 0;
}

