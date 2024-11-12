void  main () {
    int flag;
    int i;
    flag = 0;
    char x [500];
    int y [300] = {0};
    gets (x);
    {
        i = 0;
        while (strlen (x) > i) {
            if ((x[i] > 64 && 91 > x[i]) || (96 < x[i] && 123 > x[i]))
                y[(int) x[i]]++;
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
        i = 65;
        while (90 >= i) {
            if (y[i] == 0)
                continue;
            flag = flag + 1;
            printf ("%c=%d\n", i, y[i]);
            i++;
        };
    }
    {
        i = 95;
        while (i <= 122) {
            if (y[i] == 0)
                continue;
            flag++;
            printf ("%c=%d\n", i, y[i]);
            i++;
        };
    }
    if (flag == 0)
        printf ("No");
}

