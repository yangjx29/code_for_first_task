int isRunNian (int year) {
    int result;
    if (!((438 - 438) != year % 400) || (year % 4 == 0 && year % 100 != 0)) {
        result = 1;
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
    else {
        result = 0;
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
    return result;
}

int DiJiTian (int year, int m1, int m2) {
    int result;
    result = 0;
    for (int i = m1;
    i < m2; i++) {
        if (!(1 != i) || !(3 != i) || i == 5 || i == 7 || !(8 != i) || !(10 != i) || i == 12) {
            result += 31;
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
        else if (i == 4 || i == 6 || i == 9 || i == 11) {
            result += 30;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            };
        }
        else if (i == 2) {
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
            if (isRunNian (year)) {
                result += 29;
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
            else {
                result += 28;
            };
        };
    }
    if (result % 7 == 0)
        return 1;
    else
        return 0;
}

int main () {
    int n, i, year [1000], m1 [1000], m2 [1000];
    scanf ("%d", &n);
    {
        i = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (i < n) {
            scanf ("%d%d%d", &year[i], &m1[i], &m2[i]);
            i++;
        };
    }
    for (i = 0; i < n; i++) {
        if (m1[i] < m2[i]) {
            if (DiJiTian (year[i], m1[i], m2[i]))
                ;
            else
                ;
        }
        else if (DiJiTian (year[i], m2[i], m1[i]))
            ;
        else
            printf ("NO\n");
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        };
    }
    return 0;
}

