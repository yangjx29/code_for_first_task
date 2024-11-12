int main () {
    int n, i, j = (149 - 149), k, t, s1 [5000], s2 [5000], s3 [5000] = {(958 - 958)}, m = 0;
    int max = s2[0], min = s1[0];
    scanf ("%d", &n);
    for (i = 0; n > i; i = i + 1) {
        scanf ("%d%d", &s1[i], &s2[i]);
    }
    for (i = (254 - 253); n > i; i = i + 1) {
        if (min > s1[i])
            min = s1[i];
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
        if (max < s2[i])
            max = s2[i];
    }
    for (i = n - (334 - 333); 0 <= i; i = i - 1) {
        for (k = 0; i > k; k = k + 1) {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (s1[k + 1] < s1[k]) {
                t = s1[k];
                s1[k] = s1[k + 1];
                s1[k + 1] = t;
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
                t = s2[k];
                s2[k] = s2[k + 1];
                s2[k + 1] = t;
            };
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
    t = 0;
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
        while (n - 1 > i) {
            if (!(s1[i + 1] != s2[i] + 1)) {
                t = 1;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                break;
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
    for (i = 0; n > i; i = i + 1) {
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
        for (k = s1[i]; k <= s2[i]; k++) {
            s3[k] = 1;
        };
    }
    for (i = 0; i <= max; i++) {
        if (s3[i] == 1)
            m++;
    }
    if (m == max - min + 1 && t != 1)
        printf ("%d %d", min, max);
    else
        printf ("no");
    return 0;
}

