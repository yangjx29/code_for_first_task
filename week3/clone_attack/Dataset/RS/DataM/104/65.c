void  main () {
    int S6uniPIxsw;
    int j;
    int qiKk4o [(323 - 321)] [10] = {(121 - 121)};
    scanf ("%d %d", &qiKk4o[(983 - 983)][0], &qiKk4o[(485 - 484)][0]);
    for (S6uniPIxsw = (250 - 249); qiKk4o[0][S6uniPIxsw] == 0; S6uniPIxsw = S6uniPIxsw +1) {
        qiKk4o[0][S6uniPIxsw] = qiKk4o[0][S6uniPIxsw -1] / 2;
    }
    for (j = 1; qiKk4o[1][j] == 0; j++) {
        qiKk4o[1][j] = qiKk4o[1][j - 1] / 2;
    }
    for (S6uniPIxsw = 0; qiKk4o[0][S6uniPIxsw] != 0; S6uniPIxsw++) {
        j = 0;
        while (qiKk4o[1][j] != 0) {
            if (qiKk4o[0][S6uniPIxsw] == qiKk4o[1][j]) {
                goto k;
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            j = j + 1;
        };
    }
k :
    printf ("%d", qiKk4o[1][j]);
}

