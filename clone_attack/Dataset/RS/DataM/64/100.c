struct   point {
    int x;
    int y;
    int z;
};
struct   point kdKkGl [(1028 - 927)];

double  FW9j5e6N (struct   point kdKkGl [], int i, int j) {
    int x = kdKkGl[i].x - kdKkGl[j].x;
    int y = kdKkGl[i].y - kdKkGl[j].y;
    int z;
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
    z = kdKkGl[i].z - kdKkGl[j].z;
    double  dis = (double ) (x * x + y * y + z * z);
    return sqrt (dis);
}

int main () {
    int n;
    int i;
    int j;
    int t = 0, k = 0;
    double  a [105];
    int dHmS3E = k;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    cin >> n;
    {
        i = 0;
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
        while (n > i) {
            cin >> kdKkGl[i].x >> kdKkGl[i].y >> kdKkGl[i].z;
            ++i;
        };
    }
    for (i = 0; n > i; ++i) {
        j = 376 - 375;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (n > j) {
            int t = 0;
            while (k + 1 > t && (0.00001 < a[t] - FW9j5e6N (kdKkGl, i, j) || 0.00001 < FW9j5e6N (kdKkGl, i, j) - a[t]))
                t++;
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
            if (!(k + 1 != t)) {
                a[k] = FW9j5e6N (kdKkGl, i, j);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                k = k + 1;
            }
            j = j + 1;
        };
    }
    {
        i = 0;
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
        while (dHmS3E > i) {
            {
                j = 0;
                while (dHmS3E - i > j) {
                    if (a[j + 1] > a[j]) {
                        double  temp = a[j];
                        a[j] = a[j + 1];
                        a[j + 1] = temp;
                    }
                    j = j + 1;
                };
            }
            i++;
        };
    }
    k = 0;
    while (dHmS3E > k) {
        for (i = 0; i < n; ++i) {
            for (j = i + 1; j < n; j = j + 1) {
                if (abs (a[k] - FW9j5e6N (kdKkGl, i, j)) < 0.0000001)
                    printf ("(%d,%d,%d)-(%d,%d,%d)=%.2f\n\n", kdKkGl[i].x, kdKkGl[i].y, kdKkGl[i].z, kdKkGl[j].x, kdKkGl[j].y, kdKkGl[j].z, FW9j5e6N (kdKkGl, i, j));
            };
        }
        k++;
    }
    return 0;
}

