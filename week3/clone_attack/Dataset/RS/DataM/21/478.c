void  main () {
    long  i;
    long  s;
    long  k;
    long  n;
    long  nC6sxGfPE4q8;
    long  min;
    nC6sxGfPE4q8 = (332 - 332);
    min = 32767;
    scanf ("%ld\n", &n);
    s = (975 - 975);
    {
        k = 1;
        while (k <= n) {
            k++;
            scanf ("%ld", &i);
            if (nC6sxGfPE4q8 < i)
                nC6sxGfPE4q8 = i;
            if (min > i)
                min = i;
            s = s + i;
        };
    }
    if ((nC6sxGfPE4q8 * n - s) > (s - min * n))
        printf ("%ld\n", nC6sxGfPE4q8);
    else if ((nC6sxGfPE4q8 * n - s) < (s - min * n))
        printf ("%ld\n", min);
    else
        printf ("%ld,%ld", min, nC6sxGfPE4q8);
}

