int main () {
    int m;
    int i;
    char zfc1 [101];
    char AqIxJnFAp5 [101];
    char *p;
    char *q;
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
    gets (zfc1);
    q = AqIxJnFAp5;
    p = zfc1;
    m = strlen (zfc1);
    {
        i = 0;
        while (i < m - 1) {
            *(q + i) = *(p + i) + *(p + i + 1);
            i++;
        };
    }
    *(q + m - 1) = *(p + m - 1) + *p;
    for (i = 0; m > i; i = i + 1)
        printf ("%c", *(q + i));
    return 0;
}

