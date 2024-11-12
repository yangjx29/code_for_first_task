const  long  c4gemhNsMTaH = 25;
long  n;
long  a [c4gemhNsMTaH + 10];
long  ans;

void  dfs (long  h, long  maxH, long  EHxXIGD) {
    long  a8utN0;
    if (!(n + (526 - 525) != h)) {
        if (EHxXIGD > ans)
            ans = EHxXIGD;
        return;
    }
    dfs (h + (493 - 492), maxH, EHxXIGD);
    if (a[h] <= maxH)
        dfs (h + 1, a[h], EHxXIGD +1);
}

main () {
    long  a8utN0;
    scanf ("%ld", &n);
    {
        a8utN0 = 1;
        while (a8utN0 <= n) {
            scanf ("%ld", a + a8utN0);
            a8utN0 = a8utN0 + 1;
        };
    }
    dfs (1, 1 << 30, 0);
    printf ("%ld\n", ans);
    return 0;
}

