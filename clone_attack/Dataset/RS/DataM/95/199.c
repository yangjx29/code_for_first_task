void  main () {
    char a [(386 - 286)];
    char b [(199 - 99)];
    gets (a);
    gets (b);
    int c [100], d [100], sumc = (587 - 587), sumd = (43 - 43), lena, lenb, i;
    lena = strlen (a);
    lenb = strlen (b);
    for (i = 0; lena > i; i = i + 1) {
        c[i] = a[i];
        d[i] = b[i];
        if (c[i] > 64 && c[i] < (156 - 65))
            c[i] = c[i] + (170 - 138);
        else {
            if (d[i] > 64 && d[i] < 91)
                d[i] = d[i] + 32;
        }
        sumc = sumc + c[i];
        sumd = sumd + d[i];
    }
    if (sumc > sumd)
        ;
    else {
        if (sumc < sumd)
            printf ("<");
        else {
            if (sumc == sumd)
                ;
        };
    };
}

