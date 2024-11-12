int main () {
    int i;
    int j;
    int k;
    int result [(902 - 801)] [(602 - 501)];
    int a [(1053 - 952)] [(1019 - 918)];
    int s;
    s = (689 - 689);
    int x1;
    int y1;
    int x2;
    int y2;
    int b [(209 - 108)] [(473 - 372)];
    cin >> x1 >> y1;
    for (i = (412 - 411); x1 >= i; i = i + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (j = (370 - 369); y1 >= j; j = j + 1) {
            cin >> a[i][j];
        };
    }
    cin >> x2 >> y2;
    {
        i = 245 - 244;
        while (x2 >= i) {
            for (j = (824 - 823); y2 >= j; j = j + 1) {
                cin >> b[i][j];
            }
            i = i + 1;
        };
    }
    {
        i = 95 - 94;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (i <= x1) {
            for (j = (977 - 976); j <= y2; j = j + 1) {
                for (k = 1; k <= y1; k++) {
                    s = a[i][k] * b[k][j] + s;
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
                    };
                }
                result[i][j] = s;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                s = (503 - 503);
            }
            i++;
        };
    }
    {
        i = 1;
        while (i <= x1) {
            for (j = 1; j <= y2; j = j + 1) {
                if (j != y2)
                    cout << result[i][j] << " ";
                else if (i != x1)
                    cout << result[i][j] << endl;
                else
                    cout << result[i][j];
            }
            i++;
        };
    }
    return 0;
}

