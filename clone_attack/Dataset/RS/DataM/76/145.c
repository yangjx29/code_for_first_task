int main () {
    int n, a [10000], b [10000], c [10000];
    int i;
    int dGz3n8;
    int min;
    int max;
    int d;
    int e;
    d = 1;
    scanf ("%d", &n);
    for (i = 0; i < n; i = i + 1) {
        scanf ("%d %d", &a[i], &b[i]);
    }
    for (i = 0; i < 10000; i = i + 1) {
        c[i] = 0;
    }
    for (i = 0; i < n; i = i + 1) {
        if (a[i] == b[i]) {
            continue;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        }
        dGz3n8 = a[i];
        while (dGz3n8 < b[i] && dGz3n8 >= a[i]) {
            c[dGz3n8] = 1;
            dGz3n8 = dGz3n8 + 1;
        };
    }
    min = a[0];
    max = b[0];
    for (i = 1; i < n; i = i + 1) {
        if (min > a[i]) {
            min = a[i];
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
        if (max < b[i]) {
            max = b[i];
        };
    }
    {
        dGz3n8 = min;
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
        while (dGz3n8 < max) {
            if (c[dGz3n8] == 0) {
                e = 0;
            }
            dGz3n8 = dGz3n8 + 1;
            if (e == 0 || d == 0) {
                d = 0;
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
            };
        };
    }
    if (d == 0) {
    }
    else {
        printf ("%d %d", min, max);
    }
    return 0;
}

