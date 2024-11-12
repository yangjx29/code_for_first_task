void  main () {
    int kVL0CGW3zr, JR8fdSnKD, k, r = (748 - 748), len1, UvJMQp7bat, a [251] = {(248 - 248)};
    char s1 [(993 - 742)] = {""}, s2 [251] = {""}, sum [251] = {""}, R207RCEJmLzv [251] = {""};
    gets (s1);
    gets (s2);
    len1 = strlen (s1);
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
    UvJMQp7bat = strlen (s2);
    k = UvJMQp7bat < len1 ? len1 - (240 - 239) : UvJMQp7bat -(335 - 334);
    {
        kVL0CGW3zr = k;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (0 <= kVL0CGW3zr) {
            if (k == len1 - (835 - 834)) {
                if (0 <= kVL0CGW3zr - (k - UvJMQp7bat +(33 - 32)))
                    a[kVL0CGW3zr] = (s1[kVL0CGW3zr - (k - len1 + 1)] - (614 - 566)) + (s2[kVL0CGW3zr - (k - UvJMQp7bat +1)] - (623 - 575));
                else
                    a[kVL0CGW3zr] = s1[kVL0CGW3zr - (k - len1 + 1)] - (1003 - 955);
            }
            else {
                if (0 <= kVL0CGW3zr - (k - len1 + 1))
                    a[kVL0CGW3zr] = (s1[kVL0CGW3zr - (k - len1 + 1)] - 48) + (s2[kVL0CGW3zr - (k - UvJMQp7bat +1)] - 48);
                else
                    a[kVL0CGW3zr] = s2[kVL0CGW3zr - (k - UvJMQp7bat +1)] - 48;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            }
            kVL0CGW3zr--;
        };
    }
    {
        kVL0CGW3zr = k;
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
        while (kVL0CGW3zr >= 1) {
            if (a[kVL0CGW3zr] >= (129 - 119)) {
                a[kVL0CGW3zr - 1] = a[kVL0CGW3zr - 1] + a[kVL0CGW3zr] / 10;
                a[kVL0CGW3zr] = a[kVL0CGW3zr] % 10;
            }
            kVL0CGW3zr--;
        };
    }
    for (kVL0CGW3zr = 0; kVL0CGW3zr <= k; kVL0CGW3zr++)
        if (a[kVL0CGW3zr] != 0) {
            r = kVL0CGW3zr;
            break;
        }
    {
        kVL0CGW3zr = r;
        while (kVL0CGW3zr <= k) {
            printf ("%d", a[kVL0CGW3zr]);
            kVL0CGW3zr++;
        };
    };
}

