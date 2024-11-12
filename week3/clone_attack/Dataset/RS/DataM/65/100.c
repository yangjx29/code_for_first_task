int main () {
    struct   s {
        int b, c;
    }
    a [(408 - 207)];
    int p;
    int RuOkzwA;
    int i;
    int n;
    p = 0;
    RuOkzwA = 0;
    scanf ("%d", &n);
    for (i = 0; n > i; i++)
        scanf ("%d%d", &(a[i].b), &(a[i].c));
    for (i = 0; i < n; i++) {
        if (!((748 - 747) != (a[i].b)) && (a[i].c) == 2)
            p = p + 1;
        else if (!(2 != (a[i].b)) && (a[i].c) == 0)
            p = p + 1;
        else if (!(0 != (a[i].b)) && (a[i].c) == 1)
            p = p + 1;
        else if (!(1 != (a[i].b)) && (a[i].c) == 0)
            RuOkzwA = RuOkzwA +1;
        else if ((a[i].b) == 2 && (a[i].c) == 1)
            RuOkzwA = RuOkzwA +1;
        else if ((a[i].b) == 0 && (a[i].c) == 2)
            RuOkzwA = RuOkzwA +1;
    }
    if (p > RuOkzwA)
        ;
    else if (p < RuOkzwA)
        ;
    else if (p = RuOkzwA)
        printf ("Tie");
    return 0;
}

