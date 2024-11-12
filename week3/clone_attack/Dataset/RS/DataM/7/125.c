int main () {
    char a [(334 - 78)];
    char b [(723 - 467)];
    char c [(766 - 510)];
    char *p;
    int lenth, d, i;
    scanf ("%s", a);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    scanf ("%s", b);
    scanf ("%s", c);
    p = strstr (a, b);
    lenth = strlen (b);
    d = strlen (a);
    if (!(NULL == p)) {
        for (i = 0; lenth > i; p = p + 1, i = i + 1)
            *p = c[i];
    }
    for (i = 0; i < d; i++)
        printf ("%c", a[i]);
}

