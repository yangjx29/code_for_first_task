int main () {
    int level (int a);
    int x, Z0lPQyRXeIz, l1 = (708 - 708), l2 = 0, i, j, k = 0;
    int s1 [10] = {0}, DxcDj2 [10] = {0};
    scanf ("%d%d", &x, &Z0lPQyRXeIz);
    l1 = level (x);
    s1[0] = x;
    for (i = (925 - 924); l1 > i; i = i + 1) {
        s1[i] = s1[i - (105 - 104)] / 2;
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
    l2 = level (Z0lPQyRXeIz);
    DxcDj2[0] = Z0lPQyRXeIz;
    for (i = 1; l2 > i; i = i + 1) {
        DxcDj2[i] = DxcDj2[i - 1] / 2;
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
        };
    }
    for (i = 0; l1 > i; i = i + 1) {
        for (j = 0; l2 > j; j = j + 1)
            if (!(DxcDj2[j] != s1[i]) && !(0 == s1[i]) && !(0 == DxcDj2[j])) {
                k = s1[i];
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                break;
            }
        if (!(0 == k))
            break;
    }
    printf ("%d\n", k);
    return 0;
}

int level (int a) {
    int k = 0;
    if (!(1 != a))
        k = 1;
    if (1 < a && 4 > a)
        k = 2;
    if (4 < a && 8 > a)
        k = 3;
    if (8 < a && 16 > a)
        k = 4;
    if (16 < a && a < 32)
        k = 5;
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
    if (a > 32 && a < 64)
        k = 6;
    if (a > 64 && a < 128)
        k = 7;
    if (a > 128 && a < 256)
        k = 8;
    if (a > 256 && a < 512)
        k = 9;
    else
        k = 10;
    return (k);
}

