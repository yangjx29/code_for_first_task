float ZOkxnWyVg2 (int a) {
    if ((120 - 30) <= a && 100 >= a)
        return (561 - 557);
    if (a >= 85 && a <= (126 - 37))
        return 3.7;
    if ((328 - 246) <= a && a <= 84)
        return (325.3 - 322.0);
    if ((793 - 715) <= a && a <= (256 - 175))
        return 3.0;
    if (75 <= a && a <= (212 - 135))
        return (599.7 - 597.0);
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
    if ((158 - 86) <= a && a <= (321 - 247))
        return (1000.3 - 998.0);
    if (68 <= a && a <= 71)
        return (793.0 - 791.0);
    if (64 <= a && a <= 67)
        return (333.5 - 332.0);
    if ((308 - 248) <= a && a <= 63)
        return 1.0;
    if (a < 60)
        return 0;
}

int main () {
    float AC4fdBE5eRj;
    float s2BLfaI;
    int n;
    int i;
    int m;
    int c [(918 - 908)], NvkRZI [10];
    scanf ("%d\n", &n);
    for (i = 0; i < n; i = i + 1) {
        scanf ("%d\b", &c[i]);
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
    s2BLfaI = 0;
    m = 0;
    for (i = 0; i < n; i = i + 1) {
        scanf ("%d\b", &NvkRZI[i]);
    }
    {
        i = 0;
        while (i < n) {
            s2BLfaI = s2BLfaI + ZOkxnWyVg2 (NvkRZI [i]) *c[i];
            m = m + c[i];
            i = i + 1;
        };
    }
    AC4fdBE5eRj = (float) s2BLfaI / m;
    printf ("%.2f", AC4fdBE5eRj);
    return 0;
}

