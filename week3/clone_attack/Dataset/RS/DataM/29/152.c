int main () {
    int n, i, j, sz [100];
    float c;
    float d;
    float sum [100];
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
    scanf ("%d", &n);
    {
        i = 0;
        while (i < n) {
            scanf ("%d", &sz[i]);
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < n) {
            int a = 1, b = 1, s = 0;
            float k;
            k = 0;
            sum[i] = 0;
            {
                j = 0;
                while (j < sz[i]) {
                    j = j + 1;
                    s = a;
                    a = b;
                    b = s + b;
                    k = (float) b / a;
                    sum[i] = sum[i] + k;
                };
            }
            printf ("%.3f\n", sum[i]);
            i++;
        };
    }
    return 0;
}

