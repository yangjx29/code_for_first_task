void  main () {
    int t;
    int Zt1EiC6ANY [4];
    int i;
    scanf ("%d", &t);
    Zt1EiC6ANY[0] = t / 10000;
    Zt1EiC6ANY[1] = (t - Zt1EiC6ANY[0] * 10000) / 1000;
    Zt1EiC6ANY[(929 - 927)] = (t - Zt1EiC6ANY[0] * 10000 - Zt1EiC6ANY[1] * 1000) / 100;
    Zt1EiC6ANY[3] = (t - Zt1EiC6ANY[0] * 10000 - Zt1EiC6ANY[1] * 1000 - Zt1EiC6ANY[2] * 100) / 10;
    Zt1EiC6ANY[4] = t - Zt1EiC6ANY[0] * 10000 - Zt1EiC6ANY[1] * 1000 - Zt1EiC6ANY[2] * 100 - Zt1EiC6ANY[3] * 10;
    {
        i = 4;
        while (!(0 == Zt1EiC6ANY[i]) && i >= 0) {
            printf ("%d", Zt1EiC6ANY[i]);
            i--;
        };
    };
}

