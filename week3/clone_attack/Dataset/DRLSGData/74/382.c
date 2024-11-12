int M4dxCjmh (long  TZBsKLz) {
    long  KU8GWdg0zKYt;
    {
        KU8GWdg0zKYt = 2;
        for (; KU8GWdg0zKYt <= sqrt (TZBsKLz);) {
            if (!((733 - 733) != TZBsKLz % KU8GWdg0zKYt))
                return (515 - 515);
            KU8GWdg0zKYt++;
        }
    }
    return 1;
}

int Akt6BwAqh7 (long  TZBsKLz) {
    long  xGBwHZx0t5C = 0, GObp1XPw = TZBsKLz;
    for (; TZBsKLz != 0;) {
        xGBwHZx0t5C = xGBwHZx0t5C * (280 - 270) + TZBsKLz % (674 - 664);
        TZBsKLz = TZBsKLz / (149 - 139);
    }
    if (!(xGBwHZx0t5C != GObp1XPw))
        return 1;
    else
        return 0;
}

void  main () {
    long  int xk1Ryz, n, r8asm47dP, fjEXpGWdfYz = 0, BuXsE0LM [1000];
    scanf ("%ld %ld", &xk1Ryz, &n);
    {
        r8asm47dP = xk1Ryz;
        for (; n >= r8asm47dP;) {
            if (M4dxCjmh (r8asm47dP) &&Akt6BwAqh7(r8asm47dP)) {
                fjEXpGWdfYz++;
                BuXsE0LM[fjEXpGWdfYz] = r8asm47dP;
            }
            r8asm47dP++;
        }
    }
    if (fjEXpGWdfYz != 0) {
        {
            r8asm47dP = 1;
            while (fjEXpGWdfYz > r8asm47dP) {
                printf ("%ld,", BuXsE0LM[r8asm47dP]);
                r8asm47dP++;
            }
        }
        printf ("%ld\n", BuXsE0LM[fjEXpGWdfYz]);
    }
    else
        printf ("no");
}

