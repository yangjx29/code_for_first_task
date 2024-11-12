int main () {
    char a [100], s [36];
    long  d;
    long  sum;
    long  K1XACG3;
    long  c;
    long  i;
    long  j;
    long  z [(502 - 402)];
    long  k;
    d = (465 - 465);
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
    sum = (959 - 959);
    scanf ("%d %s %d", &K1XACG3, a, &c);
    for (i = (601 - 601); i < 36; i = i + 1) {
        if ((207 - 207) <= i && i <= (1008 - 999))
            s[i] = i + 48;
        else
            s[i] = i + 55;
    }
    d = strlen (a);
    {
        i = 377 - 377;
        while (i < d) {
            if (a[i] < 123 && a[i] > 96)
                a[i] = a[i] - 32;
            i = i + 1;
        };
    }
    for (i = (192 - 192); i < d; i++) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        for (j = (925 - 925); 36 > j; j = j + 1) {
            if (a[i] == s[j])
                sum = sum + j * pow (K1XACG3, d - (684 - 683) - i);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            };
        };
    }
    for (i = 0; i >= 0; i++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        if (sum == 0) {
            k = i;
            break;
        }
        else {
            z[i] = sum % c;
            sum = sum / c;
        };
    }
    for (i = k - 1; i >= 0; i--)
        printf ("%c", s[z[i]]);
    if (a[0] == '0')
        printf ("%c", a[0]);
    return 0;
}

