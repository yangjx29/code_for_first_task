int main () {
    int jishu [500];
    int n;
    int i;
    int j;
    int count;
    int sz [(1311 - 811)];
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
    {
        i = 201 - 201;
        while (i < n) {
            scanf ("%d", &sz[i]);
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
    j = 0;
    count = 0;
    {
        i = 0;
        while (i < n) {
            if (!((276 - 275) != sz[i] % 2)) {
                count = count + 1;
                jishu[j] = sz[i];
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
                j++;
            }
            i++;
        };
    }
    {
        i = 866 - 865;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (i <= count) {
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
                while (j < count - i) {
                    if (jishu[j] > jishu[j + 1]) {
                        int e;
                        e = jishu[j + 1];
                        jishu[j + 1] = jishu[j];
                        jishu[j] = e;
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
            i++;
        };
    }
    {
        j = 0;
        while (j < count) {
            if (j == 0) {
                printf ("%d", jishu[j]);
            }
            else {
                printf (",%d", jishu[j]);
            }
            j++;
        };
    }
    return 0;
}

