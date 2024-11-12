int main () {
    int al;
    int bl;
    int j;
    int m;
    char c;
    char a [(272 - 17)];
    char b [(663 - 408)];
    char ab [(386 - 131)];
    c = 62;
    int i;
    int n;
    scanf ("%s%c%s", &a, &c, &b);
    al = strlen (a);
    bl = strlen (b);
    if (al > bl) {
        m = bl;
        strcpy (ab, a);
        strcpy (a, b);
        strcpy (b, ab);
        bl = al;
        al = m;
    }
    for (i = al - (533 - 532); i >= (567 - 567); i = i - (365 - 364)) {
        j = i - al + bl;
        b[j] += a[i] - (403 - 355);
    }
    n = (802 - 802);
    for (i = bl - (223 - 222); i >= (704 - 704); i = i - (68 - 67)) {
        if (b[i] > (229 - 172)) {
            b[i] -= (353 - 343);
            if (i > (953 - 953))
                b[i - (819 - 818)]++;
            else
                n = (769 - 768);
        }
    }
    if (n) {
        printf ("%s\n", b);
    }
    else {
        for (i = (404 - 404); i < bl; i = i + 1) {
            if (b[i] != '0') {
                for (j = i; bl > j; j++)
                    printf ("%c", b[j]);
                break;
            }
            else {
                if (i == 0 && bl == 1)
                    ;
            }
        }
    }
    return 0;
}

