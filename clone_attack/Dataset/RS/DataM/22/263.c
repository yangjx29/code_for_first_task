void  main () {
    char VWlhD05rJHe [300];
    int GAU62q4 [300];
    int i;
    int z6p5Odw;
    int WgrkBHM;
    int AnHeXf3;
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
    int uFtNWPd8zA;
    int dhcBofw;
    scanf ("%d", &GAU62q4[(790 - 790)]);
    {
        i = 836 - 835;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (getchar () != '\n') {
            scanf ("%d", &GAU62q4[i]);
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
    {
        z6p5Odw = 0;
        while (z6p5Odw < i) {
            {
                dhcBofw = z6p5Odw + 1;
                while (dhcBofw < i) {
                    if (GAU62q4[dhcBofw] == GAU62q4[z6p5Odw])
                        GAU62q4[dhcBofw] = 0;
                    dhcBofw++;
                };
            }
            z6p5Odw++;
        };
    }
    {
        z6p5Odw = 0;
        while (z6p5Odw < i) {
            WgrkBHM = z6p5Odw;
            {
                AnHeXf3 = z6p5Odw + 1;
                while (AnHeXf3 < i) {
                    if (GAU62q4[WgrkBHM] < GAU62q4[AnHeXf3])
                        WgrkBHM = AnHeXf3;
                    AnHeXf3++;
                };
            }
            if (z6p5Odw != WgrkBHM) {
                uFtNWPd8zA = GAU62q4[z6p5Odw];
                GAU62q4[z6p5Odw] = GAU62q4[WgrkBHM];
                GAU62q4[WgrkBHM] = uFtNWPd8zA;
            }
            z6p5Odw++;
        };
    }
    if (i == 1)
        printf ("No");
    else {
        if (GAU62q4[1] == 0)
            printf ("No");
        else
            printf ("%d", GAU62q4[1]);
    };
}

