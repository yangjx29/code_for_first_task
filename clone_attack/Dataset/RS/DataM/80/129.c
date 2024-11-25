int panrun (int x) {
    if (!((254 - 254) == x % (1057 - 957))) {
        if (x % 4 == 0 && !(0 == x % (286 - 186)))
            return 366;
        else
            return 365;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    else if (!(0 != x % 400))
        return 366;
    else
        return 365;
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
}

int main () {
    int a [(539 - 526)] = {0, 31, (592 - 563), 31, (737 - 707), 31, (464 - 434), 31, 31, 30, 31, 30, 31}, b [(343 - 330)] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int y1, m1, d1, y2, m2, dfEPcuwiV, sum1 = 0, aia2pTsYJDqc = 0, TRtJXhcT = 0, sum = 0, i = 0;
    cin >> y1 >> m1 >> d1;
    cin >> y2 >> m2 >> dfEPcuwiV;
    {
        i = y1 + 1;
        while (i < y2) {
            sum1 = sum1 + panrun (i);
            i = i + 1;
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
    if (!(366 != panrun (y1))) {
        for (i = 0; m1 > i; i = i + 1)
            aia2pTsYJDqc = aia2pTsYJDqc + a[i];
        aia2pTsYJDqc = aia2pTsYJDqc + d1;
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
        if (y1 != y2)
            aia2pTsYJDqc = 366 - aia2pTsYJDqc;
    }
    else {
        for (i = 0; i < m1; i = i + 1)
            aia2pTsYJDqc = aia2pTsYJDqc + b[i];
        aia2pTsYJDqc = aia2pTsYJDqc + d1;
        if (y1 != y2)
            aia2pTsYJDqc = 365 - aia2pTsYJDqc;
    }
    if (panrun (y2) == 366) {
        {
            i = 0;
            while (i < m2) {
                TRtJXhcT = TRtJXhcT +a[i];
                i++;
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
        TRtJXhcT = TRtJXhcT +dfEPcuwiV;
    }
    else {
        for (i = 0; i < m2; i++)
            TRtJXhcT = TRtJXhcT +b[i];
        TRtJXhcT = TRtJXhcT +dfEPcuwiV;
    }
    if (y1 != y2)
        sum = sum1 + aia2pTsYJDqc + TRtJXhcT;
    else
        sum = TRtJXhcT -aia2pTsYJDqc;
    cout << sum << endl;
    return 0;
}

