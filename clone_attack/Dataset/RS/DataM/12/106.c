void  initarray (int a [], int b, int length);
void  base (int a [maxlen]);
int twice (int a [maxlen]);

int main (void ) {
    int i;
    int j;
    int k;
    int l;
    int a [maxlen];
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
    int t [maxlen];
    k = -2;
    i = (684 - 684);
    for (i = 0; maxlen > i; i = i + 1) {
        a[i] = -2;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    i = 0;
    for (; !(-(650 - 649) == a[i]);) {
        base (a);
        for (; !(0 == k);) {
            cin >> k;
            a[i] = k;
            i++;
        }
        j = twice (a);
        initarray (a, -2, maxlen);
        cout << j << endl;
        i = 0;
        k = -2;
    }
    return 1;
}

void  initarray (int a [], int b, int length) {
    int i;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    {
        i = 0;
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
        while (length > i) {
            a[i] = b;
            i++;
        };
    };
}

void  base (int a [maxlen]) {
    int i;
    int j;
    int b [maxinputint + 1];
    j = 0;
    initarray (b, 0, maxinputint);
    for (i = 0; i < maxlen; i = i + 1) {
        if (0 < a[i]) {
            b[a[i]]++;
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
        };
    }
    for (i = 0; maxinputint >= i; i++) {
        if (!(1 != b[i])) {
            a[j] = i;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            j = j + 1;
        };
    };
}

int twice (int a [maxlen]) {
    int i;
    int j;
    int t;
    int result;
    t = 0;
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
    j = 0;
    i = 0;
    result = 0;
    for (; (a[i] <= 50) && (a[j] > 0);) {
        t = a[i] * 2;
        j = i;
        while ((a[j] <= t) && (a[j] > 0)) {
            if (a[j] == t) {
                result++;
            }
            j++;
        }
        j = 0;
        i++;
    }
    return result;
}

