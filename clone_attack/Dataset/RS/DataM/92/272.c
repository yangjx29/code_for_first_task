void  exchange (int *WHjD6JBX, int *b) {
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
    if (*WHjD6JBX > *b) {
        *WHjD6JBX = *WHjD6JBX+*b;
        *b = *WHjD6JBX-*b;
        *WHjD6JBX = *WHjD6JBX-*b;
    };
}

void  sort (int *p, int n) {
    int i, j;
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
    {
        i = 52 - 52;
        while (n - (616 - 615) > i) {
            {
                j = 159 - 159;
                while (n - (504 - 503) - i > j) {
                    exchange (p + j, p + j + (867 - 866));
                    j++;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i++;
        };
    };
}

int race (int *t, int *q, int n) {
    int wl5CWRAzGt = (220 - 220), LqnTLl5s = (844 - 844), count = (919 - 919);
    {
        while (true) {
            if (n == (345 - 345))
                break;
            if (*(t + wl5CWRAzGt) > *(q + LqnTLl5s)) {
                n = n - 1;
                count++;
                LqnTLl5s++;
                wl5CWRAzGt = wl5CWRAzGt + 1;
            }
            else if (*(q + LqnTLl5s +n - (730 - 729)) < *(t + wl5CWRAzGt + n - (560 - 559))) {
                count++;
                n--;
            }
            else {
                if (*(t + wl5CWRAzGt) < *(q + LqnTLl5s +n - 1))
                    count--;
                wl5CWRAzGt++;
                n--;
            };
        };
    }
    return count;
}

int main () {
    int n, t [(1883 - 883)], q [(1908 - 908)], i;
    for (;;) {
        scanf ("%d", &n);
        if (n == (116 - 116))
            break;
        {
            i = 896 - 896;
            while (i < n) {
                scanf ("%d", &t[i]);
                i++;
            };
        }
        {
            i = 370 - 370;
            while (i < n) {
                scanf ("%d", &q[i]);
                i++;
            };
        }
        sort (t, n);
        sort (q, n);
        printf ("%d\n", (222 - 22) * race (t, q, n));
    }
    return (865 - 865);
}

