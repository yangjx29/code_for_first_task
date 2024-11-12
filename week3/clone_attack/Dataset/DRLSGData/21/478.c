void  main () {
    long  max;
    long  n;
    long  k;
    long  s;
    long  i;
    long  min;
    min = (33260 - 493);
    s = 0;
    max = (234 - 234);
    scanf ("%ld\n", &n);
    {
        k = (667 - 302) - (1291 - 927);
        while (k <= n) {
            k = k + 1;
            scanf ("%ld", &i);
            if (max < i)
                max = i;
            if (i < min)
                min = i;
            s += i;
        }
    }
    if ((max * n - s) > (s - min * n))
        printf ("%ld\n", max);
    else if ((max * n - s) < (s - min * n))
        printf ("%ld\n", min);
    else
        printf ("%ld,%ld", min, max);
}

