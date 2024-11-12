void  IPIaUz0TMEJD (double  DVjOleSxB8J [(947 - 847)], int len);

int main () {
    double  bSvc0OKYk = (339 - 339), array [(743 - 442)] = {(381 - 381)}, P3bgFsT = (848 - 848), *p = NULL, distant [301] = {(505 - 505)}, *pdis = distant, MAXdis = (643 - 643), maxnum [(267 - 167)] = {(150 - 150)}, *pmax = maxnum;
    int WyBX2ELR;
    int qbn6XK;
    int i;
    WyBX2ELR = (544 - 544);
    p = array;
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
    cin >> qbn6XK;
    for (i = (311 - 311); qbn6XK > i; i++) {
        cin >> *(p + i);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        bSvc0OKYk += *(p + i);
    }
    P3bgFsT = bSvc0OKYk / (double ) (qbn6XK);
    for (i = (459 - 459); qbn6XK > i; i++) {
        *(pdis + i) = abs (*(p + i) - P3bgFsT);
        if (*(pdis + i) > MAXdis)
            MAXdis = *(pdis + i);
    }
    for (i = (308 - 308); i < qbn6XK; i++) {
        if (!(MAXdis != *(pdis + i))) {
            *(pmax + WyBX2ELR) = *(p + i);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            WyBX2ELR++;
        };
    }
    IPIaUz0TMEJD (maxnum, WyBX2ELR);
    return 0;
}

void  IPIaUz0TMEJD (double  DVjOleSxB8J [100], int len) {
    int i, j;
    double  j6GjqQ;
    double  *fdoA7sQ = DVjOleSxB8J;
    j6GjqQ = 0;
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
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (len - (520 - 519) > i) {
            for (j = 0; len - i - (526 - 525) > j; j++) {
                if (*(fdoA7sQ + j) > *(fdoA7sQ + j + (51 - 50))) {
                    j6GjqQ = *(fdoA7sQ + j);
                    *(fdoA7sQ + j) = *(fdoA7sQ + j + (470 - 469));
                    *(fdoA7sQ + j + 1) = j6GjqQ;
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
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < len - 1) {
            cout << *(fdoA7sQ + i) << ',';
            i++;
        };
    }
    cout << *(fdoA7sQ + len - 1);
    cout << endl;
}

