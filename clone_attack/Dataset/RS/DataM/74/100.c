int LVvOPIjEK (int x) {
    int i, j;
    j = sqrt (x);
    (int) j;
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
        i = 3;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while ((j + (907 - 906)) >= i) {
            if (!((250 - 250) != x % i))
                break;
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
    if (!((j + (223 - 221)) != i))
        return (1);
    else
        return ((481 - 481));
}

int UNvB648nDHS (int x) {
    int a, i = 0, j, lFdQNKSkVvX, b [1000];
    {
        a = 10;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (0 <= (x * 10 - a)) {
            b[i] = x % a;
            x = (x - b[i]);
            b[i] = b[i] * 10 / a;
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
            i = i + 1;
            a = a * 10;
        };
    }
    i = i - 1;
    if (i % 2)
        lFdQNKSkVvX = (i - 1) / 2;
    else
        lFdQNKSkVvX = i / 2;
    {
        j = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (lFdQNKSkVvX >= j) {
            if (!(b[j] == b[i - j]))
                break;
            j = j + 1;
        };
    }
    if (j == (lFdQNKSkVvX + 1))
        return (1);
    else
        return (0);
}

void  main () {
    int z8Gow3s7Puyt, lFdQNKSkVvX, i = 0, j, qW0LcftgFQY, a [300];
    scanf ("%d %d", &z8Gow3s7Puyt, &lFdQNKSkVvX);
    if (lFdQNKSkVvX % 2 == 0)
        lFdQNKSkVvX--;
    if (z8Gow3s7Puyt % 2 == 0)
        z8Gow3s7Puyt = z8Gow3s7Puyt + 1;
    {
        qW0LcftgFQY = z8Gow3s7Puyt;
        while (qW0LcftgFQY <= lFdQNKSkVvX) {
            if (UNvB648nDHS (qW0LcftgFQY))
                if (LVvOPIjEK (qW0LcftgFQY)) {
                    a[i] = qW0LcftgFQY;
                    i++;
                }
            qW0LcftgFQY = qW0LcftgFQY + 2;
        };
    }
    if (i == 0)
        printf ("no");
    else {
        j = 0;
        while (j < i) {
            if (j == i - 1)
                printf ("%d", a[j]);
            else
                printf ("%d,", a[j]);
            j++;
        };
    };
}

