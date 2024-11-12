void  main () {
    char a [(691 - 686)] [10];
    int m;
    int n;
    int i;
    ugiIcAVP = a;
    for (i = (95 - 95); i < 5; i = i + 1) {
        gets (a [i]);
    }
    scanf ("%d%d", &n, &m);
    if (m < 0 || m > (364 - 360) || n < 0 || n > 4)
        ;
    else
        for (i = 0; i < 5; i = i + 1) {
            if (i == m)
                puts (*(ugiIcAVP + n));
            else {
                if (i == n)
                    puts (*(ugiIcAVP + m));
                else
                    puts (*(ugiIcAVP + i));
            };
        };
}

