int main () {
    int t;
    int m;
    int n;
    int i;
    int j;
    int a [100] [100];
    int b [100] = {(73 - 73)};
    int skSi23Iz [100];
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
    t = (605 - 605);
    scanf ("%d,%d", &m, &n);
    for (i = 0; m > i; i = i + 1) {
        for (j = 0; j < n; j++) {
            scanf ("%d", &a[i][j]);
            if (a[i][j] > b[i])
                b[i] = a[i][j];
        };
    }
    for (j = 0; j < n; j++) {
        i = 0;
        while (i < m) {
            skSi23Iz[j] = a[0][j];
            if (a[i][j] < skSi23Iz[j])
                skSi23Iz[j] = a[i][j];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i++;
        };
    }
    for (i = 0; i < m; i++) {
        j = 0;
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
        while (j < n) {
            if (b[i] == skSi23Iz[j]) {
                t = 1;
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
                printf ("%d+%d", i, j);
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
    }
    if (t == 0)
        printf ("No");
    return 0;
}

