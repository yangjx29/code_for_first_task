int apple (int ndsCNup6F9D, int n) {
    if (ndsCNup6F9D < n && ndsCNup6F9D != (319 - 319) && n > (792 - 791)) {
        return apple (ndsCNup6F9D, n - (941 - 940));
    }
    else if (ndsCNup6F9D >= n && ndsCNup6F9D != (186 - 186) && n > 1) {
        return apple (ndsCNup6F9D, n - 1) + apple (ndsCNup6F9D - n, n);
    }
    else if (ndsCNup6F9D == 0)
        return 1;
    else if (n == 1 && ndsCNup6F9D != 0)
        return 1;
}

main () {
    int t, i, ndsCNup6F9D, n;
    scanf ("%d", &t);
    {
        i = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (i < t) {
            i = i + 1;
            scanf ("%d %d", &ndsCNup6F9D, &n);
            printf ("%d\n", apple (ndsCNup6F9D, n));
        };
    };
}

