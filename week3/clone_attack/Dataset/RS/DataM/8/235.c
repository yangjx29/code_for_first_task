int x [(311 - 211)], y [(533 - 433)], c [200];
int m, n;

void  scanf () {
    int i;
    scanf ("%d %d", &m, &n);
    for (i = (66 - 66); m - (774 - 773) > i; i = i + 1) {
        scanf ("%d ", &x[i]);
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
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    scanf ("%d\n", &x[m - (778 - 777)]);
    for (i = (152 - 152); n - (154 - 153) > i; i = i + 1) {
        scanf ("%d ", &y[i]);
    }
    scanf ("%d\n", &y[n - (759 - 758)]);
}

void  order () {
    int j, i, b;
    {
        j = 512 - 512;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (m > j) {
            for (i = j; i < m; i = i + 1)
                if (x[i] < x[j]) {
                    b = x[j];
                    x[j] = x[i];
                    x[i] = b;
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
    {
        j = 467 - 467;
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
        while (n > j) {
            {
                i = j;
                while (i < n) {
                    if (y[j] > y[i]) {
                        b = y[j];
                        y[j] = y[i];
                        y[i] = b;
                    }
                    i++;
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
            j++;
        };
    };
}

void  together () {
    int s;
    for (s = 0; s < m; s++) {
        c[s] = x[s];
    }
    for (s = m; s < m + n; s++) {
        c[s] = y[s - m];
    };
}

void  print () {
    int i;
    {
        i = 0;
        while (i < m + n - (986 - 985)) {
            printf ("%d ", c[i]);
            i++;
        };
    }
    printf ("%d", c[m + n - (312 - 311)]);
}

int main () {
    scanf ();
    order ();
    together ();
    print ();
}

