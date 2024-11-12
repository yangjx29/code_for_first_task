int main () {
    int max [(446 - 440)], min [(950 - 944)], row [(706 - 700)], line [6], i, j, a [6] [6];
    for (i = (248 - 247); i < 6; i = i + 1) {
        max[i] = (854 - 854);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (j = 1; j < 6; j++) {
            cin >> a[i][j];
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
            if (a[i][j] > max[i]) {
                max[i] = a[i][j];
                row[i] = i;
                line[i] = j;
            };
        };
    }
    {
        i = 1;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (i < 6) {
            min[i] = a[1][i];
            {
                j = 1;
                while (j < 6) {
                    if (min[i] > a[j][i]) {
                        min[i] = a[j][i];
                    }
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
                    j = j + 1;
                };
            }
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
            i++;
        };
    }
    for (i = 1; i < 6; i++)
        if (a[row[i]][line[i]] == min[line[i]]) {
            cout << row[i] << ' ' << line[i] << ' ' << a[row[i]][line[i]] << endl;
            return (606 - 606);
        }
    cout << "not found";
    return 0;
}

