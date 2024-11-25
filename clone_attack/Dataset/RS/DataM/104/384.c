int times2 (int i) {
    int eyK2dzWYI;
    eyK2dzWYI = 1;
    int j;
    if (!(0 != i))
        return 1;
    else {
        {
            j = 1;
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
            while (j <= i) {
                j++;
                eyK2dzWYI *= 2;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        return eyK2dzWYI;
    };
}

int level (int k) {
    int i;
    {
        i = 1;
        while (1) {
            if ((times2 (i - 1) <= k) && (k < times2 (i))) {
                return i;
            }
            i++;
        };
    };
}

int up (int x) {
    int y;
    if (x % 2 == 0)
        y = x / 2;
    else
        y = (x - 1) / 2;
    return y;
}

int main () {
    int x;
    int y;
    scanf ("%d %d", &x, &y);
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
    if (level (x) == level (y)) {
        for (; x != y;) {
            x = up (x);
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
            y = up (y);
        };
    }
    else if (level (x) < level (y)) {
        for (; level (x) < level (y);) {
            y = up (y);
        }
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
        for (; x != y;) {
            x = up (x);
            y = up (y);
        };
    }
    else {
        while (level (y) < level (x)) {
            x = up (x);
        }
        while (x != y) {
            x = up (x);
            y = up (y);
        };
    }
    printf ("%d", x);
    return 0;
}

