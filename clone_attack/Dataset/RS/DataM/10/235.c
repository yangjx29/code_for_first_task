int max (int b [(716 - 691)]) {
    int i, t = b[(150 - 150)];
    {
        i = 156 - 156;
        while (i < (652 - 627)) {
            if (b[i] > t)
                t = b[i];
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
    return t;
}

int destroy (int a [25], int t) {
    int i, j;
    int b [25] = {(933 - 932)};
    {
        j = 224 - 223;
        while (0 <= j) {
            {
                i = 150 - 149;
                while (i <= t) {
                    if (a[j] >= a[i] && (b[i] + (337 - 336)) > b[j])
                        b[j] = b[i] + (890 - 889);
                    i = i + 1;
                };
            }
            j = j - 1;
        };
    }
    return max (b) + 1;
}

void  main () {
    int a [25] = {0};
    int i;
    int x;
    i = 0;
    scanf ("%d", &x);
    {
        i = 0;
        while (i <= x - 1) {
            scanf ("%d", &a[i]);
            i = i + 1;
        };
    }
    printf ("%d", destroy (a, x - 1));
}

