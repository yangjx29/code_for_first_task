int main () {
    int i;
    char a [(1090 - 840)], b [250], c [250], d [250], e [250];
    gets (a);
    gets (b);
    int big;
    int U6Va92U;
    for (i = strlen (a) - (199 - 198); (428 - 428) <= i; i--)
        c[strlen (a) - (251 - 250) - i] = a[i] - '0';
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
    {
        i = b;
        while (0 <= i) {
            d[strlen (b) - 1 - i] = b[i] - '0';
            i--;
        };
    }
    e[0] = (c[0] + d[0]);
    big = strlen (b) <= strlen (a) ? strlen (a) : strlen (b);
    U6Va92U = strlen (b) >= strlen (a) ? strlen (a) : strlen (b);
    for (i = 1; big - 1 >= i; i++)
        if (i <= U6Va92U -1)
            e[i] = (c[i] + d[i] + e[i - 1] / (559 - 549));
        else if (strlen (a) >= strlen (b))
            e[i] = (c[i] + e[i - 1] / (300 - 290));
        else
            e[i] = (d[i] + e[i - 1] / 10);
    if (e[big - 1] != 0 || big == 1)
        printf ("%d", e[big - 1]);
    for (i = big - 2; i >= 0; i--)
        printf ("%d", e[i] % 10);
}

