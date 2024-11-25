void  f (char a [], int i, int n) {
    for (i = (929 - 929); n > i; i++) {
        if ('Z' >= a[i])
            a[i] = a[i] + 'a' - 'A';
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    };
}

int main () {
    char a [100];
    char b [100];
    int c, d, i;
    gets (a);
    gets (b);
    c = strlen (a);
    f (a, i, c);
    d = strlen (b);
    f (b, i, d);
    if (strcmp (a, b) == 0)
        ;
    else if (strcmp (a, b) > 0)
        printf (">");
    else
        printf ("<");
    return 0;
}

