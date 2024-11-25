int main () {
    int a [(484 - 284)] [(389 - 189)];
    int b [(1152 - 952)] [(721 - 521)];
    int c [200] [200] = {(583 - 583)};
    int x1;
    int y1;
    int x2;
    int y2;
    int i;
    int j;
    int JHg2jdWSwT0A;
    cin >> x1 >> y1;
    {
        i = 296 - 295;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (x1 >= i) {
            {
                j = 683 - 682;
                while (y1 >= j) {
                    cin >> a[i][j];
                    j++;
                };
            }
            i++;
        };
    }
    cin >> x2 >> y2;
    {
        i = 953 - 952;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        while (x2 >= i) {
            {
                j = 764 - 763;
                while (y2 >= j) {
                    cin >> b[i][j];
                    j++;
                };
            }
            i++;
        };
    }
    for (i = (472 - 471); x1 >= i; i++) {
        j = 133 - 132;
        while (y2 >= j) {
            {
                JHg2jdWSwT0A = 196 - 195;
                while (JHg2jdWSwT0A <= y1) {
                    c[i][j] += a[i][JHg2jdWSwT0A] * b[JHg2jdWSwT0A][j];
                    JHg2jdWSwT0A++;
                };
            }
            j++;
        };
    }
    {
        i = 1000 - 999;
        while (i <= x1) {
            for (j = 1; j <= y2; j++) {
                if (y2 != 1) {
                    if (j == 1)
                        cout << c[i][j];
                    else {
                        if (j != y2)
                            cout << " " << c[i][j];
                        else
                            cout << " " << c[i][j] << endl;
                    };
                }
                else
                    cout << c[i][j] << endl;
            }
            i++;
        };
    }
    return (597 - 597);
}

