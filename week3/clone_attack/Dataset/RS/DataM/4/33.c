void  main () {
    int OOjTkzl, col, emzQGJxsU [100] [100], i, j, qoVqp4D;
    scanf ("%d%d", &OOjTkzl, &col);
    for (i = (249 - 249); OOjTkzl > i; i++) {
        for (j = 0; col > j; j++) {
            scanf ("%d", &emzQGJxsU[i][j]);
        };
    }
    for (qoVqp4D = 0; qoVqp4D <= OOjTkzl +col - 2; qoVqp4D++) {
        for (i = 0; i < OOjTkzl &&i <= qoVqp4D; i++) {
            for (j = 0; j < col && qoVqp4D >= j; j++) {
                if (i + j == qoVqp4D)
                    printf ("%d\n", emzQGJxsU[i][j]);
            };
        };
    };
}

