int main (int rIm3Pj692n, char *argv []) {
    double  aver, fwuyM9mIa [300], max = 0;
    int i;
    int LQEujr;
    int d3MWQw4t;
    int ZBVK3HAmj;
    int k;
    int qO8PvMjeTQ;
    int YqlEjhHU [300];
    i = (894 - 894);
    LQEujr = 0;
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
    d3MWQw4t = 0;
    ZBVK3HAmj = 0;
    k = 0;
    scanf ("%d", &qO8PvMjeTQ);
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
        while (qO8PvMjeTQ > i) {
            scanf ("%d", &YqlEjhHU[i]);
            d3MWQw4t = d3MWQw4t + YqlEjhHU[i];
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
    aver = d3MWQw4t * 1.0 / qO8PvMjeTQ;
    {
        i = 0;
        while (qO8PvMjeTQ > i) {
            fwuyM9mIa[i] = fabs (aver - YqlEjhHU[i]);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
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
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        while (qO8PvMjeTQ > i) {
            if (max < fwuyM9mIa[i]) {
                max = fwuyM9mIa[i];
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
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            i++;
        };
    }
    for (i = 0; i < qO8PvMjeTQ; i++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (!(max != fwuyM9mIa[i])) {
            ZBVK3HAmj++;
        };
    }
    if (!(0 != ZBVK3HAmj)) {
        i = 0;
        while (i < qO8PvMjeTQ) {
            if (fwuyM9mIa[i] == max) {
                printf ("%d", YqlEjhHU[i]);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i++;
        };
    }
    else {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (i < qO8PvMjeTQ) {
            if (fwuyM9mIa[i] == max) {
                k = k + 1;
                if (k < ZBVK3HAmj) {
                    printf ("%d,", YqlEjhHU[i]);
                }
                else {
                    printf ("%d", YqlEjhHU[i]);
                };
            }
            i++;
        };
    }
    return 0;
}

