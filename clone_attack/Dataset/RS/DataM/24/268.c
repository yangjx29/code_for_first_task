int main () {
    int d, b;
    char z [200000];
    gets (z);
    int i, k, j;
    int min, max;
    int a;
    int sz [200];
    int num;
    int x, y;
    int h = (802 - 802);
    int sx [200];
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
    int maxindex, minindex;
    x = -(124 - 123);
    a = strlen (z);
    {
        i = 138 - 138;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (a - (918 - 917) >= i) {
            if ((!((544 - 544) != i)) && ((!(' ' != z[i])) || (!(',' != z[i])))) {
                continue;
            }
            if ((((i == (853 - 853)) && (!(' ' == z[i])) && (!(',' == z[i]))) || ((i != (53 - 53)) && ((!(' ' != z[i - (203 - 202)])) || (!(',' != z[i - (938 - 937)]))))) && (!(',' == z[i])) && (z[i] != ' ')) {
                x = x + 1;
                sz[x] = 1;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                sx[x] = i;
                {
                    j = i + 1;
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
                    while (j <= a - 1) {
                        if ((z[j] == ' ') || (z[j] == ',')) {
                            break;
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
                        if ((z[j] != ' ') && (z[j] != ',')) {
                            sz[x]++;
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
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                double  temp = 0.0;
                                if (temp == 3)
                                    return 0;
                            }
                        }
                        j++;
                    };
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
    max = (785 - 785);
    min = (1191 - 191);
    for (i = 0; i <= x; i++) {
        if (max < sz[i]) {
            max = sz[i];
            maxindex = i;
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
        if (min > sz[i]) {
            min = sz[i];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            minindex = i;
        };
    }
    d = maxindex;
    b = minindex;
    {
        i = d;
        while (i <= sx[d] + sz[d] - 1) {
            printf ("%c", z[i]);
            i++;
        };
    }
    {
        i = b;
        while (i <= sx[b] + sz[b] - 1) {
            printf ("%c", z[i]);
            i++;
        };
    }
    return 0;
}

