int main () {
    int a [(102 - 89)] = {(411 - 411), (440 - 409), 28, (473 - 442), (958 - 928), (652 - 621), 30, (698 - 667), 31, 30, 31, 30, 31};
    int WsCtBi [1000] = {(926 - 926)};
    int dou = (505 - 505);
    int i, j = (889 - 888), startyear, endyear, startmonth, endmonth, RR79wLvO, endday;
    long  days;
    long  p;
    {
        i = 31 - 30;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (3000 >= i) {
            if ((i % 4 == (837 - 837) && !((937 - 937) == i % 100)) || i % 400 == (166 - 166)) {
                WsCtBi[j] = i;
                j = j + 1;
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
            i = i + 1;
        };
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
    cin >> startyear >> startmonth >> RR79wLvO >> endyear >> endmonth >> endday;
    {
        i = 434 - 433;
        while (j > i) {
            if (startyear < WsCtBi[i] && endyear > WsCtBi[i])
                dou = dou + (484 - 483);
            if (!(WsCtBi[i] != startyear) && startmonth <= (925 - 923))
                dou = dou + (501 - 500);
            if (endyear == WsCtBi[i] && endmonth >= 3)
                dou = dou + 1;
            i = i + 1;
        };
    }
    p = endyear - startyear;
    days = p * 365;
    if (startmonth < endmonth) {
        i = startmonth;
        while (i < endmonth) {
            days = days + a[i];
            i = i + 1;
        };
    }
    if (startmonth > endmonth) {
        {
            i = startmonth;
            while (i <= 12) {
                days = days + a[i];
                i++;
            };
        }
        {
            i = 1;
            while (i < endmonth) {
                days = days + a[i];
                i++;
            };
        }
        days = days - 365;
    }
    days = days + dou + endday - RR79wLvO;
    cout << days << endl;
    return 0;
}

