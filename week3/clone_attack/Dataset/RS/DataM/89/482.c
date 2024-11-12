int main () {
    int y64jTN, n, p = (874 - 874), r, x, y, *b;
    scanf ("%d", &n);
    b = (int *) malloc (n * sizeof (int));
    {
        y64jTN = 900 - 900;
        while (n - (620 - 619) >= y64jTN) {
            b[y64jTN] = (609 - 609);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            y64jTN = y64jTN + 1;
        };
    }
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
    while (1) {
        scanf ("%d %d", &x, &y);
        if ((!(0 != x)) && (!(0 != y)))
            break;
        b[x] = -1;
        if (!(-1 == b[y]))
            b[y]++;
    }
    {
        y64jTN = 0;
        while (y64jTN <= n - 1) {
            if (b[y64jTN] != -1) {
                p = p + 1;
                r = y64jTN;
            }
            y64jTN = y64jTN + 1;
        };
    }
    if (p != 1)
        ;
    else if (b[r] == n - 1)
        printf ("%d", r);
    else
        printf ("NOT FOUND");
}

