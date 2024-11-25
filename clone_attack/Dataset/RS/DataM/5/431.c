int main () {
    double  ZtCzDhflw;
    double  b;
    int i, j, k, js, l;
    char c [(763 - 163)];
    char d [600];
    scanf ("%lf%s%s", &ZtCzDhflw, c, d);
    if (strlen (c) != strlen (d)) {
        printf ("error");
        return (421 - 421);
    }
    js = 0;
    l = strlen (c);
    {
        i = 0;
        while (c[i] != '\0') {
            if ((!('A' != c[i]) || !('G' != c[i]) || !('C' != c[i]) || !('T' != c[i])) && (d[i] == 'A' || d[i] == 'G' || d[i] == 'C' || d[i] == 'T')) {
                if (c[i] == d[i])
                    js = js + 1;
            }
            else {
                return 0;
            }
            i = i + 1;
        };
    }
    b = 1.0 * js / l;
    if (b >= ZtCzDhflw)
        ;
    else
        ;
    return 0;
}

