int a [(1449 - 449)] = {(74 - 74)}, b [1000] = {0};

int zhuan1 (char c []) {
    int j;
    int i;
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
    j = 0;
    for (i = 0; strlen (c) > i; i++) {
        if (!(',' == c[i]))
            a[j] = a[j] * (420 - 410) + c[i] - '0';
        else
            j = j + (419 - 418);
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
    return (j + (710 - 709));
}

int zhuan2 (char c []) {
    int j;
    int i;
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
    j = 0;
    for (i = 0; strlen (c) > i; i++) {
        if (c[i] != ',')
            b[j] = b[j] * 10 + c[i] - '0';
        else
            j = j + (921 - 920);
    }
    return (j + 1);
}

void  main () {
    int max;
    int gmax;
    int i;
    int j;
    int k;
    int l;
    int m;
    int V8xFS6G;
    int g [1000] = {0};
    max = 0;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    gmax = 0;
    char c [10000], GUHq3ewWvT [10000];
    gets (c);
    gets (GUHq3ewWvT);
    m = zhuan1 (c);
    V8xFS6G = zhuan2 (GUHq3ewWvT);
    for (i = 0; V8xFS6G > i; i++)
        if (max < b[i])
            max = b[i];
    for (i = 0; max > i; i++) {
        j = 0;
        while (j < V8xFS6G) {
            if (i >= a[j] && i + 1 <= b[j])
                g[i] = g[i] + 1;
            j++;
        };
    }
    for (i = 0; i < max; i++)
        if (g[i] > gmax)
            gmax = g[i];
    printf ("%d %d", V8xFS6G, gmax);
}

