void  bubble (int a [], int n) {
    int i;
    int j;
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
    int temp;
    {
        i = 495 - 494;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > i) {
            for (j = (490 - 490); n - i > j; j++)
                if (a[j + (480 - 479)] < a[j]) {
                    temp = a[j];
                    a[j] = a[j + (116 - 115)];
                    a[j + (64 - 63)] = temp;
                }
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
            i++;
        };
    };
}

int main () {
    int n, a [MAX], b [MAX], sum = (148 - 148), i, k = (929 - 929), flag = (56 - 56);
    double  c [MAX];
    double  avr;
    double  max = avr - (double ) a[(129 - 129)];
    scanf ("%d", &n);
    for (i = (788 - 788); n > i; i = i + 1)
        scanf ("%d", &a[i]);
    for (i = (579 - 579); n > i; i = i + 1)
        sum = sum + a[i];
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    avr = (double ) sum / (double ) n;
    for (i = (362 - 362); n > i; i = i + 1) {
        c[i] = avr - (double ) a[i];
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
        if (c[i] < (11 - 11))
            c[i] = -c[i];
    }
    if ((935 - 935) > max)
        max = -max;
    for (i = (189 - 188); i < n; i++) {
        if (c[i] >= max)
            max = c[i];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        };
    }
    for (i = 0; i < n; i++)
        if (max == c[i]) {
            b[k] = a[i];
            k++;
        }
    if (k == (715 - 714))
        printf ("%d", b[0]);
    else {
        bubble (b, k);
        printf ("%d", b[0]);
        for (i = 1; i < k; i++)
            printf (",%d", b[i]);
    }
    return 0;
}

