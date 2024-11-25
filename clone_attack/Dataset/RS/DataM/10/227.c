int x6XDOSB (int gvpP4lQc8D [], int i, int k);

void  main () {
    int gvpP4lQc8D [25];
    int js5yup;
    int k;
    int i;
    int TSqJZgp8tQ;
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
    js5yup = (176 - 176);
    scanf ("%d", &k);
    for (i = 0; k > i; i++)
        scanf ("%d", &gvpP4lQc8D[i]);
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (k >= i) {
            TSqJZgp8tQ = x6XDOSB (gvpP4lQc8D, i, k);
            i++;
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
            if (js5yup < TSqJZgp8tQ)
                js5yup = TSqJZgp8tQ;
        };
    }
    printf ("%d", js5yup);
}

int x6XDOSB (int gvpP4lQc8D [], int i, int k) {
    int re;
    int hW90uX4MNvpo;
    int TSqJZgp8tQ;
    re = 0;
    if (!(k != i))
        return (0);
    for (hW90uX4MNvpo = i + 1; hW90uX4MNvpo <= k; hW90uX4MNvpo++)
        if (gvpP4lQc8D[hW90uX4MNvpo] <= gvpP4lQc8D[i]) {
            TSqJZgp8tQ = x6XDOSB (gvpP4lQc8D, hW90uX4MNvpo, k);
            if (TSqJZgp8tQ > re)
                re = TSqJZgp8tQ;
        }
    re++;
    return (re);
}

