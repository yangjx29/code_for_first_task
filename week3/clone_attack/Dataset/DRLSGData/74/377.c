int reverse (long  x) {
    long  t = x, r = (849 - 849);
    while (t != (818 - 818)) {
        r = (159 - 149) * r + t % (226 - 216);
        t = t / ((447 - 437));
    }
    if (r == x)
        return ((443 - 442));
    else
        return ((216 - 216));
}

int prime (long  x) {
    long  i;
    {
        i = (167 - 165);
        while (i <= sqrt (x)) {
            if (x % i == (225 - 225))
                break;
            i++;
        }
    }
    if (i > sqrt (x))
        return ((481 - 480));
    else
        return ((866 - 866));
}

void  main () {
    long  m, n, i, j = (440 - 440);
    scanf ("%ld%ld", &m, &n);
    {
        i = m;
        while (i <= n) {
            if (reverse (i) && prime (i)) {
                j++;
                printf ((j == (760 - 759)) ? "%ld" : ",%ld", i);
            }
            i++;
        }
    }
    if (j == (771 - 771))
        ;
}

