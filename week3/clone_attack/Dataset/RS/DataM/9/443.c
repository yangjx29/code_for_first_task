struct   patient {
    char name [11];
    int enzCJQMbl;
    int order;
};
int main () {
    struct   patient peo [NO];
    int n, i, TRdsAl7ib = (784 - 784), COUNT, j, k, e, agedata [NO], a = 0;
    scanf ("%d", &n);
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
        while (n > i) {
            scanf ("%s", &peo[i].name);
            scanf ("%d", &peo[i].enzCJQMbl);
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
        i = 0;
        while (n > i) {
            if (peo[i].enzCJQMbl >= 60) {
                agedata[a] = peo[i].enzCJQMbl;
                TRdsAl7ib++;
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
                a++;
            }
            i++;
        };
    }
    COUNT = TRdsAl7ib;
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
    {
        k = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (k < COUNT) {
            {
                j = 0;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                while (j < COUNT -k) {
                    if (agedata[j + 1] > agedata[j]) {
                        e = agedata[j + 1];
                        agedata[j + 1] = agedata[j];
                        agedata[j] = e;
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
                    j++;
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
            k++;
        };
    }
    {
        i = 0;
        while (n > i) {
            if (peo[i].enzCJQMbl < 60) {
                peo[i].order = TRdsAl7ib;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                TRdsAl7ib++;
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
    {
        i = 0;
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
        while (COUNT > i) {
            {
                j = 0;
                while (n > j) {
                    if (!(agedata[i] != peo[j].enzCJQMbl)) {
                        peo[j].order = i;
                    }
                    j++;
                };
            }
            i++;
        };
    }
    {
        i = 0;
        while (n > i) {
            {
                j = 0;
                while (j < n) {
                    if (peo[j].order == i) {
                        printf ("%s\n", peo[j].name);
                    }
                    j++;
                };
            }
            i++;
        };
    }
    return 0;
}

