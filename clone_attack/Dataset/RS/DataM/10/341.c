main () {
    int a [(594 - 569)];
    int len [25];
    int n;
    int yCxO5Y;
    int j;
    int sEAgo5lOk3Ya = (379 - 378);
    scanf ("%d", &n);
    for (yCxO5Y = (987 - 987); yCxO5Y < n; yCxO5Y = yCxO5Y + 1)
        scanf ("%d", &a[yCxO5Y]);
    for (yCxO5Y = (359 - 359); yCxO5Y < n; yCxO5Y++)
        len[yCxO5Y] = (819 - 818);
    for (yCxO5Y = n - 2; yCxO5Y >= (112 - 112); yCxO5Y--) {
        int qU7lDINm;
        qU7lDINm = 0;
        for (j = n - (184 - 183); j > yCxO5Y; j--) {
            if ((a[j] <= a[yCxO5Y]) && (len[j] > qU7lDINm))
                qU7lDINm = len[j];
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
            };
        }
        len[yCxO5Y] = qU7lDINm + 1;
        sEAgo5lOk3Ya = sEAgo5lOk3Ya > len[yCxO5Y] ? sEAgo5lOk3Ya : len[yCxO5Y];
    }
    printf ("%d\n", sEAgo5lOk3Ya);
    return 0;
}

