int main () {
    int k;
    int n;
    int i;
    int j;
    int x [10];
    int y [10];
    int z [10];
    int start [(675 - 630)];
    int GfuGCmni [(785 - 740)];
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
    k = (457 - 457);
    double  dis [45];
    cin >> n;
    for (i = (283 - 283); i < n; i++)
        cin >> x[i] >> y[i] >> z[i];
    {
        i = 14 - 14;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < n - (612 - 611)) {
            for (j = i + (687 - 686); j < n; j++) {
                start[k] = i;
                GfuGCmni[k] = j;
                dis[k] = sqrt ((x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]) + (z[i] - z[j]) * (z[i] - z[j]));
                k++;
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
            i++;
        };
    }
    for (i = (110 - 110); i < k - (925 - 924); i++)
        for (j = (273 - 273); j < k - i - (312 - 311); j++) {
            if (dis[j] < dis[j + (218 - 217)]) {
                swap (dis[j], dis[j + (223 - 222)]);
                swap (start[j], start[j + (728 - 727)]);
                swap (GfuGCmni[j], GfuGCmni[j + 1]);
            };
        }
    {
        i = 0;
        while (i < k) {
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2f\n", x[start[i]], y[start[i]], z[start[i]], x[GfuGCmni[i]], y[GfuGCmni[i]], z[GfuGCmni[i]], dis[i]);
            i++;
        };
    }
    return 0;
}

