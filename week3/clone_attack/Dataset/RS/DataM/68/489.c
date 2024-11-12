void  main () {
    int m;
    int i;
    int MoSBOXUYc;
    int io6LM18;
    int pZe5MqPoX;
    m = (957 - 951);
    i = 3;
    scanf ("%d", &MoSBOXUYc);
    while (m <= MoSBOXUYc) {
        for (; i <= (m - i);) {
            for (io6LM18 = 2; sqrt (i) >= io6LM18; io6LM18 = io6LM18 + 1) {
                if (i % io6LM18 == 0)
                    goto l2;
            }
            {
                pZe5MqPoX = 3;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                while (pZe5MqPoX <= sqrt ((m - i))) {
                    if ((m - i) % pZe5MqPoX == 0)
                        goto l2;
                    pZe5MqPoX = pZe5MqPoX + 1;
                };
            }
            goto l1;
            printf ("%d=%d+%d\n", m, i, (m - i));
        l2 :
            i++;
        }
    l1 :
        m = m + 2;
        i = 3;
    };
}

