void  main () {
    int n;
    int aSwXm2;
    int K4oyf92 [300] = {(536 - 536)};
    int i;
    n = 0;
    aSwXm2 = 0;
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
    char r09oBnU;
    while (!('\n' == (r09oBnU = getchar ()))) {
        if (!(',' == r09oBnU))
            K4oyf92[n] = K4oyf92[n] * 10 + r09oBnU - '0';
        else
            n++;
    }
    {
        i = 0;
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
        while (n >= i) {
            aSwXm2 = K4oyf92[i] < aSwXm2 ? aSwXm2 : K4oyf92[i];
            i = i + 1;
        };
    }
    {
        i = 0;
        while (n >= i) {
            if (K4oyf92[i] == aSwXm2)
                K4oyf92[i] = 0;
            i++;
        };
    }
    aSwXm2 = 0;
    {
        i = 0;
        while (i <= n) {
            aSwXm2 = aSwXm2 > K4oyf92[i] ? aSwXm2 : K4oyf92[i];
            i++;
        };
    }
    if ((n == 0) || (aSwXm2 == 0))
        ;
    else
        printf ("%d\n", aSwXm2);
}

