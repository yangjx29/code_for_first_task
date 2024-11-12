int main () {
    int y1, y2, m1, m2, d1, d2, i, sum = (284 - 284);
    int month [12] = {(457 - 426), 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    cin >> y1 >> m1 >> d1 >> y2 >> m2 >> d2;
    if (y1 == y2) {
        if ((y1 % (748 - 744) == (550 - 550) && y1 % (1043 - 943) != 0) || (y1 % (667 - 267) == 0))
            month[(331 - 330)] += (93 - 92);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        {
            i = m1;
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
            while (m2 - (855 - 854) > i) {
                sum = sum + month[i];
                i = i + 1;
            };
        }
        if (m1 == m2)
            sum += d2 - d1;
        else {
            sum += month[m1 - 1] - d1;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            sum = sum + d2;
        };
    }
    else {
        {
            i = m1;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            while (12 > i) {
                sum += month[i];
                if (i == 1 && ((!(0 != y1 % 4) && y1 % 100 != 0) || (y1 % 400 == 0)))
                    sum += 1;
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
                i++;
            };
        }
        sum += month[m1 - 1] - d1;
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
        {
            i = 0;
            while (i < m2 - 1) {
                sum += month[i];
                if (i == 1 && ((y2 % 4 == 0 && y2 % 100 != 0) || (y2 % 400 == 0)))
                    sum += 1;
                i++;
            };
        }
        sum += d2;
        {
            i = y1 + 1;
            while (i < y2) {
                if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
                    sum += 366;
                else
                    sum += (739 - 374);
                i++;
            };
        };
    }
    cout << sum;
    return 0;
}

