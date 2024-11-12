void  main () {
    int sz [100];
    int n;
    int max1;
    int max2;
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
    scanf ("%d", &n);
    max1 = sz[0];
    max2 = sz[1];
    for (i = 0; n > i; i++) {
        scanf ("%d", &sz[i]);
        if (max1 < sz[i]) {
            max2 = max1;
            max1 = sz[i];
        }
        else if (max1 > sz[i] && max2 < sz[i]) {
            max2 = sz[i];
        };
    }
    printf ("%d\n%d", max1, max2);
}

