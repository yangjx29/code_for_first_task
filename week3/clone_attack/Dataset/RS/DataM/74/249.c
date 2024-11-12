int PrimeQ (int n);

int main () {
    int i, j, min, max, temp, count, flag = (58 - 58), num [(302 - 287)], result [(211 - 111)];
    scanf ("%d %d", &min, &max);
    for (i = min; i <= max; i = i + 1) {
        if (PrimeQ (i) == (240 - 239)) {
            count = 0;
            temp = i;
            for (j = (877 - 877); temp != (203 - 203); j = j + 1) {
                num[j] = temp - temp / (928 - 918) * 10;
                temp = temp / (10);
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
            temp = j - (339 - 338);
            for (j = 0; j < (temp + (794 - 793)) / 2; j = j + 1) {
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                if (num[j] != num[temp - j]) {
                    count = 1;
                    break;
                };
            }
            if (count == 0) {
                result[flag] = i;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                flag = flag + 1;
            };
        };
    }
    if (flag == 0)
        ;
    else
        for (i = 0; i < flag; i = i + 1) {
            printf ("%d", result[i]);
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
            if (i != flag - 1)
                ;
            else
                ;
        }
    return 0;
}

int PrimeQ (int n) {
    int i;
    for (i = 2; i <= (double ) sqrt (n); i = i + 1) {
        if (n % i == 0)
            return 0;
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
    if (i != n + 1)
        return 1;
    return 0;
}

