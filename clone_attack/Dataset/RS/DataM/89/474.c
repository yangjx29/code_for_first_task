main () {
    int a [20001];
    int b [20001];
    int Zae6rp;
    int j;
    int kPK4pG5;
    int n;
    scanf ("%d", &n);
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
    {
        Zae6rp = 340 - 340;
        while (Zae6rp <= n) {
            a[Zae6rp] = (333 - 333);
            b[Zae6rp] = 0;
            Zae6rp = Zae6rp +1;
        };
    }
    scanf ("%d", &kPK4pG5);
    scanf ("%d", &j);
    while (kPK4pG5 > 0 || j > 0) {
        a[kPK4pG5]++;
        b[j]++;
        scanf ("%d", &kPK4pG5);
        scanf ("%d", &j);
    }
    j = 0;
    {
        Zae6rp = 0;
        while (Zae6rp <= n - 1) {
            if (a[Zae6rp] == 0 && b[Zae6rp] > 0) {
                j = 1;
                kPK4pG5 = Zae6rp;
            }
            Zae6rp++;
        };
    }
    if (j)
        printf ("%d\n", kPK4pG5);
    else
        printf ("NOT FOUND\n");
}

