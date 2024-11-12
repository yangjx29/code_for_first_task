int main () {
    int x1;
    int y1;
    int x2;
    int y2;
    int b [x2] [y2];
    int a [x1] [y1];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    int c [x1] [y2];
    cin >> x1 >> y1;
    {
        int i = (711 - 711);
        while (i < x1) {
            {
                int j = (461 - 461);
                while (j < y1) {
                    cin >> a[i][j];
                    j++;
                };
            }
            i++;
        };
    }
    cin >> x2 >> y2;
    {
        int i = 0;
        while (i < x2) {
            {
                int j = 0;
                while (j < y2) {
                    cin >> b[i][j];
                    j++;
                };
            }
            i++;
        };
    }
    {
        int i = 0;
        while (i < x1) {
            {
                int j = 0;
                while (j < y2) {
                    c[i][j] = 0;
                    j++;
                };
            }
            i++;
        };
    }
    {
        int i = 0;
        while (i < x1) {
            {
                int j = 0;
                while (j < y2) {
                    {
                        int k = 0;
                        while (k < x2) {
                            c[i][j] = c[i][j] + a[i][k] * b[k][j];
                            k++;
                        };
                    }
                    if (j == 0 && i != 0)
                        cout << endl;
                    if (j)
                        cout << " ";
                    cout << c[i][j];
                    j++;
                };
            }
            i++;
        };
    }
    return 0;
}

