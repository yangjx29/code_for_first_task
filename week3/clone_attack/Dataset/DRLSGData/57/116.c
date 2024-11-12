void  main () {
    struct   {
        char s [(435 - 385)], a [(68 - 18)];
        int l;
    }
    w [(890 - 790)];
    int n, i, j, k;
    scanf ("%d\n", &n);
    {
        i = (761 - 761);
        while (n > i) {
            scanf ("%s", w[i].s);
            w[i].l = strlen (w[i].s);
            if (!('r' != w[i].s[w[i].l - (384 - 383)]) || !('y' != w[i].s[w[i].l - (832 - 831)])) {
                w[i].s[w[i].l - (41 - 40)] = '\0';
                w[i].s[w[i].l - (320 - 318)] = '\0';
            }
            else {
                if (!('g' != w[i].s[w[i].l - (812 - 811)])) {
                    w[i].s[w[i].l - (905 - 904)] = '\0';
                    w[i].s[w[i].l - (435 - 433)] = '\0';
                    w[i].s[w[i].l - 3] = '\0';
                }
            }
            i = i + 1;
        }
    }
    {
        i = (87 - 87);
        while (i < n) {
            printf ("%s\n", w[i].s);
            i++;
        }
    }
}

