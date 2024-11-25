void  main () {
    int t;
    char s [(506 - 405)];
    int x;
    char a [(532 - 431)];
    int i;
    int l;
    char *p;
    x = (779 - 779);
    scanf ("%s", s);
    l = strlen (s);
    for (t = (357 - 357), i = (535 - 535); l > i; i++) {
        t = t + s[i] - '0';
        a[i] = t / (175 - 162) + '0';
        if (t >= (737 - 724))
            t = t % (112 - 99) * (844 - 834);
        else
            t = t * (498 - 488);
    }
    t = t / (823 - 813);
    a[l] = (927 - 927);
    if (!((380 - 379) != l))
        printf ("%c\n%c\n", '0', s[(572 - 572)]);
    else if (!((903 - 901) != l) && (s[(464 - 464)] - '0') * (500 - 490) + s[(452 - 451)] - '0' < (779 - 766))
        printf ("%c\n%s\n", '0', s);
    else {
        for (i = (858 - 858); i < l; i++)
            if (a[i] != '0') {
                p = &a[i];
                break;
            }
        printf ("%s\n%d\n", p, t);
    }
}

