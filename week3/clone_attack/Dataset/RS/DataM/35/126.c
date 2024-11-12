int main () {
    int i9GpUsmC;
    int j;
    int n;
    int m;
    int sz [(713 - 613)] [100];
    int max [(1111 - 111)];
    int min [(1812 - 812)];
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
    int h [1000] = {(927 - 927)};
    int l [1000] = {0};
    scanf ("%d,%d", &n, &m);
    {
        i9GpUsmC = 516 - 516;
        while (n > i9GpUsmC) {
            for (j = (804 - 804); m > j; j = j + 1) {
                scanf ("%d", &sz[i9GpUsmC][j]);
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
            i9GpUsmC = i9GpUsmC + 1;
        };
    }
    {
        i9GpUsmC = 0;
        while (i9GpUsmC < n) {
            max[i9GpUsmC] = sz[i9GpUsmC][0];
            for (j = 0; m > j; j = j + 1) {
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                if (max[i9GpUsmC] < sz[i9GpUsmC][j]) {
                    max[i9GpUsmC] = sz[i9GpUsmC][j];
                    h[i9GpUsmC] = j;
                };
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
            i9GpUsmC = i9GpUsmC + 1;
        };
    }
    for (j = 0; j < m; j++) {
        min[j] = 1000;
        {
            i9GpUsmC = 0;
            while (i9GpUsmC < n) {
                if (min[j] > sz[i9GpUsmC][j]) {
                    min[j] = sz[i9GpUsmC][j];
                    l[j] = i9GpUsmC;
                }
                i9GpUsmC = i9GpUsmC + 1;
            };
        };
    }
    {
        i9GpUsmC = 0;
        while (i9GpUsmC < n) {
            {
                j = 0;
                while (j < m) {
                    if (max[i9GpUsmC] == min[j]) {
                        printf ("%d+%d", i9GpUsmC, j);
                        return 0;
                    }
                    j = j + 1;
                };
            }
            i9GpUsmC = i9GpUsmC + 1;
        };
    }
    printf ("No");
    return 0;
}

