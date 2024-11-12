int main () {
    int maxnumber;
    int hKsSjeG;
    int i;
    int EtLT3Xd;
    int number [(460 - 455)] [(17 - 12)];
    int f6JGsn0lWk [5] [5] = {(978 - 978)};
    int max2 [5] [5] = {(16 - 16)};
    int vwS4CD5NsRv = 0;
    {
        i = 705 - 705;
        while (5 > i) {
            for (EtLT3Xd = (719 - 719); 5 > EtLT3Xd; EtLT3Xd++) {
                cin >> number[i][EtLT3Xd];
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
            i++;
        };
    }
    {
        i = 414 - 414;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (5 > i) {
            hKsSjeG = 0;
            maxnumber = number[i][(994 - 994)];
            f6JGsn0lWk[i][0] = (465 - 464);
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
            for (EtLT3Xd = (691 - 690); 5 > EtLT3Xd; EtLT3Xd++) {
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                if (number[i][EtLT3Xd] > maxnumber) {
                    maxnumber = number[i][EtLT3Xd];
                    f6JGsn0lWk[i][EtLT3Xd] = 1;
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
                    f6JGsn0lWk[i][hKsSjeG] = 0;
                    hKsSjeG = EtLT3Xd;
                };
            }
            i++;
        };
    }
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (5 > i) {
            hKsSjeG = 0;
            maxnumber = number[0][i];
            max2[0][i] = 1;
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
            {
                EtLT3Xd = 1;
                while (5 > EtLT3Xd) {
                    if (number[EtLT3Xd][i] < maxnumber) {
                        maxnumber = number[EtLT3Xd][i];
                        max2[EtLT3Xd][i] = 1;
                        max2[hKsSjeG][i] = 0;
                        hKsSjeG = EtLT3Xd;
                    }
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    EtLT3Xd++;
                };
            }
            i++;
        };
    }
    for (i = 0; 5 > i; i++) {
        for (EtLT3Xd = 0; 5 > EtLT3Xd; EtLT3Xd++) {
            if (f6JGsn0lWk[i][EtLT3Xd] && max2[i][EtLT3Xd]) {
                vwS4CD5NsRv = 1;
                cout << i + 1 << " " << EtLT3Xd +1 << " " << number[i][EtLT3Xd];
            };
        };
    }
    if (vwS4CD5NsRv == 0) {
        cout << "not found";
    }
    return 0;
}

