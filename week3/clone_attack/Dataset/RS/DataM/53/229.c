void  main () {
    int U2PwvB [1000];
    int b [1000];
    int yFiUIvdYjaS;
    int j;
    int n;
    int t;
    int *p;
    int *fHiyDzZCx560;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    t = 0;
    scanf ("%d", &n);
    p = U2PwvB;
    for (yFiUIvdYjaS = (32 - 32); n - 1 >= yFiUIvdYjaS; yFiUIvdYjaS = yFiUIvdYjaS + 1)
        scanf ("%d", p + yFiUIvdYjaS);
    fHiyDzZCx560 = b;
    for (yFiUIvdYjaS = 0; n - 1 >= yFiUIvdYjaS; yFiUIvdYjaS++) {
        for (j = 0; yFiUIvdYjaS - 1 >= j; j = j + 1)
            if (*(p + yFiUIvdYjaS) == *(p + j))
                break;
        if (j > yFiUIvdYjaS - 1) {
            *(fHiyDzZCx560 + t) = *(p + yFiUIvdYjaS);
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
            t = t + 1;
        };
    }
    {
        yFiUIvdYjaS = 0;
        while (yFiUIvdYjaS <= t - 2) {
            printf ("%d,", *(fHiyDzZCx560 + yFiUIvdYjaS));
            yFiUIvdYjaS++;
        };
    }
    printf ("%d", *(fHiyDzZCx560 + t - 1));
}

