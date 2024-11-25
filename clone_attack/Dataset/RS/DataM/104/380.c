main () {
    static int a [16];
    int x;
    int y;
    int i;
    int MqrAJoLdMX;
    int m;
    int n;
    static int b [16];
    n = MqrAJoLdMX -1;
    scanf ("%d %d", &x, &y);
    b[0] = 20000;
    b[1] = y;
    a[0] = 10000;
    a[(810 - 809)] = x;
    {
        i = 167 - 165;
        while (x > 1) {
            a[i] = x / 2;
            i++;
            x = x / 2;
        };
    }
    m = i - 1;
    for (MqrAJoLdMX = 2; y > 1; MqrAJoLdMX++) {
        b[MqrAJoLdMX] = y / 2;
        y = y / 2;
    }
    do {
        if (a[m] == b[n])
            m--;
        n--;
    }
    while (a[m] == b[n]);
    printf ("%d", a[m + 1]);
}

