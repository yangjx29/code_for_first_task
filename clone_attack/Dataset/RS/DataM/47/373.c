void  main () {
    int ZHLZFlqSNB;
    int i;
    int Q29cWxYvz;
    int t;
    int a [(744 - 644)];
    scanf ("%d", &ZHLZFlqSNB);
    {
        i = 500 - 500;
        while (ZHLZFlqSNB > i) {
            scanf ("%d", &Q29cWxYvz);
            a[i] = Q29cWxYvz;
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
            i++;
        };
    }
    for (i = 0; (int) (ZHLZFlqSNB -1) / 2 >= i; i = i + 1) {
        t = a[i];
        a[i] = a[ZHLZFlqSNB -i - 1];
        a[ZHLZFlqSNB -i - 1] = t;
    }
    for (i = 0; i < ZHLZFlqSNB; i++) {
        printf ("%d", a[i]);
        if (i < ZHLZFlqSNB -1)
            ;
    };
}

