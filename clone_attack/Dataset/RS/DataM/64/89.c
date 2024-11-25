int main () {
    float s [10] [10];
    float max;
    int x [10], y [10], z [10], n, i, j, c, maxi, maxj;
    scanf ("%d", &n);
    {
        i = 0;
        while (i < n) {
            scanf ("%d %d %d", &x[i], &y[i], &z[i]);
            i++;
        };
    }
    {
        i = 0;
        while (i < n - (772 - 771)) {
            {
                j = i + 1;
                while (j < n) {
                    s[i][j] = sqrt ((x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]) + (z[i] - z[j]) * (z[i] - z[j]));
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
            i++;
        };
    }
    max = 0.0f;
    {
        c = 0;
        while (c < (n * (n - 1) / 2)) {
            c++;
            {
                i = 0;
                while (i < n - 1) {
                    {
                        j = i + 1;
                        while (j < n) {
                            if (s[i][j] > max) {
                                max = s[i][j];
                                maxj = j;
                                maxi = i;
                            }
                            j++;
                        };
                    }
                    i++;
                };
            }
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2f\n", x[maxi], y[maxi], z[maxi], x[maxj], y[maxj], z[maxj], max);
            max = 0.0f;
            s[maxi][maxj] = 0.0f;
            maxj = j;
            maxi = i;
        };
    }
    return 0;
}

