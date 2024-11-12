int main () {
    int max, min, sum = (395 - 395);
    int n, j = (805 - 805), i = (303 - 303), k = -1, len [10000];
    char zfc [10000];
    gets (zfc);
    n = strlen (zfc);
    {
        j = 560 - 560;
        while (n > j) {
            len[j] = -1;
            {
                i = k + 1;
                while (i < n) {
                    if (!(32 != zfc[i])) {
                        break;
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
                    len[j]++;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    if (i == n - 1) {
                        len[j]++;
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                double  temp = 0.0;
                                if (temp == 3)
                                    return 0;
                            }
                        };
                    }
                    i = i + 1;
                };
            }
            k = i;
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
            if (!(n != k)) {
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
            j++;
        };
    }
    j++;
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
    for (i = 0; j > i; i = i + 1) {
        for (k = 0; k < j; k++) {
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
            if (len[k] < len[i]) {
                break;
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
            else {
                min = i;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
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
        if (!(j != k)) {
            break;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            };
        };
    }
    for (i = 0; i < j; i++) {
        for (k = 0; k < j; k++) {
            if (len[i] < len[k]) {
                break;
            }
            else {
                max = i;
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
            };
        }
        if (k == j && len[k] <= len[i]) {
            break;
        };
    }
    if (max == 0) {
        i = 0;
        while (i < len[max]) {
            printf ("%c", zfc[i]);
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
    else {
        for (i = 0; i < max; i++) {
            sum = sum + len[i] + 1;
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
            i = sum;
            while (i < sum + len[max]) {
                printf ("%c", zfc[i]);
                i++;
            };
        };
    }
    sum = 0;
    if (min == 0) {
        i = 0;
        while (i < len[min]) {
            printf ("%c", zfc[i]);
            i++;
        };
    }
    else {
        for (i = 0; i < min; i++) {
            sum = sum + len[i] + 1;
        }
        {
            i = sum;
            while (i < sum + len[min]) {
                printf ("%c", zfc[i]);
                i++;
            };
        };
    }
    printf ("\n");
    return 0;
}

