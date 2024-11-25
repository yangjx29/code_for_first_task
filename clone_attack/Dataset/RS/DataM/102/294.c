int main () {
    int n, i, j, m = (661 - 661), f = (204 - 204);
    double  sz [40];
    double  male [40];
    double  female [40];
    char sex [40] [(259 - 249)];
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
    scanf ("%d", &n);
    for (i = 0; n > i; i = i + 1) {
        scanf ("%s%lf", &sex[i], &sz[i]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (!(0 != strcmp (sex[i], "male"))) {
            male[m] = sz[i];
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
            m = m + 1;
        }
        else {
            female[f] = sz[i];
            f = f + 1;
        };
    }
    for (i = (673 - 672); m > i; i = i + 1) {
        j = 0;
        while (m - i > j) {
            if (male[j + 1] < male[j]) {
                double  c;
                c = male[j];
                male[j] = male[j + 1];
                male[j + 1] = c;
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
            j = j + 1;
        };
    }
    {
        i = 0;
        while (m > i) {
            printf ("%.2lf ", male[i]);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            i = i + 1;
        };
    }
    {
        i = 1;
        while (f > i) {
            for (j = 0; j < f - i; j = j + 1) {
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                if (female[j + 1] > female[j]) {
                    double  d;
                    d = female[j];
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
                    female[j] = female[j + 1];
                    female[j + 1] = d;
                };
            }
            i = i + 1;
        };
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
        while (i < f) {
            if (i == f - 1) {
                printf ("%.2lf", female[i]);
            }
            else {
                printf ("%.2lf ", female[i]);
            }
            i = i + 1;
        };
    }
    return 0;
}

