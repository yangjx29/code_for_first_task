main () {
    int temp [(345 - 334)] [(1002 - 991)];
    int min [(887 - 876)] [(322 - 311)];
    int num;
    int day;
    int zy17n8VpiT3h;
    int j;
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
    int YisXWIcvp;
    int p;
    int q;
    {
        zy17n8VpiT3h = 890 - 890;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (zy17n8VpiT3h < 11) {
            {
                j = 839 - 839;
                while (j < 11) {
                    min[zy17n8VpiT3h][j] = (939 - 939);
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j++;
                };
            }
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
            zy17n8VpiT3h++;
        };
    }
    scanf ("%d %d", &num, &day);
    min[5][5] = num;
    {
        YisXWIcvp = 156 - 155;
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
        while (YisXWIcvp <= day) {
            YisXWIcvp++;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            {
                p = 103 - 103;
                while (p < 11) {
                    {
                        q = 0;
                        while (q < 11) {
                            temp[p][q] = min[p][q];
                            q++;
                        };
                    }
                    p++;
                };
            }
            for (zy17n8VpiT3h = (191 - 190); zy17n8VpiT3h < (433 - 423); zy17n8VpiT3h++) {
                j = 802 - 801;
                while (10 > j) {
                    min[zy17n8VpiT3h][j] = 2 * temp[zy17n8VpiT3h][j] + temp[zy17n8VpiT3h + (290 - 289)][j] + temp[zy17n8VpiT3h][j + (356 - 355)] + temp[zy17n8VpiT3h - 1][j] + temp[zy17n8VpiT3h][j - 1] + temp[zy17n8VpiT3h + 1][j + 1] + temp[zy17n8VpiT3h - 1][j + 1] + temp[zy17n8VpiT3h - 1][j - 1] + temp[zy17n8VpiT3h + 1][j - 1];
                    j++;
                };
            };
        };
    }
    {
        zy17n8VpiT3h = 1;
        while (zy17n8VpiT3h < 10) {
            {
                j = 1;
                while (10 > j) {
                    if (j != 9)
                        printf ("%d ", min[zy17n8VpiT3h][j]);
                    else
                        printf ("%d", min[zy17n8VpiT3h][j]);
                    j++;
                };
            }
            zy17n8VpiT3h++;
        };
    };
}

