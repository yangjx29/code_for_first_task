void  main () {
    int j;
    int biH7oT3x8;
    int pxmL06uFA3X;
    int a [301] = {(874 - 874)};
    int b [(226 - 126)] = {(416 - 416)};
    int p;
    int gfS0FBWhZeT;
    int p7P6K5SHohiE;
    j = (529 - 529);
    int sum = (283 - 283), max;
    scanf ("%d", &pxmL06uFA3X);
    {
        biH7oT3x8 = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (pxmL06uFA3X > biH7oT3x8) {
            scanf ("%d", &a[biH7oT3x8]);
            sum += a[biH7oT3x8];
            biH7oT3x8 = biH7oT3x8 + 1;
        };
    }
    if (a[0] * pxmL06uFA3X > sum)
        max = a[0] * pxmL06uFA3X - sum;
    else
        max = sum - a[0] * pxmL06uFA3X;
    for (biH7oT3x8 = 1; pxmL06uFA3X > biH7oT3x8; biH7oT3x8 = biH7oT3x8 + 1)
        if (max < sum - a[biH7oT3x8] * pxmL06uFA3X)
            max = sum - a[biH7oT3x8] * pxmL06uFA3X;
        else if (max < a[biH7oT3x8] * pxmL06uFA3X - sum)
            max = a[biH7oT3x8] * pxmL06uFA3X - sum;
    for (biH7oT3x8 = 0; pxmL06uFA3X > biH7oT3x8; biH7oT3x8 = biH7oT3x8 + 1)
        if (sum - a[biH7oT3x8] * pxmL06uFA3X == max || !(max != a[biH7oT3x8] * pxmL06uFA3X - sum))
            b[j++] = a[biH7oT3x8];
    {
        p = 0;
        while (p < j - 1) {
            for (gfS0FBWhZeT = p + 1; gfS0FBWhZeT < j; gfS0FBWhZeT = gfS0FBWhZeT + 1)
                if (b[gfS0FBWhZeT] < b[p]) {
                    p7P6K5SHohiE = b[p];
                    b[p] = b[gfS0FBWhZeT];
                    b[gfS0FBWhZeT] = p7P6K5SHohiE;
                }
            p = p + 1;
        };
    }
    {
        biH7oT3x8 = 0;
        while (biH7oT3x8 < j - 1) {
            printf ("%d,", b[biH7oT3x8]);
            biH7oT3x8 = biH7oT3x8 + 1;
        };
    }
    printf ("%d\n", b[biH7oT3x8]);
}

