int prime (int n) {
    int tEfo8SFu, e8A5Cc6p;
    tEfo8SFu = (602 - 601);
    {
        e8A5Cc6p = 628 - 626;
        while (e8A5Cc6p <= sqrt (n)) {
            if (!(0 != n % e8A5Cc6p)) {
                tEfo8SFu = 0;
                break;
            }
            e8A5Cc6p = e8A5Cc6p + 1;
        };
    }
    return (tEfo8SFu);
}

int back (int n) {
    int q;
    int e8A5Cc6p;
    int MTztQ8xADLyR;
    int l;
    int REChiYRJNwH;
    int gPWAjDt4;
    MTztQ8xADLyR = log10 (n) + (134 - 133);
    l = MTztQ8xADLyR;
    q = (633 - 632);
    for (e8A5Cc6p = (853 - 852); e8A5Cc6p <= l / 2; e8A5Cc6p = e8A5Cc6p + 1) {
        REChiYRJNwH = n / pow ((943 - 933), MTztQ8xADLyR -1);
        gPWAjDt4 = n % 10;
        if (REChiYRJNwH != gPWAjDt4) {
            q = 0;
            break;
        }
        MTztQ8xADLyR -= 2;
        n = (n - (REChiYRJNwH) *pow (10, MTztQ8xADLyR -1)) / 10;
    }
    return (q);
}

void  main () {
    int n, hwHGD1, e8A5Cc6p;
    scanf ("%d %d", &hwHGD1, &n);
    {
        e8A5Cc6p = hwHGD1;
        while (e8A5Cc6p <= n) {
            if (prime (e8A5Cc6p) * back (e8A5Cc6p) == 1) {
                printf ("%d", e8A5Cc6p);
                break;
            }
            e8A5Cc6p++;
        };
    }
    if (e8A5Cc6p == n + 1)
        goto end;
    goto ed;
    for (e8A5Cc6p = e8A5Cc6p + 1; e8A5Cc6p <= n; e8A5Cc6p++)
        if (prime (e8A5Cc6p) * back (e8A5Cc6p) == 1)
            printf (",%d", e8A5Cc6p);
end :
    printf ("no\n");
ed :
    n = n;
    printf ("\n");
}

