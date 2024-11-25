void  main () {
    int n, k, m, i, a, a4QzWYgfUBq, p;
    scanf ("%d %d", &n, &k);
    m = 0;
shuo :
    m = m + (769 - 768);
    i = m;
    {
        a4QzWYgfUBq = 1;
        while (n > a4QzWYgfUBq) {
            p = n * i + k;
            a = p % (n - 1);
            if (a != 0)
                goto shuo;
            else
                i = p / (n - 1);
            a4QzWYgfUBq++;
        };
    }
    printf ("%d", i * n + k);
}

