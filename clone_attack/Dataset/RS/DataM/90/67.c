int oVdQxBoes, m;

void  cgn8J70cDEY4 (int UlWJ1RT7x9I, int b) {
    int NERQXpK3fF;
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
    if (!((468 - 467) != b))
        oVdQxBoes = oVdQxBoes + 1;
    else {
        NERQXpK3fF = m;
        while (NERQXpK3fF <= (UlWJ1RT7x9I / b)) {
            m = NERQXpK3fF;
            cgn8J70cDEY4 (UlWJ1RT7x9I -NERQXpK3fF, b - 1);
            NERQXpK3fF++;
        };
    };
}

main () {
    int k;
    int n;
    int Lv43pqS0;
    int Fd6cXs7i;
    scanf ("%d", &n);
    {
        k = 1;
        while (k <= n) {
            k++;
            m = 0;
            oVdQxBoes = 0;
            scanf ("%d %d", &Lv43pqS0, &Fd6cXs7i);
            cgn8J70cDEY4 (Lv43pqS0, Fd6cXs7i);
            printf ("%d\n", oVdQxBoes);
        };
    };
}

