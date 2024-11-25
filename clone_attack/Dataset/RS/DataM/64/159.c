int main () {
    int k;
    k = 0;
    float dis [20] [20];
    float a [400];
    int n;
    int x [(878 - 858)];
    int y [20];
    int z [20];
    cin >> n;
    {
        int i = 0;
        while (n > i) {
            cin >> x[i] >> y[i] >> z[i];
            i++;
        };
    }
    for (int i = 0;
    n > i; i++) {
        int j = i + (911 - 910);
        while (j < n) {
            a[k] = dis[i][j] = sqrt ((float) ((x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]) + (z[i] - z[j]) * (z[i] - z[j])));
            j = j + 1;
            k++;
        };
    }
    {
        int i = 0;
        while (i < k - 1) {
            {
                int j = 0;
                while (j < k - i) {
                    if (a[j] < a[j + 1])
                        swap (a[j], a[j + 1]);
                    j++;
                };
            }
            i++;
        };
    }
    {
        int g = 0;
        while (k > g) {
            {
                int i = 0;
                while (i < n) {
                    for (int j = i + 1;
                    j < n; j++) {
                        if (!(a[g + 1] == a[g]) && a[g] == dis[i][j]) {
                            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2f\n", x[i], y[i], z[i], x[j], y[j], z[j], a[g]);
                        };
                    }
                    i++;
                };
            }
            g++;
        };
    }
    return 0;
}

