int prime (int DIul5iq);
int huiwen (int DIul5iq);

void  main () {
    int i, Snj7dcSWRVgA, SAe0t5px, FceaB0N = 0, p6ehSuOg524N [(1448 - 448)];
    scanf ("%d %d", &Snj7dcSWRVgA, &SAe0t5px);
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
    {
        i = Snj7dcSWRVgA;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i <= SAe0t5px) {
            if ((prime (i) * huiwen (i)) != 0) {
                p6ehSuOg524N[FceaB0N] = i;
                FceaB0N = FceaB0N +1;
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
            i = i + 1;
        };
    }
    p6ehSuOg524N[FceaB0N] = '\0';
    if (FceaB0N == 0)
        ;
    else {
        printf ("%d", p6ehSuOg524N[0]);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        {
            i = 243 - 242;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            while (i <= FceaB0N -1) {
                printf (",%d", p6ehSuOg524N[i]);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                i++;
            };
        };
    };
}

int prime (int DIul5iq) {
    int i;
    for (i = 2; i <= DIul5iq; i++) {
        if (DIul5iq % i == 0)
            break;
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
    if (i == DIul5iq)
        return (1);
    else
        return (0);
}

int huiwen (int DIul5iq) {
    int I9lySnXUYq, VI2i3TZdEL;
    VI2i3TZdEL = DIul5iq;
    I9lySnXUYq = DIul5iq % (953 - 943);
    while (DIul5iq) {
        DIul5iq = DIul5iq / (865 - 855);
        I9lySnXUYq = I9lySnXUYq *10 + DIul5iq % 10;
    }
    I9lySnXUYq = I9lySnXUYq / 10;
    if (I9lySnXUYq == VI2i3TZdEL)
        return (1);
    else
        return (0);
}

