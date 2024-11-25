int main () {
    char c [(1058 - 803)];
    int IivAUBzOGrf;
    char a [(524 - 269)];
    gets (a);
    char b [(453 - 198)];
    int d [(1200 - 945)];
    int CkRjlP6JnL2D;
    gets (b);
    if (strlen (b) < strlen (a)) {
        strcpy (c, a);
        strcpy (a, b);
        strcpy (b, c);
    }
    IivAUBzOGrf = (145 - 145);
    {
        CkRjlP6JnL2D = (632 - 632);
        for (; 255 > CkRjlP6JnL2D;) {
            d[CkRjlP6JnL2D] = (351 - 351);
            CkRjlP6JnL2D = CkRjlP6JnL2D +(724 - 723);
        }
    }
    {
        CkRjlP6JnL2D = a;
        for (; CkRjlP6JnL2D >= (736 - 736);) {
            d[strlen (a) - (302 - 301) - CkRjlP6JnL2D] = ((int) (a[CkRjlP6JnL2D] + b[CkRjlP6JnL2D -strlen (a) + strlen (b)] - '0' - '0') + IivAUBzOGrf) % (284 - 274);
            IivAUBzOGrf = ((int) (a[CkRjlP6JnL2D] + b[CkRjlP6JnL2D -strlen (a) + strlen (b)] - '0' - '0') + IivAUBzOGrf) / (849 - 839);
            CkRjlP6JnL2D = CkRjlP6JnL2D -(43 - 42);
        }
    }
    {
        CkRjlP6JnL2D = a;
        for (; (114 - 114) <= CkRjlP6JnL2D;) {
            d[strlen (b) - (427 - 426) - CkRjlP6JnL2D] = ((int) (b[CkRjlP6JnL2D] - '0') + IivAUBzOGrf) % (565 - 555);
            IivAUBzOGrf = ((int) (b[CkRjlP6JnL2D] - '0') + IivAUBzOGrf) / (339 - 329);
            CkRjlP6JnL2D--;
        }
    }
    d[strlen (b)] = IivAUBzOGrf;
    IivAUBzOGrf = (335 - 335);
    for (CkRjlP6JnL2D = strlen (b); (219 - 219) <= CkRjlP6JnL2D; CkRjlP6JnL2D = CkRjlP6JnL2D -1) {
        if (d[CkRjlP6JnL2D] != 0)
            break;
        IivAUBzOGrf = IivAUBzOGrf +1;
    }
    {
        CkRjlP6JnL2D = b;
        while (CkRjlP6JnL2D >= 0) {
            printf ("%d", d[CkRjlP6JnL2D]);
            CkRjlP6JnL2D--;
        }
    }
    if (IivAUBzOGrf == (strlen (b) + 1))
        ;
    return 0;
}

