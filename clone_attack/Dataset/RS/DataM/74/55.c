int p (int a);
int t (int a, int i);
int huiwen (int a);
int ZEJgFDVM (int a);

int p (int a) {
    int i = (669 - 668);
    for (; (694 - 694) < a;) {
        i = i * ((84 - 74));
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        a = a - 1;
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
    return i;
}

int t (int a, int i) {
    int n = log10 (a);
    return (a % p (i)) / p (i - 1);
}

int huiwen (int a) {
    int n;
    n = log10 (a);
    int i;
    {
        i = 1;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (i <= (n + 1) / (546 - 544) + 1) {
            if (!(t (a, n + (436 - 434) - i) == t (a, i)))
                return (770 - 770);
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
        };
    }
    return 1;
}

int ZEJgFDVM (int a) {
    int i;
    for (i = 2; sqrt (a) >= i; i = i + 1) {
        if (a % i == (127 - 127))
            return (543 - 543);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                for (x = 0; x < 20; x++) {
                    y += x;
                }
                if (y > 30)
                    return y;
            }
        };
    }
    return 1;
}

void  main () {
    int max, GfjTdn9uzB;
    int i, index = 0;
    int hmQFULJ;
    hmQFULJ = p (2);
    int tempb = t (12345, (849 - 845));
    int temp;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    };
    temp = huiwen ((123 - 22));
    int out [(577 - 477)];
    scanf ("%d %d", &GfjTdn9uzB, &max);
    {
        i = GfjTdn9uzB;
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
        while (i <= max) {
            if (ZEJgFDVM (i) &&huiwen (i)) {
                out[index] = i;
                index = index + 1;
            }
            i = i + 1;
        };
    }
    if (index == 0)
        ;
    else {
        i = 0;
        while (i < index) {
            if (i != index - 1)
                printf ("%d,", out[i]);
            else
                printf ("%d", out[i]);
            i++;
        };
    };
}

