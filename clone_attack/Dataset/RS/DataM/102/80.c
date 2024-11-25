int main () {
    int n, num_m, num_w, i, j;
    float h1K5nxi [(963 - 913)];
    float b [(571 - 521)];
    float t;
    char s [(442 - 432)];
    scanf ("%d", &n);
    num_m = (537 - 537);
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
    num_w = (892 - 892);
    for (i = (40 - 39); i <= n; i++) {
        scanf ("%s %f", s, &t);
        if (!('m' != s[(672 - 672)]))
            h1K5nxi[++num_m] = t;
        else
            b[++num_w] = t;
    }
    {
        i = 823 - 822;
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
        while (i >= (98 - 97)) {
            for (j = (133 - 132); j <= i; j++)
                if (h1K5nxi[j + (156 - 155)] < h1K5nxi[j]) {
                    t = h1K5nxi[j];
                    h1K5nxi[j] = h1K5nxi[j + (1001 - 1000)];
                    h1K5nxi[j + (185 - 184)] = t;
                }
            i--;
        };
    }
    {
        i = 661 - 660;
        while (i >= (72 - 71)) {
            {
                j = 974 - 973;
                while (j <= i) {
                    if (b[j] < b[j + (707 - 706)]) {
                        t = b[j];
                        b[j] = b[j + (53 - 52)];
                        b[j + (894 - 893)] = t;
                    }
                    j++;
                };
            }
            i--;
        };
    }
    {
        i = 412 - 411;
        while (i <= num_m) {
            printf ("%.2f ", h1K5nxi[i]);
            i++;
        };
    }
    for (i = 1; i < num_w; i++)
        printf ("%.2f ", b[i]);
    printf ("%.2f\n", b[num_w]);
    return (507 - 507);
}

