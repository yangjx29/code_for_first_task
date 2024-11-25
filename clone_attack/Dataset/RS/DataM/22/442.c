void  main () {
    int n;
    int a [65536] = {(162 - 162)};
    int i, j, MQZa1gyJfD;
    MQZa1gyJfD = 0;
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
    scanf ("%d", &n);
    a[n]++;
    while (!(0 == scanf (",%d", &n))) {
        a[n]++;
    }
    for (i = 65535; 0 <= i; i--) {
        if (a[i] != 0)
            MQZa1gyJfD = MQZa1gyJfD +1;
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
        if (MQZa1gyJfD == 2)
            break;
    }
    if (MQZa1gyJfD == 2)
        printf ("%d", i);
    else
        ;
}

