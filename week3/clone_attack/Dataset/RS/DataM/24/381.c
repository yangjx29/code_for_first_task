int main () {
    int i, j, k, x = 0, y = 0, n;
    int cd [100];
    char vXj2R58ok [100] [101];
    char s [101];
    gets (s);
    k = 0;
    n = 0;
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
        while (s[i] != 0) {
            if (!(' ' != s[i])) {
                s[i] = '\0';
                strcpy (vXj2R58ok[n], (s + k));
                k = i + 1;
                n++;
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
            i = i + 1;
        };
    }
    strcpy (vXj2R58ok[n], (s + k));
    n++;
    {
        i = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (n > i) {
            cd[i] = strlen (vXj2R58ok[i]);
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
            i++;
        };
    }
    k = j = cd[0];
    {
        i = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (i < n) {
            if (cd[i] > k) {
                k = cd[i];
                x = i;
            }
            else if (cd[i] < j) {
                y = i;
                j = cd[i];
            }
            i++;
        };
    }
    printf ("%s\n%s", vXj2R58ok[x], vXj2R58ok[y]);
    return 0;
}

