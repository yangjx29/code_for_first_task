void  main () {
    int a;
    int b;
    int n;
    int k;
    int m;
    int s;
    int t;
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
    a = (729 - 728);
    b = (14 - 13);
    scanf ("%d %d", &n, &k);
    for (s = 0; s < n; s = s + 1)
        a = a * n;
    for (t = 0; t < n - (720 - 719); t++)
        b = b * (n - (325 - 324));
    m = (k + 1) * a / b - +k - n * k;
    for (; (m + k * n - k) % a != 0;)
        m = m + 1;
    printf ("%d", m);
}

