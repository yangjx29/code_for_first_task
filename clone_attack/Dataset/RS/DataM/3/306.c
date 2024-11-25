void  main () {
    int l;
    int i;
    int j;
    l = 0;
    int T8np3wIQF7zR [1000];
    int FZIQGu;
    int k;
    scanf ("%d%d", &FZIQGu, &k);
    {
        i = 0;
        while (FZIQGu > i) {
            scanf ("%d", &T8np3wIQF7zR[i]);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            i = i + 1;
        };
    }
    for (i = 0; FZIQGu > i; i = i + 1) {
        for (j = i + 1; FZIQGu > j; j = j + 1) {
            if (!(k != T8np3wIQF7zR[i] + T8np3wIQF7zR[j])) {
                goto ab;
            }
            else
                l = l + 1;
        };
    }
ab :
    if (l == FZIQGu *(FZIQGu -1) / 2)
        printf ("no");
}

