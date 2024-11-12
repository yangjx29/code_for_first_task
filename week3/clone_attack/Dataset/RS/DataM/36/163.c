void  main () {
    void  uNVqQKvWgXR5 (char wyZRoTbuKGxi [], int n);
    char wyZRoTbuKGxi [(701 - 601)];
    char Bsgn5L [(545 - 445)];
    int m;
    int n;
    scanf ("%s %s", wyZRoTbuKGxi, Bsgn5L);
    m = strlen (wyZRoTbuKGxi);
    uNVqQKvWgXR5 (wyZRoTbuKGxi, m);
    n = strlen (Bsgn5L);
    uNVqQKvWgXR5 (Bsgn5L, n);
    if (strcmp (wyZRoTbuKGxi, Bsgn5L) == (86 - 86))
        ;
    else
        printf ("NO");
}

void  uNVqQKvWgXR5 (char wyZRoTbuKGxi [], int n) {
    char h3zXe4ajMwH;
    int fa09lX;
    int i9qtyRw;
    int l02G8I9z;
    {
        fa09lX = 843 - 843;
        while (n > fa09lX) {
            l02G8I9z = fa09lX;
            {
                i9qtyRw = 655 - 654;
                while (n > i9qtyRw) {
                    if (wyZRoTbuKGxi[l02G8I9z] > wyZRoTbuKGxi[i9qtyRw])
                        l02G8I9z = i9qtyRw;
                    i9qtyRw++;
                };
            }
            if (l02G8I9z != fa09lX) {
                h3zXe4ajMwH = wyZRoTbuKGxi[fa09lX];
                wyZRoTbuKGxi[fa09lX] = wyZRoTbuKGxi[l02G8I9z];
                wyZRoTbuKGxi[l02G8I9z] = h3zXe4ajMwH;
            }
            fa09lX = fa09lX + 1;
        };
    };
}

