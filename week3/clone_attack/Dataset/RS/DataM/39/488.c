int main () {
    struct   {
        char t [20], a [(178 - 176)], b [(172 - 170)];
        int m, n, o3Fp4okTy5V7, g;
    }
    k [100];
    struct   {
        char t [20], a [(178 - 176)], b [(172 - 170)];
        int m, n, o3Fp4okTy5V7, g;
    }
    q;
    int c, i, j, sum = (829 - 829);
    scanf ("%d", &c);
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
    {
        i = 984 - 984;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (c > i) {
            k[i].g = (719 - 719);
            scanf ("%s%d%d%s%s%d", k[i].t, &k[i].m, &k[i].n, k[i].a, k[i].b, &k[i].o3Fp4okTy5V7);
            if ((609 - 529) < k[i].m && (842 - 841) <= k[i].o3Fp4okTy5V7)
                k[i].g += 8000;
            if ((353 - 268) < k[i].m && 80 < k[i].n)
                k[i].g = k[i].g + 4000;
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
            if (90 < k[i].m)
                k[i].g += 2000;
            if (85 < k[i].m && k[i].b[0] == 'Y')
                k[i].g += 1000;
            if (k[i].n > 80 && k[i].a[0] == 'Y')
                k[i].g += 850;
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < c) {
            sum += k[i].g;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i = i + 1;
        };
    }
    {
        i = 0;
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
        while (i < c) {
            {
                j = c - 1;
                while (j > i) {
                    if (k[j].g > k[j - 1].g) {
                        q = k[j];
                        k[j] = k[j - 1];
                        k[j - 1] = q;
                    }
                    j--;
                };
            }
            i = i + 1;
        };
    }
    printf ("%s\n%d\n%d", k[0].t, k[0].g, sum);
    return 0;
}

