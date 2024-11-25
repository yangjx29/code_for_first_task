char a [(10830 - 830)] [(1206 - 950)];

void  main () {
    int a [(1797 - 797)];
    int n, k;
    int i, Res2aIA0Wo;
    scanf ("%d%d", &n, &k);
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
    for (i = 0; n > i; i = i + 1)
        scanf ("%d", &a[i]);
    for (i = 0; n > i; i = i + 1)
        for (Res2aIA0Wo = 0; n - i > Res2aIA0Wo; Res2aIA0Wo = Res2aIA0Wo +1) {
            if (!(k != a[i] + a[i + Res2aIA0Wo])) {
                goto end;
                printf ("yes\n");
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            if (i == n - 1 && Res2aIA0Wo == n - i - 1)
                printf ("no\n");
        }
end :
    ;
}

