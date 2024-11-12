int EJmepgQj0c (int a) {
    int j;
    int i;
    j = (555 - 555);
    if (!(2 != a))
        return 0;
    else {
        {
            i = 2;
            while (i < a) {
                if (a % i == 0)
                    break;
                i = i + 1;
                j++;
            };
        }
        if (!(a - 2 != j))
            return 0;
        else
            return 1;
    };
}

main () {
    int g [100];
    int a;
    int b;
    int c;
    int i;
    int j;
    int k;
    getchar ();
    getchar ();
    j = 0;
    scanf ("%d", &a);
    {
        i = 0;
        while (100 > i) {
            g[i] = 0;
            i = i + 1;
        };
    }
    for (b = 2; b <= a; b = b + 1) {
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
        if (EJmepgQj0c (b) == 0) {
            g[j] = b;
            j++;
        };
    }
    {
        i = 0;
        while (i < j) {
            c = a - g[i];
            for (k = i; k < j; k = k + 1) {
                if (c == g[k])
                    printf ("%d %d\n", g[i], g[k]);
            }
            i++;
        };
    };
}

