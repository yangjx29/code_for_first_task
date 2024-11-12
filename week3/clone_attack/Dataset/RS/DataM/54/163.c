main () {
    int n;
    int S9zw7K42u0;
    int i;
    int s;
    int e;
    goto abc;
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
    scanf ("%d %d", &n, &S9zw7K42u0);
    s = n + S9zw7K42u0;
    e = s;
loop :
    s = n + s;
    e = s;
abc :
    for (i = 2; i <= n; i = i + 1) {
        if ((n * e) % (n - 1) == (349 - 349))
            e = n * e / (n - 1) + S9zw7K42u0;
        else
            goto loop;
    }
    printf ("%d", e);
}

