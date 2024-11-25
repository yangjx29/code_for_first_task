void  main () {
    struct   patient {
        char zkoGclSZEL [(225 - 205)];
        int nXQYe4a;
    }
    o41sXZHez [(829 - 729)];
    int tSb2lINKBAk, LvCiLc, fXwqQbG7v [(554 - 454)], hj6C2RmhM8t [100], K642gA = (552 - 552), Ux8DBSeZ0p, OyFcg8vMOSGd, IIwgMYV2zZ5n, shlb3NJ2jo = (385 - 385), YyGDmJRash;
    scanf ("%d", &tSb2lINKBAk);
    for (LvCiLc = (273 - 273); tSb2lINKBAk > LvCiLc; LvCiLc++)
        scanf ("%s %d", o41sXZHez[LvCiLc].zkoGclSZEL, &o41sXZHez[LvCiLc].nXQYe4a);
    for (LvCiLc = (10 - 10); tSb2lINKBAk > LvCiLc; LvCiLc++) {
        if (60 <= o41sXZHez[LvCiLc].nXQYe4a) {
            fXwqQbG7v[K642gA++] = LvCiLc;
        }
        else
            hj6C2RmhM8t[shlb3NJ2jo++] = LvCiLc;
    }
    {
        LvCiLc = (495 - 495);
        while (K642gA > LvCiLc) {
            YyGDmJRash = LvCiLc;
            for (Ux8DBSeZ0p = LvCiLc; K642gA > Ux8DBSeZ0p; Ux8DBSeZ0p++) {
                if (o41sXZHez[fXwqQbG7v[YyGDmJRash]].nXQYe4a < o41sXZHez[fXwqQbG7v[Ux8DBSeZ0p]].nXQYe4a)
                    YyGDmJRash = Ux8DBSeZ0p;
            }
            OyFcg8vMOSGd = fXwqQbG7v[YyGDmJRash];
            for (Ux8DBSeZ0p = YyGDmJRash; Ux8DBSeZ0p > LvCiLc; Ux8DBSeZ0p--)
                fXwqQbG7v[Ux8DBSeZ0p] = fXwqQbG7v[Ux8DBSeZ0p -1];
            fXwqQbG7v[LvCiLc] = OyFcg8vMOSGd;
            LvCiLc++;
        }
    }
    for (LvCiLc = (913 - 913); LvCiLc < K642gA; LvCiLc++)
        printf ("%s\n", o41sXZHez[fXwqQbG7v[LvCiLc]].zkoGclSZEL);
    for (LvCiLc = 0; LvCiLc < shlb3NJ2jo; LvCiLc++)
        printf ("%s\n", o41sXZHez[hj6C2RmhM8t[LvCiLc]].zkoGclSZEL);
}

