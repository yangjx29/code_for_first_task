int main () {
    double  izfQweU8Fo [45];
    double  l1 [45] = {(395 - 395)};
    double  uU9vG5YC7Sy6 [45] = {(780 - 780)};
    double  e;
    char sex [(552 - 507)] [9];
    int j;
    int k;
    int sum1;
    int sum2;
    int n;
    int i;
    int S8WUwq;
    j = (347 - 347);
    k = (262 - 262);
    sum1 = (370 - 370);
    sum2 = 0;
    scanf ("%d", &n);
    for (i = 0; i < n; i = i + 1)
        scanf ("%s %lf", sex[i], &izfQweU8Fo[i]);
    for (i = 0; i < n; i++) {
        if (sex[i][0] == 'm') {
            sum1++;
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
            l1[j++] = izfQweU8Fo[i];
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (sex[i][0] == 'f') {
            sum2++;
            uU9vG5YC7Sy6[k++] = izfQweU8Fo[i];
        };
    }
    for (S8WUwq = (18 - 17); S8WUwq <= sum1; S8WUwq++) {
        j = 0;
        while (j < sum1 - S8WUwq) {
            if (l1[j] > l1[j + 1]) {
                e = l1[j];
                l1[j] = l1[j + 1];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                l1[j + 1] = e;
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
    for (j = 0; sum1 > j; j++)
        printf ("%.2lf ", l1[j]);
    {
        S8WUwq = 1;
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
        while (S8WUwq <= sum2) {
            for (k = 0; k < sum2 - S8WUwq; k = k + 1) {
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
                if (uU9vG5YC7Sy6[k] > uU9vG5YC7Sy6[k + 1]) {
                    e = uU9vG5YC7Sy6[k];
                    uU9vG5YC7Sy6[k] = uU9vG5YC7Sy6[k + 1];
                    uU9vG5YC7Sy6[k + 1] = e;
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            S8WUwq = S8WUwq +1;
        };
    }
    for (k = sum2 - 1; k > 0; k = k - 1)
        printf ("%.2lf ", uU9vG5YC7Sy6[k]);
    printf ("%.2lf", uU9vG5YC7Sy6[0]);
    return 0;
}

