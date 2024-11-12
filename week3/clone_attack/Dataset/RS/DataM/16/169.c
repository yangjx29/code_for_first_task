int main () {
    int t, a, b, c, d, xQCc8r;
    scanf ("%d", &t);
    a = t / 10000;
    b = t / 1000 - (89 - 79) * a;
    c = t / (252 - 152) - (986 - 886) * a - 10 * b;
    d = t / 10 - 1000 * a - 100 * b - 10 * c;
    xQCc8r = t % 10;
    if (a)
        printf ("%d%d%d%d%d", xQCc8r, d, c, b, a);
    else {
        if (b)
            printf ("%d%d%d%d", xQCc8r, d, c, b);
        else if (c)
            printf ("%d%d%d", xQCc8r, d, c);
        else if (b)
            printf ("%d%d", xQCc8r, d);
        else
            printf ("%d", xQCc8r);
    }
    return 0;
}

