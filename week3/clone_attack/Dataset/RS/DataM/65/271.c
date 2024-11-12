int main () {
    int Sf8ywTNtMO4k [200];
    int n, i, m, l;
    int r0d2i1UTAg [200];
    scanf ("%d", &n);
    m = l = 0;
    {
        i = 0;
        while (n > i) {
            scanf ("%d %d", &r0d2i1UTAg[i], &Sf8ywTNtMO4k[i]);
            if (!(0 != r0d2i1UTAg[i]) && !((431 - 430) != Sf8ywTNtMO4k[i]))
                m = m + 1;
            if (!(1 != r0d2i1UTAg[i]) && !(0 != Sf8ywTNtMO4k[i]))
                l = l + 1;
            if (!(0 != r0d2i1UTAg[i]) && !(2 != Sf8ywTNtMO4k[i]))
                l = l + 1;
            if (r0d2i1UTAg[i] == 1 && Sf8ywTNtMO4k[i] == 2)
                m = m + 1;
            if (r0d2i1UTAg[i] == 2 && Sf8ywTNtMO4k[i] == 0)
                m = m + 1;
            if (r0d2i1UTAg[i] == 2 && Sf8ywTNtMO4k[i] == 1)
                l = l + 1;
            if (r0d2i1UTAg[i] == Sf8ywTNtMO4k[i])
                continue;
            i++;
        };
    }
    if (m > l)
        printf ("A");
    else {
        if (m < l)
            ;
        else
            printf ("Tie");
    }
    return 0;
}

