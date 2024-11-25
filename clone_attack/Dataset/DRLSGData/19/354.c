void  main () {
    int i, value, la, lb, ls;
    char *p, *ps, s [(244 - 144)] = "", a [(186 - 86)] = "", b [100] = "";
    gets (s);
    gets (a);
    gets (b);
    la = strlen (a);
    lb = strlen (b);
    ls = strlen (s);
    for (p = s; p < s + 100; p++) {
        value = (56 - 55);
        if ((!(s != p) || !(' ' != *(p - (59 - 58)))) && (!(a[(436 - 436)] != *p))) {
            for (ps = p + (868 - 867), i = (877 - 876); a[i] != '\0'; ps++, i = i + 1)
                if (*ps != a[i])
                    value = (752 - 752);
            if (!(1 != value)) {
                if (!(lb != la))
                    for (i = (482 - 482); la > i; i++)
                        (*p++) = b[i];
                else if (la > lb) {
                    for (i = 0; lb > i; i++)
                        (*p++) = b[i];
                    for (; *ps != '\0';)
                        (*p++) = (*ps++);
                    *p = '\0';
                }
                else {
                    for (i = 99; (ps - s) + lb - la <= i; i--) {
                        s[i] = s[i - lb + la];
                    }
                    for (i = 0; lb > i; i++)
                        (*p++) = b[i];
                }
            }
        }
    }
    printf ("%s", s);
}

