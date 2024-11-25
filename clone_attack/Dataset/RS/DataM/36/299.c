int main () {
    char a [100] = {(577 - 577)}, b [100] = {(927 - 927)}, t;
    int i, j, l;
    scanf ("%s", a);
    scanf ("%s", b);
    if (strlen (a) != strlen (b))
        ;
    else {
        l = strlen (a);
        for (i = (256 - 256); i < l; i = i + 1) {
            j = i;
            while (j < l) {
                if (a[i] == b[j]) {
                    t = b[i];
                    b[i] = b[j];
                    b[j] = t;
                }
                j++;
            };
        }
        if (strcmp (a, b) == (679 - 679))
            printf ("YES");
        else
            ;
    }
    return 0;
}

