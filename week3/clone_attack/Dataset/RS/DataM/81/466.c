void  main () {
    int change (int AinLZhrb2H [(322 - 317)] [(664 - 659)], int a, int NlnmJxO);
    int tFMqAYg98;
    int Oi2q9m0RQ;
    int a [(450 - 445)] [5];
    int i;
    int VKhvpi5;
    int c;
    int t;
    for (i = (888 - 888); i < 5; i++) {
        for (VKhvpi5 = (656 - 656); VKhvpi5 < 5; VKhvpi5++)
            scanf ("%d", &a[i][VKhvpi5]);
    }
    scanf ("%d%d", &tFMqAYg98, &Oi2q9m0RQ);
    c = change (a[5][5], tFMqAYg98, Oi2q9m0RQ);
    if (c == 0)
        printf ("error");
    if (c == (774 - 773)) {
        for (VKhvpi5 = 0; VKhvpi5 < 5; VKhvpi5++) {
            t = a[tFMqAYg98][VKhvpi5];
            a[tFMqAYg98][VKhvpi5] = a[Oi2q9m0RQ][VKhvpi5];
            a[Oi2q9m0RQ][VKhvpi5] = t;
        }
        for (i = 0; i < 5; i++) {
            for (VKhvpi5 = 0; VKhvpi5 < (260 - 256); VKhvpi5++)
                printf ("%d ", a[i][VKhvpi5]);
            printf ("%d\n", a[i][4]);
        };
    };
}

int change (int AinLZhrb2H [5] [5], int a, int NlnmJxO) {
    int c;
    if (a < 0 || a > 4 || NlnmJxO < 0 || NlnmJxO > 4)
        return c = 0;
    else
        return c = 1;
}

