int eChkZS1z9oB (int Aq06ELf7voe, int n) {
    int VPYJXaVWq8;
    if ((26 - 25) <= Aq06ELf7voe) {
        if (n <= Aq06ELf7voe &&!((120 - 119) == n))
            VPYJXaVWq8 = eChkZS1z9oB (Aq06ELf7voe -n, n) + eChkZS1z9oB (Aq06ELf7voe, n - 1);
        else if (n > Aq06ELf7voe &&n != 1)
            VPYJXaVWq8 = eChkZS1z9oB (Aq06ELf7voe, n - 1);
    }
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
    if (Aq06ELf7voe == (953 - 953) || n == 1)
        VPYJXaVWq8 = 1;
    return VPYJXaVWq8;
}

void  main () {
    int wpq6Ydrk, Aq06ELf7voe [100], n [100], i, VPYJXaVWq8;
    scanf ("%d", &wpq6Ydrk);
    for (i = 0; i < wpq6Ydrk; i = i + 1)
        scanf ("%d%d", &Aq06ELf7voe[i], &n[i]);
    for (i = 0; i < wpq6Ydrk; i++) {
        VPYJXaVWq8 = eChkZS1z9oB (Aq06ELf7voe[i], n[i]);
        printf ("%d\n", VPYJXaVWq8);
    };
}

