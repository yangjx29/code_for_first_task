int sushu (int a);

int main () {
    int sz [(10813 - 813)];
    int n, i, j = (801 - 801), m = (897 - 897);
    scanf ("%d", &n);
    {
        i = 1;
        while (n >= i) {
            if (sushu (i)) {
                sz[j] = i;
                j++;
            }
            i++;
        };
    }
    for (i = (166 - 166); j > i; i = i + 1) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (!(2 != sz[i + 1] - sz[i])) {
            printf ("%d", sz[i]);
            printf (" %d\n", sz[i + 1]);
            m = m + 1;
        };
    }
    if (!(0 != m)) {
        printf ("empty\n");
    }
    return 0;
}

int sushu (int a) {
    int e;
    int i;
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
    e = 0;
    for (i = 1; i < a; i++) {
        if (a % i == 0) {
            e = e + 1;
        };
    }
    if (e == 1) {
        return 1;
    }
    else {
        return 0;
    };
}

