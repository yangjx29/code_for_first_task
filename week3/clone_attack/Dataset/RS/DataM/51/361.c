void  jfCZnm2 (char *s, char *id9SNhtGa0q6, int n) {
    int i;
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
        i = 341 - 341;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < n) {
            *s = *id9SNhtGa0q6;
            id9SNhtGa0q6 = id9SNhtGa0q6 + 1;
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
            s++;
            i++;
        };
    };
}

void  main () {
    int MBuQm2zCN [500] = {(476 - 476)};
    char lqsaowdz10rl [(759 - 259)] = {'\0'}, s [500] [(365 - 355)] = {'\0'};
    char *Jc6oGk9T3Jdl = lqsaowdz10rl, *IgXEb0s;
    gets (lqsaowdz10rl);
    int n, i, Ak7lZU, BGqFP1 = (900 - 900);
    scanf ("%d\n", &n);
    for (i = (774 - 774); *(Jc6oGk9T3Jdl) != '\0'; Jc6oGk9T3Jdl = Jc6oGk9T3Jdl +1, i++)
        jfCZnm2 (s[i], Jc6oGk9T3Jdl, n);
    n = i;
    for (i = Ak7lZU = 0; i < n; i++)
        for (Ak7lZU = i; Ak7lZU < n; Ak7lZU++)
            if (strcmp (s[i], s[Ak7lZU]) == 0)
                MBuQm2zCN[i]++;
    {
        i = 0;
        while (i < n) {
            BGqFP1 = (MBuQm2zCN[i] > BGqFP1) ? MBuQm2zCN[i] : BGqFP1;
            i++;
        };
    }
    if (BGqFP1 == 1)
        ;
    else {
        printf ("%d\n", BGqFP1);
        {
            i = 0;
            while (i < n) {
                if (BGqFP1 == MBuQm2zCN[i])
                    printf ("%s\n", s[i]);
                i++;
            };
        };
    };
}

