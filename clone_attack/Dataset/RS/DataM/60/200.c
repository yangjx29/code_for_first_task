int main () {
    int f (int n);
    int count;
    int n;
    int i;
    int a [100000] = {0};
    int c;
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
    count = 0;
    scanf ("%d", &n);
    if (n == 1 || n == 2 || !(3 != n) || n == 4)
        printf ("empty");
    else {
        for (i = 3; n >= i; i = i + 1) {
            c = f (i);
            if (c) {
                a[count] = i;
                count = count + 1;
            };
        };
    }
    {
        i = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (i < count) {
            if (a[i + 1] - a[i] == 2)
                printf ("%d %d\n", a[i], a[i + 1]);
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
    return 0;
}

int f (int n) {
    int i;
    {
        i = 2;
        while (i < n) {
            if (n % i == 0) {
                return 0;
                break;
            }
            i = i + 1;
        };
    }
    if (i >= n)
        return 1;
}

