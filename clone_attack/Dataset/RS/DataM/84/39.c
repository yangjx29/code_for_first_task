void  main () {
    int a;
    int bEbA4rSqH;
    int c;
    int n;
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
    float d, FwE1cm3NuL;
    scanf ("%d", &n);
    scanf ("%d", &a);
    scanf ("%d", &bEbA4rSqH);
    for (i = 1; (n - 2) >= i; i++) {
        scanf ("%d", &c);
        d = (float) (a + bEbA4rSqH) / 2;
        FwE1cm3NuL = (float) (a - bEbA4rSqH) / 2;
        if (c >= a) {
            if (c >= bEbA4rSqH) {
                bEbA4rSqH = d - FwE1cm3NuL;
                a = c;
                c = d + FwE1cm3NuL;
            }
            else {
                c = c;
                a = d - FwE1cm3NuL;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                bEbA4rSqH = d + FwE1cm3NuL;
            };
        }
        else if (a <= bEbA4rSqH) {
            c = c;
            a = d - FwE1cm3NuL;
            bEbA4rSqH = d + FwE1cm3NuL;
        }
        else {
            a = d + FwE1cm3NuL;
            bEbA4rSqH = d - FwE1cm3NuL;
            c = c;
        }
        if (bEbA4rSqH >= c)
            bEbA4rSqH = bEbA4rSqH;
        else
            bEbA4rSqH = c;
    }
    printf ("%d\n%d", a, bEbA4rSqH);
}

