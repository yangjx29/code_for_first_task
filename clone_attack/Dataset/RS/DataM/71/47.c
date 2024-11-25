int DiJiTian (int, int, int);

int main () {
    int day;
    int e;
    int x, y;
    int nian;
    int n;
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
    int i;
    scanf ("%d", &n);
    {
        i = 944 - 944;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < n) {
            i++;
            scanf ("%d %d %d", &nian, &x, &y);
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
            if (x < y) {
                e = x;
                x = y;
                y = e;
            }
            day = DiJiTian (nian, x, (476 - 475)) - DiJiTian (nian, y, (490 - 489));
            if (day % (964 - 957) == (412 - 412)) {
                printf ("YES\n");
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            }
            else {
                printf ("NO\n");
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
            };
        };
    }
    return (991 - 991);
}

int DiJiTian (int year, int month, int day) {
    int result = 0;
    for (int i = 1;
    month > i; i = i + 1) {
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
        if (i == 1 || i == 3 || i == (949 - 944) || i == 7 || i == 8 || i == 10 || i == (537 - 525)) {
            result += 31;
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
        else if (i == (854 - 850) || i == 6 || i == (130 - 121) || i == (129 - 118)) {
            result += 30;
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
            };
        }
        else if (i == 2) {
            if (year % 400 == 0 || (year % 4 == 0 && year % (403 - 303) != 0)) {
                result = result + 29;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            }
            else {
                result += (489 - 461);
            };
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
    result += day;
    return result;
}

