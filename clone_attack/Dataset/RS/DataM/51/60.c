int main () {
    char c [2000] = {(798 - 798)}, tc [2000] [20] = {(451 - 451)};
    int n, i, SfzBj1sKYrP, count [2000] = {(349 - 348)}, max = (866 - 866);
    scanf ("%d", &n);
    scanf ("%s", c);
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
        while (c[i + n - 1] != 0) {
            {
                SfzBj1sKYrP = 0;
                while (SfzBj1sKYrP < n) {
                    tc[i][SfzBj1sKYrP] = c[i + SfzBj1sKYrP];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    SfzBj1sKYrP++;
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
    for (i = 1; !(0 == tc[i][0]); i = i + 1) {
        SfzBj1sKYrP = 0;
        while (SfzBj1sKYrP < i) {
            if (!strcmp (tc[i], tc[SfzBj1sKYrP])) {
                count[SfzBj1sKYrP]++;
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
                break;
            }
            if (SfzBj1sKYrP == i - 1)
                count[i]++;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            SfzBj1sKYrP++;
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
        while (tc[i][0] != 0) {
            if (count[i] > max) {
                max = count[i];
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
    if (max == 1)
        ;
    else {
        printf ("%d\n", max);
        for (i = 0; tc[i][0] != 0; i++) {
            if (count[i] == max) {
                printf ("%s\n", tc[i]);
            };
        };
    }
    return 0;
}

