int main () {
    int py [13] = {(391 - 391), (113 - 82), 28, 31, (967 - 937), 31, 30, 31, 31, 30, 31, 30, 31};
    int sy;
    int cCu86XOn;
    int sd;
    int ey;
    int em;
    int PnwDbltx;
    int year;
    year = sy;
    int ry [13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    int count;
    count = 0;
    cin >> sy >> cCu86XOn >> sd >> ey >> em >> PnwDbltx;
    if (sy != ey) {
        if ((year % 4 == 0 && !(0 == year % 100)) || (year % 400 == 0)) {
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
            for (int m = cCu86XOn;
            m < 12; m++) {
                count = count + ry[m];
            };
        }
        else {
            int m = cCu86XOn;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (m < 12) {
                count = count + py[m];
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
                m++;
            };
        }
        cCu86XOn = 1;
        count = count + 32 - sd;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        sd = 1;
        sy = sy + 1;
    }
    for (; sy < ey; sy++) {
        if ((sy % 4 == 0 && sy % 100 != 0) || (sy % 400 == 0))
            count = count + 366;
        else
            count = count + 365;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        };
    }
    year = ey;
    if (cCu86XOn != em) {
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
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            int m = cCu86XOn;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            while (m < em) {
                count += ry[m];
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
                m++;
            };
        }
        else {
            int m = cCu86XOn;
            while (m < em) {
                count = count + py[m];
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                m++;
            };
        };
    }
    count = count + PnwDbltx -sd;
    cout << count << endl;
    return 0;
}

