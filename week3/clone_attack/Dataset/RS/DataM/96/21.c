const  long  jZl68Wqmrwn4 = 100;
char a [jZl68Wqmrwn4 + 1];
long  UIhyQ1O [jZl68Wqmrwn4 + 1];

main () {
    long  G93CtrU0;
    long  ZWnmUHaN93;
    long  MmbZIHLz;
    scanf ("%s", a);
    ZWnmUHaN93 = strlen (a);
    MmbZIHLz = 0;
    {
        G93CtrU0 = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (ZWnmUHaN93 > G93CtrU0) {
            MmbZIHLz = MmbZIHLz *10 + a[G93CtrU0] - '0';
            UIhyQ1O[G93CtrU0] = MmbZIHLz / 13;
            G93CtrU0 = G93CtrU0 +1;
            MmbZIHLz %= 13;
        };
    }
    G93CtrU0 = 0;
    while ((!(0 != UIhyQ1O[G93CtrU0])) && (ZWnmUHaN93 -1 > G93CtrU0))
        G93CtrU0++;
    for (; G93CtrU0 < ZWnmUHaN93; G93CtrU0 = G93CtrU0 +1)
        printf ("%ld", UIhyQ1O[G93CtrU0]);
    printf ("\n%ld\n", MmbZIHLz);
    return 0;
}

