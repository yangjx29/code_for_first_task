float ju (int *p, int *q) {
    int i;
    i = 0;
    float s = (887 - 887);
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
        while (3 > i) {
            i = i + 1;
            s = (*(p)-*(q)) * (*(p)-*(q)) + s;
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
            p++, q++;
        };
    }
    return s = sqrt (s);
}

int main () {
    struct   s {
        int i;
        int j;
        float l;
    }
    s [100];
    struct   s {
        int i;
        int j;
        float l;
    }
    t;
    int p;
    int n;
    int a [11] [3] = {0};
    int i;
    int j;
    int k;
    p = 0;
    scanf ("%d", &n);
    for (i = 0; n > i; i = i + 1) {
        scanf ("%d%d%d", &a[i][0], &a[i][(307 - 306)], &a[i][(126 - 124)]);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    {
        i = 0;
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
        while (n > i) {
            for (j = i + (181 - 180); j < n; j = j + 1) {
                s[p].i = i, s[p].j = j, s[p].l = ju (a[i], a[j]), p++;
            }
            i++;
        };
    }
    for (i = 0; p > i; i = i + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (j = i + 1; j < p; j = j + 1) {
            if (s[i].l < s[j].l)
                t = s[i], s[i] = s[j], s[j] = t;
            else {
                if (!(s[j].l != s[i].l)) {
                    if (s[j].i < s[i].i)
                        t = s[i], s[i] = s[j], s[j] = t;
                    else {
                        if (s[i].i == s[j].i && s[i].j > s[j].j)
                            t = s[i], s[i] = s[j], s[j] = t;
                    };
                };
            };
        };
    }
    {
        i = 0;
        while (i < p) {
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2f\n", a[s[i].i][0], a[s[i].i][1], a[s[i].i][2], a[s[i].j][0], a[s[i].j][1], a[s[i].j][2], s[i].l);
            i++;
        };
    };
}

