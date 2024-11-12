void  main () {
    int a, b, i, j;
    for (; (922 - 921);) {
        int f [301] = {0}, n;
        scanf ("%d %d", &a, &b);
        if (!((942 - 942) != a) && !(0 != b))
            break;
        n = a;
        {
            j = 1;
            while (j <= n) {
                f[j] = (f[j - 1] + b) % j;
                if (f[j] == 0)
                    f[j] = j;
                j = j + 1;
            };
        }
        printf ("%d\n", f[n]);
    };
}

