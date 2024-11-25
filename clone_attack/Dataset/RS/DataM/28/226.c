void  main () {
    int KwYM1P6K [400];
    int c;
    int NOPp3e;
    int k;
    int EuS3JVDie [10000] = {0};
    char a [10000];
    gets (a);
    k = 0;
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
    c = -1;
    NOPp3e = 0;
    while (!('\0' == a[NOPp3e])) {
        if (a[NOPp3e] == ' ')
            EuS3JVDie[NOPp3e] = 1;
        NOPp3e = NOPp3e +1;
    }
    EuS3JVDie[NOPp3e] = 1;
    NOPp3e = 0;
    while (a[NOPp3e]) {
        if (EuS3JVDie[NOPp3e] == 1 && EuS3JVDie[NOPp3e +1] == 0)
            c = NOPp3e;
        if (EuS3JVDie[NOPp3e] == 0 && EuS3JVDie[NOPp3e +1] == 1) {
            KwYM1P6K[k] = NOPp3e -c;
            k = k + 1;
        }
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
        NOPp3e = NOPp3e +1;
    }
    printf ("%d", KwYM1P6K[0]);
    {
        NOPp3e = 1;
        while (NOPp3e < k) {
            printf (",%d", KwYM1P6K[NOPp3e]);
            NOPp3e++;
        };
    }
    printf ("\n");
}

