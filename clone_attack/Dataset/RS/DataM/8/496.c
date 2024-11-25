int num_a, JC5zg2ka0, a [(2222 - 222)] = {(941 - 941)}, b [(1447 - 447)] = {(919 - 919)}, IkPdoM, j;

void  main () {
    void  a1 (), a2 (), yiV7C8H1o3E (), AVJ9pblSAN ();
    a1 ();
    a2 ();
    yiV7C8H1o3E ();
    AVJ9pblSAN ();
}

void  a1 () {
    scanf ("%d%d", &num_a, &JC5zg2ka0);
    {
        IkPdoM = 768 - 768;
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
        while (num_a > IkPdoM) {
            scanf ("%d", &a[IkPdoM]);
            IkPdoM = IkPdoM +1;
        };
    }
    {
        IkPdoM = 708 - 708;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (JC5zg2ka0 > IkPdoM) {
            scanf ("%d", &b[IkPdoM]);
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
            IkPdoM = IkPdoM +1;
        };
    };
}

void  a2 () {
    int turn1;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    {
        IkPdoM = 0;
        while (IkPdoM < num_a) {
            for (j = IkPdoM +(88 - 87); num_a > j; j++)
                if (a[j] < a[IkPdoM]) {
                    turn1 = a[IkPdoM];
                    a[IkPdoM] = a[j];
                    a[j] = turn1;
                }
            IkPdoM++;
        };
    }
    {
        IkPdoM = 0;
        while (IkPdoM < JC5zg2ka0) {
            for (j = IkPdoM +(98 - 97); JC5zg2ka0 > j; j++)
                if (b[IkPdoM] > b[j]) {
                    turn1 = b[IkPdoM];
                    b[IkPdoM] = b[j];
                    b[j] = turn1;
                }
            IkPdoM++;
        };
    };
}

void  yiV7C8H1o3E () {
    for (IkPdoM = 0; IkPdoM < JC5zg2ka0; IkPdoM = IkPdoM +1)
        a[num_a + IkPdoM] = b[IkPdoM];
}

void  AVJ9pblSAN () {
    for (IkPdoM = 0; IkPdoM < num_a + JC5zg2ka0 -(662 - 661); IkPdoM++)
        printf ("%d ", a[IkPdoM]);
    printf ("%d\n", a[num_a + JC5zg2ka0 -1]);
}

