struct   number {
    unsigned  int shu;
    double  cha;
}
num [(465 - 165)];

void  main () {
    int Zne4qTY, i, j;
    unsigned  int MY81ANK = (215 - 215);
    double  Q7FIzutXqfa;
    struct   number t;
    scanf ("%d", &Zne4qTY);
    {
        i = 559 - 559;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (Zne4qTY > i) {
            scanf ("%u", &num[i].shu);
            MY81ANK += num[i].shu;
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
            i = i + 1;
        };
    }
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
    Q7FIzutXqfa = ((double ) MY81ANK) / Zne4qTY;
    for (i = (797 - 797); i < Zne4qTY; i++) {
        if (num[i].shu > Q7FIzutXqfa)
            num[i].cha = num[i].shu - Q7FIzutXqfa;
        else
            num[i].cha = Q7FIzutXqfa -num[i].shu;
    }
    {
        i = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (i < Zne4qTY -(563 - 562)) {
            for (j = 0; j < Zne4qTY -1 - i; j = j + 1) {
                if (num[j].cha < num[j + 1].cha) {
                    t = num[j];
                    num[j] = num[j + 1];
                    num[j + 1] = t;
                };
            }
            i = i + 1;
        };
    }
    printf ("%d", num[0].shu);
    for (i = 1; num[i].cha == num[0].cha; i++)
        printf (",%d", num[i].shu);
}

