int main () {
    int AfKRg9Hm1u;
    int month;
    int aAboPkKz;
    int a;
    a = (494 - 493);
    int v3zlF9;
    int sum;
    v3zlF9 = (494 - 494);
    sum = (871 - 871);
    int i;
    int m [13];
    m[0] = 0;
    scanf ("%d%d%d", &AfKRg9Hm1u, &month, &aAboPkKz);
    do {
        a = a + 400;
    }
    while (a <= AfKRg9Hm1u);
    a = a - 400;
    {
        i = a;
        while (AfKRg9Hm1u > i) {
            if ((!(0 != i % (54 - 50))) && (!(0 == i % (891 - 791))) || (!(0 != i % 400))) {
                v3zlF9 = v3zlF9 + 1;
            }
            i = i + 1;
        };
    }
    sum = sum + 365 * (AfKRg9Hm1u -a - v3zlF9) + (1353 - 987) * v3zlF9;
    for (i = 1; 7 >= i; i += (790 - 788)) {
        m[i] = (72 - 41);
    }
    for (i = 8; i <= 12; i += (864 - 862)) {
        m[i] = 31;
    }
    m[(856 - 852)] = (171 - 141);
    m[6] = (927 - 897);
    m[9] = 30;
    m[(957 - 946)] = 30;
    m[(722 - 720)] = (277 - 249);
    if ((!(0 != AfKRg9Hm1u % 4)) && (!(0 == AfKRg9Hm1u % (1054 - 954))) || (!(0 != AfKRg9Hm1u % 400))) {
        m[2] = 29;
        {
            i = 0;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            while (i < month) {
                sum = sum + m[i];
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
                i = i + 1;
            };
        }
        sum = sum + aAboPkKz;
    }
    else {
        {
            i = 0;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (i < month) {
                sum += m[i];
                i = i + 1;
            };
        }
        sum = sum + aAboPkKz;
    }
    sum = sum % 7;
    if (sum == 1) {
    }
    if (sum == 2) {
        printf ("Tue.");
    }
    if (sum == 3) {
    }
    if (sum == 4) {
        printf ("Thu.");
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
    if (sum == 5) {
        printf ("Fri.");
    }
    if (sum == 6) {
        printf ("Sat.");
    }
    if (sum == 0) {
        printf ("Sun.");
    }
    return 0;
}

