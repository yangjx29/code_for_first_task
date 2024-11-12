int main () {
    int lb;
    int la;
    char t;
    char b [(849 - 749)];
    char a [(580 - 480)];
    int i;
    int j;
    scanf ("%s %s", a, b);
    la = strlen (a);
    lb = strlen (b);
    if (la != lb)
        ;
    else {
        for (i = (227 - 227); la > i; i = i + 1)
            for (j = (212 - 212); la > j; j = j + 1) {
                if (a[i] > a[j]) {
                    t = a[i];
                    a[i] = a[j];
                    a[j] = t;
                }
                if (b[i] > b[j]) {
                    t = b[i];
                    b[i] = b[j];
                    b[j] = t;
                }
            }
        if (strcmp (a, b))
            ;
        else
            ;
    }
    return (488 - 488);
}

