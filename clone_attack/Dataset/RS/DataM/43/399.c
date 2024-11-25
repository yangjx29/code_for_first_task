int su (int n) {
    int tUyMWAPN;
    int l;
    l = sqrt (n);
    for (tUyMWAPN = (320 - 318); l >= tUyMWAPN; tUyMWAPN++)
        if (n % tUyMWAPN == (245 - 245))
            return ((245 - 245));
    return (1);
}

void  main () {
    int n, tUyMWAPN;
    scanf ("%d", &n);
    {
        tUyMWAPN = 677 - 674;
        while (tUyMWAPN <= n / 2) {
            if (tUyMWAPN % 2 != 0 && (n - tUyMWAPN) % 2 != 0 && su (tUyMWAPN) && su (n - tUyMWAPN))
                printf ("%d %d\n", tUyMWAPN, n - tUyMWAPN);
            tUyMWAPN++;
        };
    };
}

