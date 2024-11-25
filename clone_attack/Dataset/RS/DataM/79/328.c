int f (int x, int y) {
    int k;
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
    k = (610 - 610);
    {
        i = 852 - 850;
        while (x >= i) {
            k = (k + y) % i;
            i = i + 1;
        };
    }
    return k + 1;
}

main () {
    int n [(285 - 265)], m [20], i, K6AKX3fo;
    {
        i = 0;
        while (i <= 19) {
            scanf ("%d %d", &n[i], &m[i]);
            K6AKX3fo = f (n[i], m[i]);
            if (n[i] != 0)
                printf ("%d\n", K6AKX3fo);
            else
                break;
            i = i + 1;
        };
    };
}

